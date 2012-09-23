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
SDName: npc_npc_desence_taxi
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_desence_taxi
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

//Includes
#include "ScriptPCH.h"


class npc_desence_taxi : public CreatureScript
{
    public:
        npc_desence_taxi() : CreatureScript("npc_desence_taxi") { }

                               bool OnGossipHello(Player *player, Creature *_creature)

                {

         
                        if (player->isInCombat())
                        {
                                player->CLOSE_GOSSIP_MENU();
                                _creature->MonsterWhisper("Si v boji , prid pozdeji ! / You are in combat. Come back later!", player->GetGUID());

                        return true;
                        }
                else
                        {
                        player->ADD_GOSSIP_ITEM( 5, "up"       , GOSSIP_SENDER_MAIN, 8064);
                        player->ADD_GOSSIP_ITEM( 5, "down"       , GOSSIP_SENDER_MAIN, 8065);                     
                        }

                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());         
                return true;
                }

                bool OnGossipSelect(Player *player, Creature *_creature, uint32 sender, uint32 uiAction)
                {
                    if (player->isInCombat())
                    {
                                player->CLOSE_GOSSIP_MENU();
                                _creature->MonsterWhisper("Combat !", player->GetGUID());
                                return true;
                   }
                    if (sender == GOSSIP_SENDER_MAIN)
                    {
                         player->PlayerTalkClass->ClearMenus();
                      switch(uiAction)
                         {

player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

                 case 5552: // maps Lvl 80-85
                        {
                        player->ADD_GOSSIP_ITEM( 5, "up"       , GOSSIP_SENDER_MAIN, 8064);
                        player->ADD_GOSSIP_ITEM( 5, "down"       , GOSSIP_SENDER_MAIN, 8065);                         
                        }

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;



         
            case 8064: // up
                player->CLOSE_GOSSIP_MENU();
                player->TeleportTo(669, -259.528992f, -224.621994f, 190.184006f, 0.0f);
                break;

         
            case 8065: // down
                player->CLOSE_GOSSIP_MENU();
                player->TeleportTo(669, -206.530197f, -224.157227f, 76.646088f, 0.0f);
                break;

             default:

        break;                   
    }
   }
  return true;
 }
};

/*###
#
###*/

void AddSC_npc_desence_taxi()
{
    new npc_desence_taxi();
}
