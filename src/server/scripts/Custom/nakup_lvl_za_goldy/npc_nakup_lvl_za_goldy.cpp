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
SDName: npc_nakup_lvl_za_goldy
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_nakup_lvl_za_goldy
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_nakup_lvl_za_goldy : public CreatureScript
{
public:
    npc_nakup_lvl_za_goldy() : CreatureScript("npc_nakup_lvl_za_goldy") { }

    bool OnGossipHello(Player *player, Creature *_creature)
    {
        if (player->isInCombat())
        {
            player->CLOSE_GOSSIP_MENU();
            _creature->MonsterWhisper("Combat!", player->GetGUID());
            return true;
        }
        else
        {
                        player->ADD_GOSSIP_ITEM( 5, "Buy 85 lvl - cost 200000g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, "Buy 50 lvl - cost 50000g"       , GOSSIP_SENDER_MAIN, 2013);

            
        }

        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());         
        return true;
    }

    bool OnGossipSelect(Player *player, Creature *_creature, uint32 sender, uint32 uiAction)
    {
        if (sender == GOSSIP_SENDER_MAIN)
        {
            player->PlayerTalkClass->ClearMenus();
            switch(uiAction)
            {
                        player->ADD_GOSSIP_ITEM( 5, "Buy 85 lvl - cost 200000g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, "Buy 50 lvl - cost 50000g"       , GOSSIP_SENDER_MAIN, 2013);



                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

/********** Sell - 10 - 85 - lvl **********/


case 2010: //Sell 10 lvl -  100 g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 1000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->GiveLevel(10);
                                        player->SaveToDB();
                                        player->UpdateSkillsToMaxSkillsForLevel();
                                        player->CastSpell(player,61456,false);
                                        player->RemoveAurasDueToSpell(57724);
                                        player->ModifyMoney(-1000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        }
                                     
                                     break;




case 2011: //Sell 20 lvl -  1000 g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 10000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->GiveLevel(20);
                                        player->SaveToDB();
                                        player->UpdateSkillsToMaxSkillsForLevel();
                                        player->CastSpell(player,61456,false);
                                        player->RemoveAurasDueToSpell(57724);
                                        player->ModifyMoney(-10000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        }
                                     
                                     break;




case 2012: //Sell 30 lvl -  5000 g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 50000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->GiveLevel(30);
                                        player->SaveToDB();
                                        player->UpdateSkillsToMaxSkillsForLevel();
                                        player->CastSpell(player,61456,false);
                                        player->RemoveAurasDueToSpell(57724);
                                        player->ModifyMoney(-50000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        }
                                     
                                     break;




case 2013: //Sell 50 lvl -  50000 g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 500000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->GiveLevel(50);
                                        player->SaveToDB();
                                        player->UpdateSkillsToMaxSkillsForLevel();
                                        player->CastSpell(player,61456,false);
                                        player->RemoveAurasDueToSpell(57724);
                                        player->ModifyMoney(-500000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        }
                                     
                                     break;




case 2014: //Sell 70 lvl -  100000 g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 1000000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->GiveLevel(70);
                                        player->SaveToDB();
                                        player->UpdateSkillsToMaxSkillsForLevel();
                                        player->CastSpell(player,61456,false);
                                        player->RemoveAurasDueToSpell(57724);
                                        player->ModifyMoney(-1000000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        }
                                     
                                     break;




case 2015: //Sell 85 lvl -  200000 g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->GiveLevel(85);
                                        player->SaveToDB();
                                        player->UpdateSkillsToMaxSkillsForLevel();
                                        player->CastSpell(player,61456,false);
                                        player->RemoveAurasDueToSpell(57724);
                                        player->ModifyMoney(-2000000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;


         break;
             default:

        break;                              
    }
   }
  return true;
 }
};



void AddSC_npc_nakup_lvl_za_goldy()
{
    new npc_nakup_lvl_za_goldy();
}


