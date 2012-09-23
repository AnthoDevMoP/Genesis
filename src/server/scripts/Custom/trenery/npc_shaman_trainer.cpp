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
SDName: npc_shaman_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_shaman_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_shaman_trainer : public CreatureScript
{
public:
    npc_shaman_trainer() : CreatureScript("npc_shaman_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_SHAMAN) 
                     {
                            _creature->MonsterWhisper("You are not shaman!", player->GetGUID());
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



              	case 451: // shaman spelly
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
              	player->learnSpell(2008,false);
              	player->learnSpell(76272,false);
              	player->learnSpell(556,false);
              	player->learnSpell(76780,false);
              	player->learnSpell(2825,false);
              	player->learnSpell(66843,false);
              	player->learnSpell(66842,false);
              	player->learnSpell(66844,false);
              	player->learnSpell(51886,false);
              	player->learnSpell(2062,false);
              	player->learnSpell(8042,false);
              	player->learnSpell(2484,false);
              	player->learnSpell(51730,false);
              	player->learnSpell(8184,false);
              	player->learnSpell(6196,false);
              	player->learnSpell(2894,false);
              	player->learnSpell(8349,false);
              	player->learnSpell(1535,false);
              	player->learnSpell(8050,false);
              	player->learnSpell(8227,false);
              	player->learnSpell(8042,false);
              	player->learnSpell(8056,false);
              	player->learnSpell(8033,false);
              	player->learnSpell(2645,false);
              	player->learnSpell(77472,false);
              	player->learnSpell(8177,false);
              	player->learnSpell(73920,false);
              	player->learnSpell(5394,false);
              	player->learnSpell(8004,false);
              	player->learnSpell(331,false);
              	player->learnSpell(32182,false);
              	player->learnSpell(51514,false);
              	player->learnSpell(1064,false);
              	player->learnSpell(421,false);
              	player->learnSpell(51505,false);
              	player->learnSpell(403,false);
              	player->learnSpell(324,false);
              	player->learnSpell(8190,false);
              	player->learnSpell(86529,false);
              	player->learnSpell(87507,false);
              	player->learnSpell(5675,false);
              	player->learnSpell(86477,false);
              	player->learnSpell(87497,false);
              	player->learnSpell(73899,false);
              	player->learnSpell(370,false);
              	player->learnSpell(20608,false);
              	player->learnSpell(8017,false);
              	player->learnSpell(3599,false);
              	player->learnSpell(79206,false);
              	player->learnSpell(5730,false);
              	player->learnSpell(8071,false);
              	player->learnSpell(8075,false);
              	player->learnSpell(87718,false);
              	player->learnSpell(36936,false);
              	player->learnSpell(8143,false);
              	player->learnSpell(73683,false);
              	player->learnSpell(73682,false);
              	player->learnSpell(73681,false);
              	player->learnSpell(131,false);
              	player->learnSpell(52127,false);
              	player->learnSpell(546,false);
              	player->learnSpell(76296,false);
              	player->learnSpell(57994,false);
              	player->learnSpell(8512,false);
              	player->learnSpell(8232,false);
              	player->learnSpell(3738,false);
// dodatek
              	player->learnSpell(8024,false);
              	player->learnSpell(73680,false);
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

void AddSC_npc_shaman_trainer()
{
    new npc_shaman_trainer();
}
