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
SDName: npc_currencies_dar
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_currencies_dar
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_currencies_dar : public CreatureScript
{
public:
    npc_currencies_dar() : CreatureScript("npc_currencies_dar") { }

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
                        player->ADD_GOSSIP_ITEM( 5, "2x Valor Points - cost 20g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, "20x Valor Points - cost 200g"       , GOSSIP_SENDER_MAIN, 2016);
                        player->ADD_GOSSIP_ITEM( 5, "200x Valor Points - cost 2000g"       , GOSSIP_SENDER_MAIN, 2017);
                        player->ADD_GOSSIP_ITEM( 5, "1000x Valor Points - cost 10000g"       , GOSSIP_SENDER_MAIN, 2018);
                        player->ADD_GOSSIP_ITEM( 5, "2x Justice Points - cost 2g"       , GOSSIP_SENDER_MAIN, 2019);
                        player->ADD_GOSSIP_ITEM( 5, "20x Justice Points - cost 20g"       , GOSSIP_SENDER_MAIN, 2020);
                        player->ADD_GOSSIP_ITEM( 5, "200x Justice Points - cost 200g"       , GOSSIP_SENDER_MAIN, 2021);
                        player->ADD_GOSSIP_ITEM( 5, "2000x Justice Points - cost 2000g"       , GOSSIP_SENDER_MAIN, 2022);                                    
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
                        player->ADD_GOSSIP_ITEM( 5, "2x Valor Points - cost 20g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, "20x Valor Points - cost 200g"       , GOSSIP_SENDER_MAIN, 2016);
                        player->ADD_GOSSIP_ITEM( 5, "200x Valor Points - cost 2000g"       , GOSSIP_SENDER_MAIN, 2017);
                        player->ADD_GOSSIP_ITEM( 5, "1000x Valor Points - cost 10000g"       , GOSSIP_SENDER_MAIN, 2018);
                        player->ADD_GOSSIP_ITEM( 5, "2x Justice Points - cost 2g"       , GOSSIP_SENDER_MAIN, 2019);
                        player->ADD_GOSSIP_ITEM( 5, "20x Justice Points - cost 20g"       , GOSSIP_SENDER_MAIN, 2020);
                        player->ADD_GOSSIP_ITEM( 5, "200x Justice Points - cost 200g"       , GOSSIP_SENDER_MAIN, 2021);
                        player->ADD_GOSSIP_ITEM( 5, "2000x Justice Points - cost 2000g"       , GOSSIP_SENDER_MAIN, 2022);                        



                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;




case 2015: // 2x Valor Points - cost 20g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 200000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(396, 200);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-200000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2016: // 20x Valor Points - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(396, 2000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2017: // 200x Valor Points - cost 2000g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 20000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(396, 20000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-20000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2018: // 1000x Valor Points - cost 10000g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 100000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(396, 100000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-100000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2019: // 2x Justice Points - cost 2g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 20000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(395, 200);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-20000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2020: // 20x Justice Points - cost 20g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 200000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(395, 2000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-200000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2021: // 200x Justice Points - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(395, 20000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2022: // 2000x Justice Points - cost 2000g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 20000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(395, 200000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-20000000);
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



void AddSC_npc_currencies_dar()
{
    new npc_currencies_dar();
}
