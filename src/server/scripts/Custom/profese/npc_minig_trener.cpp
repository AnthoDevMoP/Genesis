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
SDName: npc_mountt_trener
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_mountt_trener
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_minig_trener : public CreatureScript
{
public:
    npc_minig_trener() : CreatureScript("npc_minig_trener") { }

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
                        player->ADD_GOSSIP_ITEM( 7, "Learn my Mining spells - cost 10g"       , GOSSIP_SENDER_MAIN, 9601);
              	   player->ADD_GOSSIP_ITEM( 5, " "                    , GOSSIP_SENDER_MAIN, 454);

            
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
                        player->ADD_GOSSIP_ITEM( 7, "Learn my Mining spells - cost 10g"       , GOSSIP_SENDER_MAIN, 9601);
              	   player->ADD_GOSSIP_ITEM( 5, " "                    , GOSSIP_SENDER_MAIN, 454);


                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

/********** Mount - Trener **********/

          
            case 9601: // minig
               player->CLOSE_GOSSIP_MENU();
if (player->GetMoney() < 100000)
                                                {
                                                        _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
                                        }
                                        else
                                                {
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->learnSpell(2580,false);
                player->learnSpell(2575,false);
                player->learnSpell(2576,false);
                player->learnSpell(3564,false);
                player->learnSpell(10284,false);
                player->learnSpell(29354,false);
                player->learnSpell(50310,false);
                player->learnSpell(74517,false);
                player->learnSpell(2656,false);
                player->learnSpell(53120,false);
                player->learnSpell(53121,false);
                player->learnSpell(53122,false);
                player->learnSpell(53123,false);
                player->learnSpell(53124,false);
                player->learnSpell(53040,false);
                player->learnSpell(74496,false);
                    //recepty
                player->learnSpell(2657,false);
                player->learnSpell(3304,false);
                player->learnSpell(2659,false);
                player->learnSpell(2658,false);
                player->learnSpell(3307,false);
                player->learnSpell(3308,false);
                player->learnSpell(3569,false);
                player->learnSpell(16153,false);
                player->learnSpell(10098,false);
                player->learnSpell(14891,false);
                player->learnSpell(70524,false);
                player->learnSpell(29356,false);
                player->learnSpell(35750,false);
                player->learnSpell(35751,false);
                player->learnSpell(22967,false);
                player->learnSpell(29358,false);
                player->learnSpell(29359,false);
                player->learnSpell(29360,false);
                player->learnSpell(49252,false);
                player->learnSpell(46353,false);
                player->learnSpell(29361,false);
                player->learnSpell(29686,false);
                player->learnSpell(49258,false);
                player->learnSpell(84038,false);
                player->learnSpell(55211,false);
                player->learnSpell(55208,false);
                player->learnSpell(74530,false);
                player->learnSpell(74537,false);
                player->learnSpell(74529,false);
                player->UpdateSkill (186, 525);
                               player->ModifyMoney(-100000);
                player->CastSpell(player,61456,false);
 _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
                                        } 
          player->SaveToDB();
                break;

 default:
                                 break;
                          
    }
   }
  return true;
 }
};



void AddSC_npc_minig_trener()
{
    new npc_minig_trener();
}


