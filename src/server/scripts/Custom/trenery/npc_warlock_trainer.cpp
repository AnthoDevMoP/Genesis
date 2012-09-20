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
SDName: npc_warlock_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_warlock_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_warlock_trainer : public CreatureScript
{
public:
    npc_warlock_trainer() : CreatureScript("npc_warlock_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_WARLOCK) 
                     {
                            _creature->MonsterWhisper("You are not warlock!", player->GetGUID());
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



              	case 451: // warlock spelly
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
              	player->learnSpell(84741,false);
              	player->learnSpell(76277,false);
              	player->learnSpell(76299,false);
              	player->learnSpell(54786,false);
              	player->learnSpell(686,false);
              	player->learnSpell(86213,false);
              	player->learnSpell(688,false);
              	player->learnSpell(348,false);
              	player->learnSpell(172,false);
              	player->learnSpell(1454,false);
              	player->learnSpell(89420,false);
              	player->learnSpell(689,false);
              	player->learnSpell(687,false);
              	player->learnSpell(697,false);
              	player->learnSpell(6201,false);
              	player->learnSpell(80388,false);
              	player->learnSpell(93375,false);
              	player->learnSpell(93376,false);
              	player->learnSpell(1120,false);
              	player->learnSpell(74434,false);
              	player->learnSpell(980,false);
              	player->learnSpell(755,false);
              	player->learnSpell(79268,false);
              	player->learnSpell(5782,false);
              	player->learnSpell(702,false);
              	player->learnSpell(5697,false);
              	player->learnSpell(693,false);
              	player->learnSpell(5740,false);
              	player->learnSpell(5676,false);
              	player->learnSpell(603,false);
              	player->learnSpell(5784,false);
              	player->learnSpell(6353,false);
              	player->learnSpell(19028,false);
              	player->learnSpell(712,false);
              	player->learnSpell(126,false);
              	player->learnSpell(1714,false);
              	player->learnSpell(1098,false);
              	player->learnSpell(85403,false);
              	player->learnSpell(1949,false);
              	player->learnSpell(691,false);
              	player->learnSpell(710,false);
              	player->learnSpell(6229,false);
              	player->learnSpell(23161,false);
              	player->learnSpell(6789,false);
              	player->learnSpell(698,false);
              	player->learnSpell(5484,false);
              	player->learnSpell(22703,false);
              	player->learnSpell(86091,false);
              	player->learnSpell(1122,false);
              	player->learnSpell(1490,false);
              	player->learnSpell(18540,false);
              	player->learnSpell(54785,false);
              	player->learnSpell(50590,false);
              	player->learnSpell(50589,false);
              	player->learnSpell(28176,false);
              	player->learnSpell(29722,false);
              	player->learnSpell(29858,false);
              	player->learnSpell(29893,false);
              	player->learnSpell(27243,false);
              	player->learnSpell(47960,false);
              	player->learnSpell(47897,false);
              	player->learnSpell(48018,false);
              	player->learnSpell(48020,false);
              	player->learnSpell(86478,false);
              	player->learnSpell(87498,false);
              	player->learnSpell(77799,false);
              	player->learnSpell(80398,false);
              	player->learnSpell(77801,false);
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

void AddSC_npc_warlock_trainer()
{
    new npc_warlock_trainer();
}
