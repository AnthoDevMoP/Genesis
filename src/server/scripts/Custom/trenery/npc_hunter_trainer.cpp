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
SDName: npc_hunter_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_hunter_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_hunter_trainer : public CreatureScript
{
public:
    npc_hunter_trainer() : CreatureScript("npc_hunter_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_HUNTER) 
                     {
                            _creature->MonsterWhisper("You are not hunter!", player->GetGUID());
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
              	player->ADD_GOSSIP_ITEM( 5, "Learn my spells - cost 10g "                    , GOSSIP_SENDER_MAIN, 451);
              	player->ADD_GOSSIP_ITEM( 5, " "                    , GOSSIP_SENDER_MAIN, 454);          
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
              	player->ADD_GOSSIP_ITEM( 5, "Learn my spells - cost 10g "                    , GOSSIP_SENDER_MAIN, 451);
              	player->ADD_GOSSIP_ITEM( 5, " "                    , GOSSIP_SENDER_MAIN, 454);
              	}

              	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
              	break;



              	case 451: // hunter spelly
              	player->CLOSE_GOSSIP_MENU();
if (player->GetMoney() < 100000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                     player->SaveToDB();
                     player->UpdateSkillsToMaxSkillsForLevel();
                     player->CastSpell(player,61456,false);
        // abylity
              	player->learnSpell(3044,false);
              	player->learnSpell(76250,false);
              	player->learnSpell(20043,false);
              	player->learnSpell(13159,false);
              	player->learnSpell(5118,false);
              	player->learnSpell(13165,false);
              	player->learnSpell(82661,false);
              	player->learnSpell(75,false);
              	player->learnSpell(1462,false);
              	player->learnSpell(883,false);
              	player->learnSpell(83242,false);
              	player->learnSpell(83243,false);
              	player->learnSpell(83244,false);
              	player->learnSpell(83245,false);
              	player->learnSpell(51753,false);
              	player->learnSpell(51755,false);
              	player->learnSpell(77767,false);
              	player->learnSpell(5116,false);
              	player->learnSpell(79682,false);
              	player->learnSpell(19263,false);
              	player->learnSpell(781,false);
              	player->learnSpell(2641,false);
              	player->learnSpell(20736,false);
              	player->learnSpell(6197,false);
              	player->learnSpell(77769,false);
              	player->learnSpell(13813,false);
              	player->learnSpell(82939,false);
              	player->learnSpell(1499,false);
              	player->learnSpell(60192,false);
              	player->learnSpell(13809,false);
              	player->learnSpell(82941,false);
              	player->learnSpell(13795,false);
              	player->learnSpell(82945,false);
              	player->learnSpell(34600,false);
              	player->learnSpell(82948,false);
              	player->learnSpell(6991,false);
              	player->learnSpell(5384,false);
              	player->learnSpell(1543,false);
              	player->learnSpell(1130,false);
              	player->learnSpell(34026,false);
              	player->learnSpell(53351,false);
              	player->learnSpell(86528,false);
              	player->learnSpell(87506,false);
              	player->learnSpell(53271,false);
              	player->learnSpell(86472,false);
              	player->learnSpell(87493,false);
              	player->learnSpell(136,false);
              	player->learnSpell(34477,false);
              	player->learnSpell(2643,false);
              	player->learnSpell(82243,false);
              	player->learnSpell(3045,false);
              	player->learnSpell(2973,false);
              	player->learnSpell(982,false);
              	player->learnSpell(1513,false);
              	player->learnSpell(19503,false);
              	player->learnSpell(1978,false);
              	player->learnSpell(56641,false);
              	player->learnSpell(1515,false);
              	player->learnSpell(19884,false);
              	player->learnSpell(19883,false);
              	player->learnSpell(19885,false);
              	player->learnSpell(19882,false);
              	player->learnSpell(19880,false);
              	player->learnSpell(19879,false);
              	player->learnSpell(19878,false);
              	player->learnSpell(1494,false);
              	player->learnSpell(19801,false);
              	player->learnSpell(76249,false);
              	player->learnSpell(82654,false);
              	player->learnSpell(2974,false);
// dodatek
              	player->learnSpell(79682,false);
              	player->learnSpell(93321,false);
              	
                               player->ModifyMoney(-100000);
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

void AddSC_npc_hunter_trainer()
{
    new npc_hunter_trainer();
}
