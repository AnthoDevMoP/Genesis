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
SDName: npc_mountt_trener
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_mountt_trener
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_skynning_trener : public CreatureScript
{
public:
    npc_skynning_trener() : CreatureScript("npc_skynning_trener") { }

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
                        player->ADD_GOSSIP_ITEM( 7, "Learn my Skyning spells - cost 10g"       , GOSSIP_SENDER_MAIN, 9603);
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
                        player->ADD_GOSSIP_ITEM( 7, "Learn my Skyning spells - cost 10g"       , GOSSIP_SENDER_MAIN, 9603);
              	   player->ADD_GOSSIP_ITEM( 5, " "                    , GOSSIP_SENDER_MAIN, 454);


                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

/********** Mount - Trener **********/

          
            case 9603: // skyning 
               player->CLOSE_GOSSIP_MENU();
if (player->GetMoney() < 100000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->learnSpell(53125,false);
                player->learnSpell(53662,false);
                player->learnSpell(53663,false);
                player->learnSpell(53664,false);
                player->learnSpell(53665,false);
                player->learnSpell(53666,false);
                player->learnSpell(74495,false);
                player->learnSpell(8613,false);
                player->learnSpell(8617,false);
                player->learnSpell(8618,false);
                player->learnSpell(10768,false);
                player->learnSpell(32678,false);
                player->learnSpell(50305,false);
                player->learnSpell(74522,false);
                player->UpdateSkill (393, 525);
                               player->ModifyMoney(-100000);
                player->CastSpell(player,61456,false);
 _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
          player->SaveToDB();
                break;

 default:
                                 break;
                          
    }
   }
  return true;
 }
};



void AddSC_npc_skynning_trener()
{
    new npc_skynning_trener();
}


