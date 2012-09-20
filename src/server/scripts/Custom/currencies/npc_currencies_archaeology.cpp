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
SDName: npc_currencies_archaeology
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_currencies_archaeology
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_currencies_archaeology : public CreatureScript
{
public:
    npc_currencies_archaeology() : CreatureScript("npc_currencies_archaeology") { }

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
                        player->ADD_GOSSIP_ITEM( 5, "1x Draenei Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, "1x Dwarf Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2016);
                        player->ADD_GOSSIP_ITEM( 5, "1x Fossil Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2017);
                        player->ADD_GOSSIP_ITEM( 5, "1x Nerubian Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2018);
                        player->ADD_GOSSIP_ITEM( 5, "1x Night Elf Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2019);
                        player->ADD_GOSSIP_ITEM( 5, "1x Orc Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2020);
                        player->ADD_GOSSIP_ITEM( 5, "1x Tol'vir Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2021);
                        player->ADD_GOSSIP_ITEM( 5, "1x Troll Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2022);                        
                        player->ADD_GOSSIP_ITEM( 5, "1x Vrykul Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2023);            
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
                        player->ADD_GOSSIP_ITEM( 5, "1x Draenei Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, "1x Dwarf Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2016);
                        player->ADD_GOSSIP_ITEM( 5, "1x Fossil Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2017);
                        player->ADD_GOSSIP_ITEM( 5, "1x Nerubian Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2018);
                        player->ADD_GOSSIP_ITEM( 5, "1x Night Elf Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2019);
                        player->ADD_GOSSIP_ITEM( 5, "1x Orc Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2020);
                        player->ADD_GOSSIP_ITEM( 5, "1x Tol'vir Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2021);
                        player->ADD_GOSSIP_ITEM( 5, "1x Troll Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2022);                        
                        player->ADD_GOSSIP_ITEM( 5, "1x Vrykul Archaeology Fragment - cost 200g"       , GOSSIP_SENDER_MAIN, 2023);  


                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;




case 2015: // 1x Draenei Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(398, 1000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2016: // 1x Dwarf Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(384, 1000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2017: // 1x Fossil Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(393, 1000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2018: // 1x Nerubian Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(400, 1000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2019: // 1x Night Elf Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(394, 1000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2020: // 1x  Orc Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(397, 1000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2021: // 1x Tol'vir Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(401, 1000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2022: // 1x Troll Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(385, 1000);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-2000000);
                                        _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
                                        break;

case 2023: // 1x Vrykul Archaeology Fragment - cost 200g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 2000000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(399, 1000);
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



void AddSC_npc_currencies_archaeology()
{
    new npc_currencies_archaeology();
}
