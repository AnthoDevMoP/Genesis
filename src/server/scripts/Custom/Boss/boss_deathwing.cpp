/*
 * Copyright (C) Likan Mod 2012-2013 <https://github.com/ChaosDevLikan/Genesis/>
 * Copyright (C) 2009 Gameshoot.eu <http://www.Gameshoot.eu/>
 *
 * World of Warcraft: Cataclysm 
 * You can edit but you can not delete this copyright.
 * SkyFire Emulator - SkyFire Database  
 * Cataclysm Hybrid
 *
 * By Likan - Head Admin end Developer of Gameshoot.eu Server
 */

/* ScriptData
SDName: npc
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

enum Yells
{
    SAY_AGGRO                                     = -1000399,
	SAY_SUMMONINFERNAL                            = -1000400,
};

enum Spells
{
    //Spell of Deathwing
    SPELL_BUFF1                                   = 30482,      //Fire Armor
	SPELL_BUFF2                                   = 588,        //Inner Fire
	SPELL_DEBUFF1                                 = 339,        //Entangling Roots
	SPELL_DEBUFF2                                 = 172,        //Corruption
	SPELL_DEBUFF3                                 = 603,        //Bane of Doom
	SPELL_DKAOE                                   = 43265,      //Death and ...
	SPELL_FIRE1                                   = 5740,       //Rain of Fire
	SPELL_FIRE2                                   = 133,        //Fireball
	SPELL_SUMMONINFERNAL                          = 1122,       //Summon Infernal
};

class boss_deathwing : public CreatureScript
{
public:
    boss_deathwing() : CreatureScript("boss_deathwing") { }

    struct boss_deathwingAI : public ScriptedAI
    {
        boss_deathwingAI(Creature *c) : ScriptedAI(c) {}

        uint32 m_uiBuff1_Timer;
        uint32 m_uiBuff2_Timer;
        uint32 m_uiDebuff1_Timer;
        uint32 m_uiDebuff2_Timer;
        uint32 m_uiDebuff3_Timer;
		uint32 m_uiDkaoe_Timer;
		uint32 m_uiFire1_Timer;
		uint32 m_uiFire2_Timer;
        uint32 m_uiInfernal_Timer;
        uint32 m_uiInfernalSummoned;

        bool m_bInfernal;

        void Reset()
        {
            m_uiBuff1_Timer = 4000;
            m_uiBuff2_Timer = 2000;
            m_uiDebuff1_Timer = 1000;
            m_uiDebuff2_Timer = 70000;
            m_uiDebuff3_Timer = 90000;
			m_uiDkaoe_Timer = 8000;
			m_uiFire1_Timer = 13000;
			m_uiFire2_Timer = 17000;
            m_uiInfernal_Timer = 120000;                               //The time that Deathwing is banished
            m_uiInfernalSummoned = 120000;

            m_bInfernal = false;
        }

        void EnterCombat(Unit* /*pWho*/)
        {
            DoScriptText(SAY_AGGRO, me);
        }

        void JustSummoned(Creature* pSummoned)
        {
            if (Unit* pTarget = SelectUnit(SELECT_TARGET_RANDOM, 0))
                pSummoned->AI()->AttackStart(pTarget);
        }

        void UpdateAI(const uint32 uiDiff)
        {
            if (!UpdateVictim())
                return;

            //Buff1
            if (m_uiBuff1_Timer <= uiDiff)
            {
                DoCast(me, SPELL_BUFF1);

                m_uiBuff1_Timer = 600000;
            }
            else
                m_uiBuff1_Timer -= uiDiff;

            //Buff2
            if (m_uiBuff2_Timer <= uiDiff)
            {
                DoCast(me, SPELL_BUFF2);
                m_uiBuff2_Timer = 605000;
            }
            else
                m_uiBuff2_Timer -= uiDiff;

            //Debuff1
            if (m_uiDebuff1_Timer <= uiDiff)
            {
                DoCast(me->getVictim(), SPELL_DEBUFF1);
                m_uiDebuff1_Timer = 120000;
            }
            else
                m_uiDebuff1_Timer -= uiDiff;

            //Debuff2
            if (m_uiDebuff2_Timer <= uiDiff)
            {
                DoCast(me->getVictim(), SPELL_DEBUFF2);
                m_uiDebuff2_Timer = 123000;
            }
            else
                m_uiDebuff2_Timer -= uiDiff;

            //Debuff3
            if (m_uiDebuff3_Timer <= uiDiff)
            {
                DoCast(me->getVictim(), SPELL_DEBUFF3);
                m_uiDebuff3_Timer = 126000;
            }
            else
                m_uiDebuff3_Timer -= uiDiff;
				
			//DK AOE
			if (m_uiDkaoe_Timer <= uiDiff)
			{
			    DoCast(me->getVictim(), SPELL_DKAOE);
				m_uiDkaoe_Timer = 60000;
			}
			else
			    m_uiDkaoe_Timer -= uiDiff;
				
			//Fire1
			if (m_uiFire1_Timer <= uiDiff)
			{
			    DoCast(me->getVictim(), SPELL_FIRE1);
				m_uiFire1_Timer = 30000;
			}
			else
			    m_uiFire1_Timer -= uiDiff;
				
			//Fire2
			if (m_uiFire2_Timer <= uiDiff)
			{
			    DoCast(me->getVictim(), SPELL_FIRE2);
				m_uiFire2_Timer = 5000;
			}
			else
			    m_uiFire2_Timer -= uiDiff;

			//Summon Infernal
            if (m_uiInfernal_Timer <= uiDiff)
            {
                DoCast(me, SPELL_SUMMONINFERNAL);
                m_uiInfernal_Timer = 60000;
            }
			else
			    m_uiInfernal_Timer -= uiDiff;

            DoMeleeAttackIfReady();
        }
    };

    CreatureAI *GetAI(Creature *creature) const
    {
        return new boss_deathwingAI(creature);
    }
};

void AddSC_boss_deathwing()
{
    new boss_deathwing;
}
