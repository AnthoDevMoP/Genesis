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

class npc_mountworgen_trener : public CreatureScript
{
public:
    npc_mountworgen_trener() : CreatureScript("npc_mountworgen_trener") { }

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
              	player->ADD_GOSSIP_ITEM( 5, "Learn my Worgen spells - cost 10g "                    , GOSSIP_SENDER_MAIN, 9501);
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
              	player->ADD_GOSSIP_ITEM( 5, "Learn my Worgen spells - cost 10g "                    , GOSSIP_SENDER_MAIN, 9501);
              	   player->ADD_GOSSIP_ITEM( 5, " "                    , GOSSIP_SENDER_MAIN, 454);


                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

/********** Mount - Trener **********/

          
case 9501: // RACE_WORGEN
               player->CLOSE_GOSSIP_MENU();
if(player->getRace() != RACE_WORGEN) 
                     {
                            _creature->MonsterWhisper("You are not worgen!", player->GetGUID());
                   		return true;
              	}
			if (player->isInCombat())
            		{
                		player->CLOSE_GOSSIP_MENU();
                		_creature->MonsterWhisper("Combat!", player->GetGUID());
              		return true;
            		return true;
                        }
              	else
                        {
if (player->GetMoney() < 100000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->learnSpell(68976,false);
                player->learnSpell(68992,false);
                player->learnSpell(94293,false);
                player->learnSpell(68978,false);
                player->learnSpell(87840,false);
                player->learnSpell(68996,false);
                player->learnSpell(68975,false);
                               player->ModifyMoney(-100000);
                player->CastSpell(player,61456,false);
 _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
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



void AddSC_npc_mountworgen_trener()
{
    new npc_mountworgen_trener();
}


