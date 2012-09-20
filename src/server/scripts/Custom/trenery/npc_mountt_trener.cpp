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
SDName: npc_mountt_trener
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_mountt_trener
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_mountt_trener : public CreatureScript
{
public:
    npc_mountt_trener() : CreatureScript("npc_mountt_trener") { }

    bool OnGossipHello(Player *player, Creature *_creature)
    {
        if (player->isInCombat())
        {
            player->CLOSE_GOSSIP_MENU();
            _creature->MonsterWhisper("Combat!", player->GetGUID());
            return true;
        }
        else
        {
                        player->ADD_GOSSIP_ITEM( 7, "Learn my Mounts spells - cost 200g"       , GOSSIP_SENDER_MAIN, 7780);
                	   player->ADD_GOSSIP_ITEM( 5, " "                    , GOSSIP_SENDER_MAIN, 454);

            
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
                        player->ADD_GOSSIP_ITEM( 7, "Learn my Mounts spells - cost 200g"       , GOSSIP_SENDER_MAIN, 7780);
              	   player->ADD_GOSSIP_ITEM( 5, " "                    , GOSSIP_SENDER_MAIN, 454);


                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

/********** Mount - Trener **********/

          
            case 7780: // Mount Trener
                player->CLOSE_GOSSIP_MENU();
if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->learnSpell(33388,false);
                player->learnSpell(34091,false);
                player->learnSpell(54197,false);
                player->learnSpell(34090,false);
                player->learnSpell(90267,false);
                player->learnSpell(33391,false);
                player->learnSpell(90265,false);
                               player->ModifyMoney(-2000000);
                player->CastSpell(player,61456,false);
 _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
          player->SaveToDB();
                                        } 
                break;
 default:
                                 break;
                          
    }
   }
  return true;
 }
};



void AddSC_npc_mountt_trener()
{
    new npc_mountt_trener();
}


