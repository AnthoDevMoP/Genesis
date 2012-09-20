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
SDName: npc_priest_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_priest_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_priest_trainer : public CreatureScript
{
public:
    npc_priest_trainer() : CreatureScript("npc_priest_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_PRIEST) 
                     {
                            _creature->MonsterWhisper("You are not priest!", player->GetGUID());
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



              	case 451: // priest spelly
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
              	player->learnSpell(76279,false);
              	player->learnSpell(76301,false);
              	player->learnSpell(88685,false);
              	player->learnSpell(585,false);
              	player->learnSpell(2061,false);
              	player->learnSpell(589,false);
              	player->learnSpell(17,false);
              	player->learnSpell(588,false);
              	player->learnSpell(139,false);
              	player->learnSpell(8092,false);
              	player->learnSpell(8122,false);
              	player->learnSpell(21562,false);
              	player->learnSpell(2006,false);
              	player->learnSpell(2050,false);
              	player->learnSpell(14914,false);
              	player->learnSpell(70772,false);
              	player->learnSpell(88684,false);
              	player->learnSpell(528,false);
              	player->learnSpell(586,false);
              	player->learnSpell(527,false);
              	player->learnSpell(2944,false);
              	player->learnSpell(9484,false);
              	player->learnSpell(32379,false);
              	player->learnSpell(1706,false);
              	player->learnSpell(2096,false);
              	player->learnSpell(2060,false);
              	player->learnSpell(605,false);
              	player->learnSpell(596,false);
              	player->learnSpell(32546,false);
              	player->learnSpell(89745,false);
              	player->learnSpell(27683,false);
              	player->learnSpell(6346,false);
              	player->learnSpell(453,false);
              	player->learnSpell(8129,false);
              	player->learnSpell(15237,false);
              	player->learnSpell(64901,false);
              	player->learnSpell(34433,false);
              	player->learnSpell(33076,false);
              	player->learnSpell(32375,false);
              	player->learnSpell(48045,false);
              	player->learnSpell(64843,false);
              	player->learnSpell(86475,false);
              	player->learnSpell(87495,false);
              	player->learnSpell(73510,false);
              	player->learnSpell(73413,false);
              	player->learnSpell(73325,false);
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

void AddSC_npc_priest_trainer()
{
    new npc_priest_trainer();
}
