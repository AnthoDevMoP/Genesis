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
SDName: npc_dkk_taxi
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_dkk_taxi
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

//Includes
#include "ScriptPCH.h"


class npc_dkk_taxi : public CreatureScript
{
    public:
        npc_dkk_taxi() : CreatureScript("npc_dkk_taxi") { }

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
    player->ADD_GOSSIP_ITEM( 5, "Horne Patro"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "Dolne Patro"                    , GOSSIP_SENDER_MAIN, 452);
    player->ADD_GOSSIP_ITEM( 5, "Suteren"      , GOSSIP_SENDER_MAIN, 453);            
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
    player->ADD_GOSSIP_ITEM( 5, "Horne Patro"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "Dolne Patro"                    , GOSSIP_SENDER_MAIN, 452);
    player->ADD_GOSSIP_ITEM( 5, "Suteren"                    , GOSSIP_SENDER_MAIN, 453);
                        }

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;



case 451: // Horne Patro
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(609, 2393.52f, -5638.44f, 420.88f, 0.0f);
break;


case 452: // Dolne Patro
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(609, 2400.33f, -5634.36f, 377.02f, 0.0f);
break;


case 453: // Suteren
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(609, 2346.48f, -5693.17f, 153.92f, 0.0f);
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

void AddSC_npc_dkk_taxi()
{
    new npc_dkk_taxi();
}
