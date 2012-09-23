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
SDName: npc_shoop_info
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_shoop_info
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

enum Yells
{
    SAY_RANDOM_0                                = -1999901,
    SAY_RANDOM_1                                = -1999902,
};


class npc_potkan : public CreatureScript
{
public:
    npc_potkan() : CreatureScript("npc_potkan") { }

    struct npc_potkanAI : public ScriptedAI
    {
        npc_potkanAI(Creature* c) : ScriptedAI(c) {}

        uint32 m_uiSayTimer;

        void UpdateAI(const uint32 uiDiff)
        {
            // Say timer
            if (m_uiSayTimer <= uiDiff)
            {
           // Random switch between 5 outcomes
                        DoScriptText(RAND(SAY_RANDOM_0, SAY_RANDOM_1), me);
                        m_uiSayTimer = 100000;                      //Say something agian in 25 seconds
            }
            else
                m_uiSayTimer -= uiDiff;
        }

      };

    CreatureAI* GetAI(Creature* creature) const
    {
        return new npc_potkanAI(creature);
    }
};

void AddSC_npc_potkan()
{
    new npc_potkan();
}