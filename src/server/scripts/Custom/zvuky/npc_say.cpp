/*
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

#define TEXT_1 "Vítej na Serveru!"

enum Yells
{
    SAY_RANDOM_0                                = -1999901,
    SAY_RANDOM_1                                = -1999902,
    //SAY_RANDOM_2                                = -1999903,
    //SAY_RANDOM_3                                = -1999904,
    //SAY_RANDOM_4                                = -1999905,
};


class npc_say : public CreatureScript
{
public:
    npc_say() : CreatureScript("npc_say") { }

    struct npc_sayAI : public ScriptedAI
    {
        npc_sayAI(Creature* c) : ScriptedAI(c) {}

        uint32 m_uiSayTimer;

        void UpdateAI(const uint32 uiDiff)
        {
            // Say timer
            if (m_uiSayTimer <= uiDiff)
            {
           // Random switch between 5 outcomes
                        DoScriptText(RAND(SAY_RANDOM_0, SAY_RANDOM_1), me);
                        m_uiSayTimer = 15000;                      //Say something agian in 15 seconds
            }
            else
                m_uiSayTimer -= uiDiff;
        }

      };

    CreatureAI* GetAI(Creature* creature) const
    {
        return new npc_sayAI(creature);
    }
};

void AddSC_npc_say()
{
    new npc_say();
}