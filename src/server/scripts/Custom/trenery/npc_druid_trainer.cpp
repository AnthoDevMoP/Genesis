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
SDName: npc_druid_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_druid_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_druid_trainer : public CreatureScript
{
public:
    npc_druid_trainer() : CreatureScript("npc_druid_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_DRUID) 
                     {
                            _creature->MonsterWhisper("You are not druid!", player->GetGUID());
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



              	case 451: // druid spelly
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
              	player->learnSpell(76275,false);
              	player->learnSpell(76300,false);
              	player->learnSpell(84736,false);
              	player->learnSpell(5176,false);
              	player->learnSpell(8921,false);
              	player->learnSpell(467,false);
              	player->learnSpell(339,false);
              	player->learnSpell(768,false);
              	player->learnSpell(1082,false);
              	player->learnSpell(22568,false);
              	player->learnSpell(50464,false);
              	player->learnSpell(1822,false);
              	player->learnSpell(774,false);
              	player->learnSpell(2912,false);
              	player->learnSpell(33876,false);
              	player->learnSpell(33878,false);
              	player->learnSpell(5215,false);
              	player->learnSpell(8936,false);
              	player->learnSpell(50769,false);
              	player->learnSpell(5487,false);
              	player->learnSpell(99,false);
              	player->learnSpell(6795,false);
              	player->learnSpell(6807,false);
              	player->learnSpell(18960,false);
              	player->learnSpell(1066,false);
              	player->learnSpell(783,false);
              	player->learnSpell(779,false);
              	player->learnSpell(5570,false);
              	player->learnSpell(16864,false);
              	player->learnSpell(20484,false);
              	player->learnSpell(5229,false);
              	player->learnSpell(6785,false);
              	player->learnSpell(81170,false);
              	player->learnSpell(80964,false);
              	player->learnSpell(80965,false);
              	player->learnSpell(770,false);
              	player->learnSpell(16857,false);
              	player->learnSpell(2782,false);
              	player->learnSpell(5217,false);
              	player->learnSpell(8998,false);
              	player->learnSpell(1850,false);
              	player->learnSpell(20719,false);
              	player->learnSpell(5209,false);
              	player->learnSpell(29166,false);
              	player->learnSpell(2908,false);
              	player->learnSpell(1126,false);
              	player->learnSpell(5211,false);
              	player->learnSpell(5225,false);
              	player->learnSpell(9005,false);
              	player->learnSpell(62078,false);
              	player->learnSpell(62600,false);
              	player->learnSpell(16914,false);
              	player->learnSpell(5221,false);
              	player->learnSpell(2637,false);
              	player->learnSpell(86530,false);
              	player->learnSpell(87505,false);
              	player->learnSpell(22842,false);
              	player->learnSpell(16689,false);
              	player->learnSpell(1079,false);
              	player->learnSpell(22812,false);
              	player->learnSpell(33943,false);
              	player->learnSpell(22570,false);
              	player->learnSpell(33763,false);
              	player->learnSpell(33745,false);
              	player->learnSpell(740,false);
              	player->learnSpell(40120,false);
              	player->learnSpell(33786,false);
              	player->learnSpell(52610,false);
              	player->learnSpell(5185,false);
              	player->learnSpell(86470,false);
              	player->learnSpell(87491,false);
              	player->learnSpell(78777,false);
              	player->learnSpell(77758,false);
              	player->learnSpell(77761,false);
              	player->learnSpell(77764,false);
              	player->learnSpell(88747,false);
              	player->learnSpell(88751,false);
// dodatek
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

void AddSC_npc_druid_trainer()
{
    new npc_druid_trainer();
}
