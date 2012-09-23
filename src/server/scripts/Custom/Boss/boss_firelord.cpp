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
SDName: npc_dk_taxi
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_vertexpinakle_taxi
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

enum Yells
{
    // General
    SAY_AGGRO                                   = -999990,
    SAY_KILL                                    = -999991,
    SAY_DEATH                                   = -999992,

    // Spells
    SAY_FIREBALL                                = -999993,
    SAY_RAINOFFIRE                              = -999994,

    // Berserk
    SAY_BERSERK                                 = -999995,
};

enum Spells
{
    // Buffs
    BUFF_MOLTEN                                 = 79849,

    // Spells
    SPELL_FIREBALL                                    = 89854,
    SPELL_BLASTWAVE                                   = 95409,
    SPELL_RAINOFFIRE                                  = 95438,

    // Berserk
    SPELL_BERSERK                                     = 72525,
};

// Fire Lord Script
class boss_firelord : public CreatureScript
{
public:
    boss_firelord() : CreatureScript("boss_firelord") { }
 
    struct boss_firelordAI : public ScriptedAI
    {
    boss_firelordAI(Creature* pCreature) : ScriptedAI(pCreature) {}

        uint32 m_uiFireball_Timer;
        uint32 m_uiBlastwave_Timer;
        uint32 m_uiRainoffire_Timer;
        uint32 m_uiBerserk_Timer;

       void Reset()
       {
           m_uiFireball_Timer = 20000;          // 15 seconds
           m_uiBlastwave_Timer = 30000;         // 30 seconds
           m_uiRainoffire_Timer = 60000;        // 60 seconds
           m_uiBerserk_Timer = 300000;          // 5 minutes
       }

        void EnterCombat(Unit * target)
       {
           DoScriptText(SAY_AGGRO, me);
            DoCast(me, BUFF_MOLTEN);
       }
       void KilledUnit(Unit * victim)
       {
            if (victim->GetTypeId() == TYPEID_PLAYER)
                DoScriptText(SAY_KILL, me);
       }
       void JustDied(Unit* killer)
       {
            DoScriptText(SAY_DEATH, me);
       }

        void UpdateAI(const uint32 uiDiff)
       {
           if (!UpdateVictim())
               return;

                //Fireball
                if (m_uiFireball_Timer <= uiDiff)
                {
                        if (Unit* pTarget = SelectUnit(SELECT_TARGET_RANDOM, 0))
                        DoCast(pTarget, SPELL_FIREBALL);
                        DoScriptText(SAY_FIREBALL, me);

                        m_uiFireball_Timer = 15000;
                }
                        else
                        m_uiFireball_Timer -= uiDiff;

                //Blast Wave
                if (m_uiBlastwave_Timer <= uiDiff)
                {
                        DoCast(me->getVictim(), SPELL_BLASTWAVE);

                        m_uiBlastwave_Timer = 30000;
                }
                        else
                        m_uiBlastwave_Timer -= uiDiff;

                //Rain of Fire
                if (m_uiRainoffire_Timer <= uiDiff)
                {
                        DoCast(me->getVictim(), SPELL_RAINOFFIRE);
                        DoScriptText(SAY_RAINOFFIRE, me);

                        m_uiRainoffire_Timer = 60000;
                }
                        else
                        m_uiRainoffire_Timer -= uiDiff;

                //Berserk
                if (m_uiBerserk_Timer <= uiDiff)
                {
                        DoCast(me->getVictim(), SPELL_BERSERK);
                        DoScriptText(SAY_BERSERK, me);

                        m_uiBerserk_Timer = 300000;
                }
                        else
                        m_uiBerserk_Timer -= uiDiff;

                DoMeleeAttackIfReady();
        }
};

CreatureAI *GetAI(Creature *creature) const
{
    return new boss_firelordAI(creature); 
}

};

void AddSC_boss_firelord()
{
    new boss_firelord;
}