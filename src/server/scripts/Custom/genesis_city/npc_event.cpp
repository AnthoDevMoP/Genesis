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
SDName: npc_dk_taxi
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_vertexpinakle_taxi
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

//Includes
#include "ScriptPCH.h"


class npc_event : public CreatureScript
{
    public:
        npc_event() : CreatureScript("npc_event") { }

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
    player->ADD_GOSSIP_ITEM( 5, "-->tu zacnu<--"                    , GOSSIP_SENDER_MAIN, 450);
    player->ADD_GOSSIP_ITEM( 5, "Event zona 1"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "Event zona 2"                    , GOSSIP_SENDER_MAIN, 452);         
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

             case 454: //Back To Main Menu
                        {
    player->ADD_GOSSIP_ITEM( 5, "-->tu zacnu<--"                    , GOSSIP_SENDER_MAIN, 450);
    player->ADD_GOSSIP_ITEM( 5, "Event zona 1"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "Event zona 2"                    , GOSSIP_SENDER_MAIN, 452);
                        }

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;


case 450: // -->tu zacnu<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2705.44f, -4667.77f, 10.16f, 4.8f);
break;

case 451: // Port 1 lokacia
  player->CLOSE_GOSSIP_MENU();
  //player->TeleportTo(657, -909.04f, -186.17f, 664.50f, 0.0f);
break;


case 452: // Port 2 lokacia
  player->CLOSE_GOSSIP_MENU();
  //player->TeleportTo(657, -689.63f, -26.68f, 635.64f, 0.0f);
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

void AddSC_npc_event()
{
    new npc_event();
}
