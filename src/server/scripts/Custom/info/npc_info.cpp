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



#include "ScriptPCH.h"

/*###
# generic defines
###*/

class npc_info : public CreatureScript
{
public:
    npc_info() : CreatureScript("npc_info") { }

    /*###
# generic defines
###*/
    bool OnGossipHello(Player *player, Creature *_creature)
                {
                        {
/********** effekty **********/
/********** effekty **********/
/********** menu **********/
    player->ADD_GOSSIP_ITEM( 7, "[Shop] ->"                    , GOSSIP_SENDER_MAIN, 8503);
    player->ADD_GOSSIP_ITEM( 7, "[Cities] ->"                    , GOSSIP_SENDER_MAIN, 5576);

/********** menu **********/ 
                  }

                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());         
                return true;
                 }
                bool OnGossipSelect(Player *player, Creature *_creature, uint32 sender, uint32 uiAction)
                 {
if (sender == GOSSIP_SENDER_MAIN)
                    {
                         player->PlayerTalkClass->ClearMenus();
                      switch(uiAction)
                         {
case 5576: //Cities
if ( player->GetTeam() == ALLIANCE ) //if alliance
                   {
    player->ADD_GOSSIP_ITEM( 5, "Stormwind"                    , GOSSIP_SENDER_MAIN, 1206);
    player->ADD_GOSSIP_ITEM( 5, "Ironforge"                    , GOSSIP_SENDER_MAIN, 1224);
    player->ADD_GOSSIP_ITEM( 5, "Darnassus"                    , GOSSIP_SENDER_MAIN, 1203);
    player->ADD_GOSSIP_ITEM( 5, "Exodar"                       , GOSSIP_SENDER_MAIN, 1216);
                   }
                   else if ( player->GetTeam() == HORDE ) //if horde
                   {
    player->ADD_GOSSIP_ITEM( 5, "Orgrimmar"                    , GOSSIP_SENDER_MAIN, 1215);
    player->ADD_GOSSIP_ITEM( 5, "Thunder Bluff"                , GOSSIP_SENDER_MAIN, 1225);
    player->ADD_GOSSIP_ITEM( 5, "Undercity"                    , GOSSIP_SENDER_MAIN, 1213);
    player->ADD_GOSSIP_ITEM( 5, "Silvermoon"                   , GOSSIP_SENDER_MAIN, 1217);
                   }
    player->ADD_GOSSIP_ITEM( 5, "Shattrath City"               , GOSSIP_SENDER_MAIN, 4014);
    player->ADD_GOSSIP_ITEM( 5, "Dalaran"                      , GOSSIP_SENDER_MAIN, 5585);
    player->ADD_GOSSIP_ITEM( 7, "<- [Main Menu]"          , GOSSIP_SENDER_MAIN, 5552);

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

case 5552: //Back To Main Menu
   {
    player->ADD_GOSSIP_ITEM( 7, "[Shop] ->"                    , GOSSIP_SENDER_MAIN, 8503);
    player->ADD_GOSSIP_ITEM( 7, "[Cities] ->"                    , GOSSIP_SENDER_MAIN, 5576);
                        }


                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

case 1203: // Teleport to Darnassus
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, 9947.52f, 2482.73f, 1316.21f, 0.0f);
break;

// Teleport to Stormwind
case 1206:
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(0, -8835.877930f, 620.708130f, 95.153793f, 0.0f);
break;

// Teleport to Undercity
case 1213:
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(0, 1819.71f, 238.79f, 60.5321f, 0.0f);
break;

// Teleport to Orgrimmar
case 1215:
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, 1571.649170f, -4398.892578f, 15.967260f, 0.0f);
break;

// Teleport to Exodar
case 1216:
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(530, -4073.03f, -12020.4f, -1.47f, 0.0f);
break;

// Teleport to Silvermoon
case 1217:
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(530, 9338.74f, -7277.27f, 13.7895f, 0.0f);
break;

// Teleport to Ironforge
case 1224:
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(0, -4924.07f, -951.95f, 501.55f, 5.40f);
break;

// Teleport to Thunder Bluff
case 1225:
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(1, -1290.0f, 147.033997f, 129.682007f, 4.919000f);
break;


/********** Shoop tele   **********/


case 8503: // Shoop tele 
  player->CLOSE_GOSSIP_MENU();
  player->TeleportTo(530, -1858.68f, 5440.50f, -10.46f, 1.13f);
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

void AddSC_npc_info()
{
    new npc_info();
}