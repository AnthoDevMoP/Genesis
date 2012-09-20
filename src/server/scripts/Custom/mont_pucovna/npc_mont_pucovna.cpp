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
SDName: npc_mont_pucovna
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_mont_pucovna
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_mont_pucovna : public CreatureScript
{
public:
    npc_mont_pucovna() : CreatureScript("npc_mont_pucovna") { }

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
                        player->ADD_GOSSIP_ITEM( 3, "Kor'kron Annihilator"                               , GOSSIP_SENDER_MAIN, 8009);
                        player->ADD_GOSSIP_ITEM( 3, "Brown Riding Camel"                            , GOSSIP_SENDER_MAIN, 8010);
                        player->ADD_GOSSIP_ITEM( 3, "Drake of the South Wind"                               , GOSSIP_SENDER_MAIN, 8011);
                        player->ADD_GOSSIP_ITEM( 3, "Dark Phoenix"                               , GOSSIP_SENDER_MAIN, 8012);
                        player->ADD_GOSSIP_ITEM( 3, "Sea Turtle"                               , GOSSIP_SENDER_MAIN, 8013);
                        player->ADD_GOSSIP_ITEM( 3, "Abyssal Seahorse"                               , GOSSIP_SENDER_MAIN, 8014);
                        player->ADD_GOSSIP_ITEM( 9, "Dismount"                               , GOSSIP_SENDER_MAIN, 8015);

            
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
                        player->ADD_GOSSIP_ITEM( 3, "Kor'kron Annihilator"                               , GOSSIP_SENDER_MAIN, 8009);
                        player->ADD_GOSSIP_ITEM( 3, "Brown Riding Camel"                            , GOSSIP_SENDER_MAIN, 8010);
                        player->ADD_GOSSIP_ITEM( 3, "Drake of the South Wind"                               , GOSSIP_SENDER_MAIN, 8011);
                        player->ADD_GOSSIP_ITEM( 3, "Dark Phoenix"                               , GOSSIP_SENDER_MAIN, 8012);
                        player->ADD_GOSSIP_ITEM( 3, "Sea Turtle"                               , GOSSIP_SENDER_MAIN, 8013);
                        player->ADD_GOSSIP_ITEM( 3, "Abyssal Seahorse"                               , GOSSIP_SENDER_MAIN, 8014);
                        player->ADD_GOSSIP_ITEM( 9, "Dismount"                               , GOSSIP_SENDER_MAIN, 8015);



                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

/********** Mouth - Pujcovna - / - Rental **********/


            case 8009: // Kor'kron Annihilator
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,93644,true);
                player->CastSpell(player,61456,false);
                break;

            case 8010: // Brown Riding Camel
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,88748,true);
                player->CastSpell(player,61456,false);
                break;
  
            case 8011: // Drake of the South Wind
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,88744,true);
                player->CastSpell(player,61456,false);
                break;
            
            case 8012: // Dark Phoenix
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,88990,true);
                player->CastSpell(player,61456,false);
                break;
            
            case 8013: // Sea Turtle
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,64731,true);
                player->CastSpell(player,61456,false);
                break;

            
            case 8014: // Abyssal Seahorse
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,75207,true);
                player->CastSpell(player,61456,false);
                break;

            
            case 8015: // Dismount
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->Unmount();
                player->RemoveAurasByType(SPELL_AURA_MOUNTED);
                player->CastSpell(player,61456,false); 
                break;
         default:
                                 break;        
    }
   }
  return true;
 }
};



void AddSC_npc_mont_pucovna()
{
    new npc_mont_pucovna();
}


