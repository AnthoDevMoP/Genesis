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
SDName: npc_mage_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_mage_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_mage_trainer : public CreatureScript
{
public:
    npc_mage_trainer() : CreatureScript("npc_mage_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_MAGE) 
                     {
                            _creature->MonsterWhisper("You are not mage!", player->GetGUID());
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



              	case 451: // mage spelly
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
              	player->learnSpell(76276,false);
              	player->learnSpell(76298,false);
              	player->learnSpell(133,false);
              	player->learnSpell(5143,false);
              	player->learnSpell(2136,false);
              	player->learnSpell(116,false);
              	player->learnSpell(122,false);
              	player->learnSpell(2139,false);
              	player->learnSpell(92315,false);
              	player->learnSpell(12051,false);
              	player->learnSpell(118,false);
              	player->learnSpell(1953,false);
              	player->learnSpell(120,false);
              	player->learnSpell(30451,false);
              	player->learnSpell(1449,false);
              	player->learnSpell(3565,false);
              	player->learnSpell(32271,false);
              	player->learnSpell(3562,false);
              	player->learnSpell(3567,false);
              	player->learnSpell(32272,false);
              	player->learnSpell(3561,false);
              	player->learnSpell(49359,false);
              	player->learnSpell(3566,false);
              	player->learnSpell(3563,false);
              	player->learnSpell(2948,false);
              	player->learnSpell(45438,false);
              	player->learnSpell(475,false);
              	player->learnSpell(130,false);
              	player->learnSpell(30482,false);
              	player->learnSpell(11419,false);
              	player->learnSpell(32266,false);
              	player->learnSpell(11416,false);
              	player->learnSpell(11417,false);
              	player->learnSpell(32267,false);
              	player->learnSpell(10059,false);
              	player->learnSpell(49360,false);
              	player->learnSpell(11420,false);
              	player->learnSpell(11418,false);
              	player->learnSpell(2120,false);
              	player->learnSpell(88148,false);
              	player->learnSpell(1463,false);
              	player->learnSpell(759,false);
              	player->learnSpell(55342,false);
              	player->learnSpell(89744,false);
              	player->learnSpell(10,false);
              	player->learnSpell(49361,false);
              	player->learnSpell(49358,false);
              	player->learnSpell(7302,false);
              	player->learnSpell(44614,false);
              	player->learnSpell(1459,false);
              	player->learnSpell(61721,false);
              	player->learnSpell(28272,false);
              	player->learnSpell(61305,false);
              	player->learnSpell(28271,false);
              	player->learnSpell(61780,false);
              	player->learnSpell(33690,false);
              	player->learnSpell(35715,false);
              	player->learnSpell(33691,false);
              	player->learnSpell(35717,false);
              	player->learnSpell(6117,false);
              	player->learnSpell(30449,false);
              	player->learnSpell(53140,false);
              	player->learnSpell(53142,false);
              	player->learnSpell(43987,false);
              	player->learnSpell(66,false);
              	player->learnSpell(61316,false);
              	player->learnSpell(86467,false);
              	player->learnSpell(86473,false);
              	player->learnSpell(82731,false);
              	player->learnSpell(82691,false);
              	player->learnSpell(82676,false);
              	player->learnSpell(88345,false);
              	player->learnSpell(88346,false);
              	player->learnSpell(88342,false);
              	player->learnSpell(88344,false);
              	player->learnSpell(80353,false);
// dodatek
              	player->learnSpell(30455,false);
              	player->learnSpell(543,false);
              	player->learnSpell(42955,false);
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

void AddSC_npc_mage_trainer()
{
    new npc_mage_trainer();
}
