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
SDName: npc_warrior_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_warrior_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_warrior_trainer : public CreatureScript
{
public:
    npc_warrior_trainer() : CreatureScript("npc_warrior_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_WARRIOR) 
                     {
                            _creature->MonsterWhisper("You are not warrior!", player->GetGUID());
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



              	case 451: // warrior spelly
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
              	player->learnSpell(76268,false);
              	player->learnSpell(88163,false);
              	player->learnSpell(6673,false);
              	player->learnSpell(469,false);
              	player->learnSpell(1160,false);
              	player->learnSpell(2457,false);
              	player->learnSpell(2458,false);
              	player->learnSpell(71,false);
              	player->learnSpell(18499,false);
              	player->learnSpell(845,false);
              	player->learnSpell(86346,false);
              	player->learnSpell(676,false);
              	player->learnSpell(55694,false);
              	player->learnSpell(5308,false);
              	player->learnSpell(1715,false);
              	player->learnSpell(6544,false);
              	player->learnSpell(78,false);
              	player->learnSpell(57755,false);
              	player->learnSpell(1161,false);
              	player->learnSpell(100,false);
              	player->learnSpell(1134,false);
              	player->learnSpell(20252,false);
              	player->learnSpell(3411,false);
              	player->learnSpell(5246,false);
              	player->learnSpell(86479,false);
              	player->learnSpell(87500,false);
              	player->learnSpell(7384,false);
              	player->learnSpell(3127,false);
              	player->learnSpell(86526,false);
              	player->learnSpell(87509,false);
              	player->learnSpell(6552,false);
              	player->learnSpell(97462,false);
              	player->learnSpell(1719,false);
              	player->learnSpell(772,false);
              	player->learnSpell(20230,false);
              	player->learnSpell(6572,false);
              	player->learnSpell(64382,false);
              	player->learnSpell(2565,false);
              	player->learnSpell(871,false);
              	player->learnSpell(1464,false);
              	player->learnSpell(23920,false);
              	player->learnSpell(12678,false);
              	player->learnSpell(88161,false);
              	player->learnSpell(7386,false);
              	player->learnSpell(355,false);
              	player->learnSpell(6343,false);
              	player->learnSpell(34428,false);
              	player->learnSpell(76290,false);
              	player->learnSpell(1680,false);
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

void AddSC_npc_warrior_trainer()
{
    new npc_warrior_trainer();
}
