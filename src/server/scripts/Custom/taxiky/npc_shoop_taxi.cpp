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
SDName: npc_shoop_taxi
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_shoop_taxi
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

//Includes
#include "ScriptPCH.h"


class npc_shoop_taxi : public CreatureScript
{
    public:
        npc_shoop_taxi() : CreatureScript("npc_shoop_taxi") { }

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
    player->ADD_GOSSIP_ITEM( 5, "Shoop tools"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "Trainers"                    , GOSSIP_SENDER_MAIN, 452);
    player->ADD_GOSSIP_ITEM( 5, "Proffesions"                    , GOSSIP_SENDER_MAIN, 453);
    player->ADD_GOSSIP_ITEM( 5, "Vendors"                    , GOSSIP_SENDER_MAIN, 454);
    player->ADD_GOSSIP_ITEM( 5, "Taxis"      , GOSSIP_SENDER_MAIN, 455);            
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

             case 456: //Back To Main Menu
                        {
    player->ADD_GOSSIP_ITEM( 5, "Shoop tools"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "Trainers"                    , GOSSIP_SENDER_MAIN, 452);
    player->ADD_GOSSIP_ITEM( 5, "Proffesions"                    , GOSSIP_SENDER_MAIN, 453);
    player->ADD_GOSSIP_ITEM( 5, "Vendors"                    , GOSSIP_SENDER_MAIN, 454);
    player->ADD_GOSSIP_ITEM( 5, "Taxis"      , GOSSIP_SENDER_MAIN, 455);
                        }

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;



case 451: // Shoop tools
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(530, -1879.93f, 5461.65f, -12.42f, 0.0f);
break;


case 452: // Trieners
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(530, -1828.23f, 5447.99f, -12.42f, 0.0f);
break;


case 453: // Proffesions 
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(530, -1852.51f, 5407.94f, -12.42f, 0.0f);
break;


case 454: // Vendors
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(530, -1894.54f, 5415.85f, -12.42f, 0.0f);
break;


case 455: // taxis
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(530, -1873.44f, 5434.38f, -10.46f, 0.0f);
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

void AddSC_npc_shoop_taxi()
{
    new npc_shoop_taxi();
}
