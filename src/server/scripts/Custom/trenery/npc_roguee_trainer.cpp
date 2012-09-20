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
SDName: npc_rogue_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_rogue_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_roguee_trainer : public CreatureScript
{
public:
    npc_roguee_trainer() : CreatureScript("npc_roguee_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_ROGUE) 
                     {
                            _creature->MonsterWhisper("You are not rogue!", player->GetGUID());
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



              	case 451: // rogue  spelly
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
              	player->learnSpell(76273,false);
              	player->learnSpell(76297,false);
              	player->learnSpell(1752,false);
              	player->learnSpell(1752,false);
              	player->learnSpell(79327,false);
              	player->learnSpell(1784,false);
              	player->learnSpell(921,false);
              	player->learnSpell(8676,false);
              	player->learnSpell(5277,false);
              	player->learnSpell(2842,false);
              	player->learnSpell(6770,false);
              	player->learnSpell(82245,false);
              	player->learnSpell(73651,false);
              	player->learnSpell(1766,false);
              	player->learnSpell(1776,false);
              	player->learnSpell(1804,false);
              	player->learnSpell(2983,false);
              	player->learnSpell(53,false);
              	player->learnSpell(5171,false);
              	player->learnSpell(1856,false);
              	player->learnSpell(1833,false);
              	player->learnSpell(1725,false);
              	player->learnSpell(408,false);
              	player->learnSpell(2836,false);
              	player->learnSpell(2094,false);
              	player->learnSpell(8647,false);
              	player->learnSpell(51722,false);
              	player->learnSpell(703,false);
              	player->learnSpell(1966,false);
              	player->learnSpell(1842,false);
              	player->learnSpell(1943,false);
              	player->learnSpell(1860,false);
              	player->learnSpell(86531,false);
              	player->learnSpell(87504,false);
              	player->learnSpell(32645,false);
              	player->learnSpell(31224,false);
              	player->learnSpell(26679,false);
              	player->learnSpell(5938,false);
              	player->learnSpell(57934,false);
              	player->learnSpell(51723,false);
              	player->learnSpell(86476,false);
              	player->learnSpell(87496,false);
              	player->learnSpell(74001,false);
              	player->learnSpell(73981,false);
              	player->learnSpell(76577,false);
// dodatek
              	player->learnSpell(2098,false);
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

void AddSC_npc_roguee_trainer()
{
    new npc_roguee_trainer();
}
