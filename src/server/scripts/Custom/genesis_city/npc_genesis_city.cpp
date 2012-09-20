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

/*###
# generic defines
###*/

/*###
# generic Includes
###*/

#include "ScriptPCH.h"


class npc_genesis_city : public CreatureScript
{
    public:
        npc_genesis_city() : CreatureScript("npc_genesis_city") { }

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
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis City<--"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Skakacka<-- "                    , GOSSIP_SENDER_MAIN, 461);
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Duel Zona<--"                    , GOSSIP_SENDER_MAIN, 450);
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Male<--"                    , GOSSIP_SENDER_MAIN, 452); 
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Bank<--"                    , GOSSIP_SENDER_MAIN, 453);
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Bar<--"                    , GOSSIP_SENDER_MAIN, 454); 
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Glyphs<--"                    , GOSSIP_SENDER_MAIN, 455);  
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Tools<--"                    , GOSSIP_SENDER_MAIN, 456);  
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Trainer<--"                    , GOSSIP_SENDER_MAIN, 457);  
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Mounts<--"                    , GOSSIP_SENDER_MAIN, 458);   
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Gems<--"                    , GOSSIP_SENDER_MAIN, 459); 
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Miscellaneous<-- "                    , GOSSIP_SENDER_MAIN, 460);
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

             case 500: //Back To Main Menu
                        {
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis City<--"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Skakacka<-- "                    , GOSSIP_SENDER_MAIN, 461);
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Duel Zona<--"                    , GOSSIP_SENDER_MAIN, 450);
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Male<--"                    , GOSSIP_SENDER_MAIN, 452); 
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Bank<--"                    , GOSSIP_SENDER_MAIN, 453);
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Bar<--"                    , GOSSIP_SENDER_MAIN, 454); 
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Glyphs<--"                    , GOSSIP_SENDER_MAIN, 455);  
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Tools<--"                    , GOSSIP_SENDER_MAIN, 456);  
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Trainer<--"                    , GOSSIP_SENDER_MAIN, 457);  
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Mounts<--"                    , GOSSIP_SENDER_MAIN, 458);   
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Gems<--"                    , GOSSIP_SENDER_MAIN, 459); 
    player->ADD_GOSSIP_ITEM( 5, "-->Genesis Miscellaneous<-- "                    , GOSSIP_SENDER_MAIN, 460);
                        }
                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;


case 450: // -->tu zacnu<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2705.44f, -4667.77f, 10.16f, 4.8f);
break;

case 451: // -->Genesis citi<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2707.30f, -4960.05f, 25.57f, 3.91f);
break;

case 452: // -->Genesis Male<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2716.21f, -5038.54f, 21.22f, 3.89f);
break;

case 453: // -->Genesis Bank<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2638.63f, -5053.52f, 42.80f, 4.11f);
break;

case 454: // -->Genesis Bar<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2636.93f, -5053.09f, 30.96f, 5.09f);
break;

case 455: // -->Genesis Glyphs<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2623.01f, -5002.21f, 22.44f, 0.52f);
break;

case 456: // -->Genesis Tools<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2644.44f, -4992.22f, 26.89f, 5.71f);
break;

case 457: // -->Genesis Trainer<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2647.78f, -5000.81f, 21.83f, 3.61f);
break;

case 458: // -->Genesis Mounts<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2660.16f, -5033.64f, 22.79f, 5.52f);
break;

case 459: // -->Genesis Gems<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2701.84f, -5022.43f, 21.44f, 0.73f);
break;

case 460: // -->Genesis Miscellaneous<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2696.20f, -5043.84f, 23.38f, 2.46f);
break;

case 461: // -->Genesis Skakacka<--
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -2816.47f, -4752.09f, 6.69f, 5.54f);
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

void AddSC_npc_genesis_city()
{
    new npc_genesis_city();
}
