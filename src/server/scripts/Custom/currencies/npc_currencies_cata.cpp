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
SDName: npc_currencies_cata
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_currencies_cata
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_currencies_cata : public CreatureScript
{
public:
    npc_currencies_cata() : CreatureScript("npc_currencies_cata") { }

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
                        player->ADD_GOSSIP_ITEM( 5, "2x Illustrious Jewelcrafter's Token - cost 20g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, ""       , GOSSIP_SENDER_MAIN, 2016);           
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
                        player->ADD_GOSSIP_ITEM( 5, "2x Illustrious Jewelcrafter's Token - cost 20g"       , GOSSIP_SENDER_MAIN, 2015);
                        player->ADD_GOSSIP_ITEM( 5, ""       , GOSSIP_SENDER_MAIN, 2016);


                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;




case 2015: // 2x Illustrious Jewelcrafter's Token - cost 20g
                    player->CLOSE_GOSSIP_MENU();
                                        if (player->GetMoney() < 200000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                                        player->ModifyCurrency(361, 200);
                                        player->SaveToDB();
                                        player->CastSpell(player,61456,false);
                                        player->ModifyMoney(-200000);
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



void AddSC_npc_currencies_cata()
{
    new npc_currencies_cata();
}
