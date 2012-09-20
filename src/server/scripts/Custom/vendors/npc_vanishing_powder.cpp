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
SDName: npc_vanishing_powder
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_vanishing_powder
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

//Includes
#include "ScriptPCH.h"


class npc_vanishing_powder : public CreatureScript
{
    public:
        npc_vanishing_powder() : CreatureScript("npc_vanishing_powder") { }

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
    player->ADD_GOSSIP_ITEM( 5, "1x Vanishing Powder - cost 1g"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "1x Dust of Disappearance - cost 1g"                    , GOSSIP_SENDER_MAIN, 452);           
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
    player->ADD_GOSSIP_ITEM( 5, "1x Vanishing Powder - cost 1g"                    , GOSSIP_SENDER_MAIN, 451);
    player->ADD_GOSSIP_ITEM( 5, "1x Dust of Disappearance - cost 1g"                    , GOSSIP_SENDER_MAIN, 452); 
                        }

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;



case 451: // 1x Vanishing Powder - cost 1g
player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 10000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->AddItem(64670, 1);
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-10000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        }
                                     
                                     break;

case 452: // 1x Dust of Disappearance - cost 1g
player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 10000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->AddItem(63388, 1);
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-10000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        }
                                     
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

void AddSC_npc_vanishing_powder()
{
    new npc_vanishing_powder();
}
