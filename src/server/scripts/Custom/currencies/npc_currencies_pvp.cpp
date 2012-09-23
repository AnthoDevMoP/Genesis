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
SDName: npc_currencies_pvp
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_currencies_pvp
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_currencies_pvp : public CreatureScript
{
public:
    npc_currencies_pvp() : CreatureScript("npc_currencies_pvp") { }

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
                        player->ADD_GOSSIP_ITEM( 5, "2x Conquest Points - cost 20g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, "20x Conquest Points - cost 200g"       , GOSSIP_SENDER_MAIN, 2016);
                        player->ADD_GOSSIP_ITEM( 5, "200x Conquest Points - cost 2000g"       , GOSSIP_SENDER_MAIN, 2017);
                        player->ADD_GOSSIP_ITEM( 5, "1000x Conquest Points - cost 10000g"       , GOSSIP_SENDER_MAIN, 2018);
                        player->ADD_GOSSIP_ITEM( 5, "2x Honor Points - cost 2g"       , GOSSIP_SENDER_MAIN, 2019);
                        player->ADD_GOSSIP_ITEM( 5, "20x Honor Points - cost 20g"       , GOSSIP_SENDER_MAIN, 2020);
                        player->ADD_GOSSIP_ITEM( 5, "200x Honor Points - cost 200g"       , GOSSIP_SENDER_MAIN, 2021);
                        player->ADD_GOSSIP_ITEM( 5, "2000x Honor Points - cost 2000g"       , GOSSIP_SENDER_MAIN, 2022);                        
                        player->ADD_GOSSIP_ITEM( 5, "20x Tol Barad Commendation - cost 20g"       , GOSSIP_SENDER_MAIN, 2023);
                        player->ADD_GOSSIP_ITEM( 5, "200x Tol Barad Commendation - cost 200g"       , GOSSIP_SENDER_MAIN, 2024);            
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
                        player->ADD_GOSSIP_ITEM( 5, "2x Conquest Points - cost 20g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, "20x Conquest Points - cost 200g"       , GOSSIP_SENDER_MAIN, 2016);
                        player->ADD_GOSSIP_ITEM( 5, "200x Conquest Points - cost 2000g"       , GOSSIP_SENDER_MAIN, 2017);
                        player->ADD_GOSSIP_ITEM( 5, "1000x Conquest Points - cost 10000g"       , GOSSIP_SENDER_MAIN, 2018);
                        player->ADD_GOSSIP_ITEM( 5, "2x Honor Points - cost 2g"       , GOSSIP_SENDER_MAIN, 2019);
                        player->ADD_GOSSIP_ITEM( 5, "20x Honor Points - cost 20g"       , GOSSIP_SENDER_MAIN, 2020);
                        player->ADD_GOSSIP_ITEM( 5, "200x Honor Points - cost 200g"       , GOSSIP_SENDER_MAIN, 2021);
                        player->ADD_GOSSIP_ITEM( 5, "2000x Honor Points - cost 2000g"       , GOSSIP_SENDER_MAIN, 2022);                        
                        player->ADD_GOSSIP_ITEM( 5, "20x Tol Barad Commendation - cost 20g"       , GOSSIP_SENDER_MAIN, 2023);
                        player->ADD_GOSSIP_ITEM( 5, "200x Tol Barad Commendation - cost 200g"       , GOSSIP_SENDER_MAIN, 2024);


                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;




case 2015: // 2x Conquest Points - cost 20g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 200000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(390, 200);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-200000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2016: // 20x Conquest Points - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(390, 2000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2017: // 200x Conquest Points - cost 2000g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 20000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(390, 20000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-20000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2018: // 1000x Conquest Points - cost 10000g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 100000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(390, 100000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-100000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2019: // 2x Honor Points - cost 2g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 20000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(392, 200);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-20000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2020: // 20x Honor Points - cost 20g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 200000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(392, 2000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-200000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2021: // 200x Honor Points - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(392, 20000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2022: // 2000x Honor Points - cost 2000g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 20000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(392, 200000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-20000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2023: // 20x Tol Barad Commendation - cost 20g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 200000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(391, 2000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-200000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2024: // 200x Tol Barad Commendation - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(391, 20000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
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



void AddSC_npc_currencies_pvp()
{
    new npc_currencies_pvp();
}
