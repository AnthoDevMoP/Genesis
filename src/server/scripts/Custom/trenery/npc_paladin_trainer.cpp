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
SDName: npc_paladin_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_paladin_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_paladin_trainer : public CreatureScript
{
public:
    npc_paladin_trainer() : CreatureScript("npc_paladin_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_PALADIN) 
                     {
                            _creature->MonsterWhisper("You are not paladin!", player->GetGUID());
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



              	case 451: // paladin spelly
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
              	player->learnSpell(76271,false);
              	player->learnSpell(76294,false);
              	player->learnSpell(35395,false);
              	player->learnSpell(20271,false);
              	player->learnSpell(20154,false);
              	player->learnSpell(20165,false);
              	player->learnSpell(31801,false);
              	player->learnSpell(20164,false);
              	player->learnSpell(465,false);
              	player->learnSpell(7294,false);
              	player->learnSpell(19746,false);
              	player->learnSpell(32223,false);
              	player->learnSpell(19891,false);
              	player->learnSpell(635,false);
              	player->learnSpell(19750,false);
              	player->learnSpell(82326,false);
              	player->learnSpell(85673,false);
              	player->learnSpell(82242,false);
              	player->learnSpell(7328,false);
              	player->learnSpell(25780,false);
              	player->learnSpell(31789,false);
              	player->learnSpell(853,false);
              	player->learnSpell(62124,false);
              	player->learnSpell(1022,false);
              	player->learnSpell(1044,false);
              	player->learnSpell(1038,false);
              	player->learnSpell(633,false);
              	player->learnSpell(879,false);
              	player->learnSpell(73629,false);
              	player->learnSpell(69820,false);
              	player->learnSpell(13819,false);
              	player->learnSpell(34769,false);
              	player->learnSpell(73630,false);
              	player->learnSpell(69826,false);
              	player->learnSpell(23214,false);
              	player->learnSpell(34767,false);
              	player->learnSpell(20217,false);
              	player->learnSpell(19740,false);
              	player->learnSpell(26573,false);
              	player->learnSpell(2812,false);
              	player->learnSpell(498,false);
              	player->learnSpell(4987,false);
              	player->learnSpell(54428,false);
              	player->learnSpell(24275,false);
              	player->learnSpell(642,false);
              	player->learnSpell(86525,false);
              	player->learnSpell(87511,false);
              	player->learnSpell(96231,false);
              	player->learnSpell(31884,false);
              	player->learnSpell(10326,false);
              	player->learnSpell(6940,false);
              	player->learnSpell(86474,false);
              	player->learnSpell(87494,false);
              	player->learnSpell(84963,false);
              	player->learnSpell(82327,false);
              	player->learnSpell(86150,false);
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

void AddSC_npc_paladin_trainer()
{
    new npc_paladin_trainer();
}
