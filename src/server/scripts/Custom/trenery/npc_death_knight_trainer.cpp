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
SDName: npc_death_knight_trainer
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_death_knight_trainer
SDCategory: Custom NPC Script
EndScriptData */

/*###
# generic defines
###*/

#include "ScriptPCH.h"

class npc_death_knight_trainer : public CreatureScript
{
public:
    npc_death_knight_trainer() : CreatureScript("npc_death_knight_trainer") { }

    bool OnGossipHello(Player *player, Creature *_creature)
              	{
                     if(player->getClass() != CLASS_DEATH_KNIGHT) 
                     {
                            _creature->MonsterWhisper("You are not death knight!", player->GetGUID());
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



              	case 451: // death_knight spelly
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
              	player->learnSpell(76282,false);
              	player->learnSpell(59921,false);
                     //player->learnSpell(66198,false); //http://www.wowhead.com/spell=66198
              	player->learnSpell(76292,false);
              	player->learnSpell(59879,false);
              	player->learnSpell(49410,false);
              	player->learnSpell(82246,false);
              	player->learnSpell(86524,false);
              	player->learnSpell(48778,false);
              	player->learnSpell(45902,false);
              	player->learnSpell(47541,false);
              	player->learnSpell(50977,false);
              	player->learnSpell(49576,false);
              	//player->learnSpell(46266,false); //http://www.wowhead.com/spell=46266/burn-mana
              	player->learnSpell(45477,false);
              	player->learnSpell(45462,false);
              	player->learnSpell(53341,false);
              	player->learnSpell(53343,false);
              	player->learnSpell(53428,false);
              	player->learnSpell(49998,false);
              	player->learnSpell(50842,false);
              	player->learnSpell(46584,false);
              	player->learnSpell(48263,false);
              	player->learnSpell(47528,false);
              	player->learnSpell(54447,false);
              	player->learnSpell(53342,false);
              	player->learnSpell(48721,false);
              	player->learnSpell(45524,false);
              	player->learnSpell(47476,false);
              	player->learnSpell(43265,false);
              	player->learnSpell(53331,false);
              	player->learnSpell(49020,false);
              	player->learnSpell(3714,false);
              	player->learnSpell(48792,false);
              	player->learnSpell(54446,false);
              	player->learnSpell(53323,false);
              	player->learnSpell(45529,false);
              	player->learnSpell(85948,false);
              	player->learnSpell(56222,false);
              	player->learnSpell(57330,false);
              	//player->learnSpell(58743,false); //http://www.wowhead.com/spell=58743
              	player->learnSpell(56815,false);
              	player->learnSpell(48707,false);
              	player->learnSpell(81229,false);
              	player->learnSpell(53344,false);
              	player->learnSpell(48265,false);
              	player->learnSpell(61999,false);
              	player->learnSpell(70164,false);
              	player->learnSpell(62158,false);
              	player->learnSpell(86061,false);
              	player->learnSpell(47568,false);
              	player->learnSpell(42650,false);
              	player->learnSpell(86471,false);
              	player->learnSpell(87492,false);
              	player->learnSpell(77575,false);
              	player->learnSpell(73975,false);
              	player->learnSpell(77606,false);
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

void AddSC_npc_death_knight_trainer()
{
    new npc_death_knight_trainer();
}
