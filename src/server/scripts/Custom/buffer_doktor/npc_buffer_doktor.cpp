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
SDName: npc_buffer_doktor
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_buffer_doktor
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_buffer_doktor : public CreatureScript
{
public:
    npc_buffer_doktor() : CreatureScript("npc_buffer_doktor") { }

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
    player->ADD_GOSSIP_ITEM( 7, "[Mr.Doctor] ->"       , GOSSIP_SENDER_MAIN, 7777);
    player->ADD_GOSSIP_ITEM( 7, "[Buffs] ->"       , GOSSIP_SENDER_MAIN, 7778);

            
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
              case 7777://Mr.Doctor HELP !
                        player->ADD_GOSSIP_ITEM( 3, "Restore Health"                               , GOSSIP_SENDER_MAIN, 7001);
                        player->ADD_GOSSIP_ITEM( 3, "Restore Mana"                            , GOSSIP_SENDER_MAIN, 7002);
                        player->ADD_GOSSIP_ITEM( 3, "Remove Cooldown"                               , GOSSIP_SENDER_MAIN, 7003);
                        player->ADD_GOSSIP_ITEM( 3, "Remove Exhaustion"                            , GOSSIP_SENDER_MAIN, 7004);
                        player->ADD_GOSSIP_ITEM( 3, "Remove Sated"                               , GOSSIP_SENDER_MAIN, 7005);
                        player->ADD_GOSSIP_ITEM( 7, "<- [Main Menu]"                , GOSSIP_SENDER_MAIN, 5552);


                        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());         
                        break;

              case 7778://Buffs
                        player->ADD_GOSSIP_ITEM( 3, "Arcane Intellect"                               , GOSSIP_SENDER_MAIN, 9001);
                        player->ADD_GOSSIP_ITEM( 3, "Mark of the Wild"                            , GOSSIP_SENDER_MAIN, 9002);
                        player->ADD_GOSSIP_ITEM( 3, "Thorns"                               , GOSSIP_SENDER_MAIN, 9003);
                        player->ADD_GOSSIP_ITEM( 3, "Greater Blessing of Might"                               , GOSSIP_SENDER_MAIN, 9005);
                        player->ADD_GOSSIP_ITEM( 3, "Greater Blessing of Kings"                               , GOSSIP_SENDER_MAIN, 9006);
                        player->ADD_GOSSIP_ITEM( 3, "Greater Blessing of Wisdom"                            , GOSSIP_SENDER_MAIN, 9007);
                        player->ADD_GOSSIP_ITEM( 3, "Divine Spirit"                               , GOSSIP_SENDER_MAIN, 9008);
                        player->ADD_GOSSIP_ITEM( 3, "Shadow Protection"                            , GOSSIP_SENDER_MAIN, 9009);
                        player->ADD_GOSSIP_ITEM( 3, "Power Word: Fortitude"                               , GOSSIP_SENDER_MAIN, 9010);
                        player->ADD_GOSSIP_ITEM( 7, "<- [Main Menu]"                , GOSSIP_SENDER_MAIN, 5552);


                        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());         
                        break;



case 5552: //Back To Main Menu
   {
    player->ADD_GOSSIP_ITEM( 7, "[Mr.Doctor] ->"       , GOSSIP_SENDER_MAIN, 7777);
    player->ADD_GOSSIP_ITEM( 7, "[Buffs] ->"       , GOSSIP_SENDER_MAIN, 7778); 
                        }
                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;


/********** Mr - . - Doctor - HELP - ! **********/


case 7001://Restore Health
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->SetHealth(player->GetMaxHealth());
          player->CastSpell(player,61456,false);
     break;


case 7002://Restore Mana
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->SetPower(POWER_MANA, player->GetMaxPower(POWER_MANA));
          player->CastSpell(player,61456,false);
     break;


case 7003://Remove Cooldown
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->RemoveAllSpellCooldown();
          player->CastSpell(player,75459,false);
     break;


case 7004://Remove Exhaustion
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->RemoveAurasDueToSpell(57723);
          player->CastSpell(player,61456,false);
     break;


case 7005://Remove Sated
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->RemoveAurasDueToSpell(57724);
          player->CastSpell(player,61456,false);          
     break;
 /********** Buffs **********/


            case 9001: // Buff me Arcane Intellect
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,36880,true);
                player->CastSpell(player,61456,false); 
                break;

            case 9002: // Buff me Mark of the Wild
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,1126,true);
                player->CastSpell(player,61456,false); 
                break;

            case 9003: // Buff me Thorns
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,467,true);
                player->CastSpell(player,61456,false); 
                break;

            case 9005: // Buff me Greater Blessing of Might
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,19740,true);
                player->CastSpell(player,61456,false); 
                break;

            case 9006: // Buff me Greater Blessing of Kings
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,20217,true);
                player->CastSpell(player,61456,false); 
                break;

            case 9007: // Buff me Greater Blessing of Wisdom
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,56521,true);
                player->CastSpell(player,61456,false); 
                break;

            case 9008: // Buff me Divine Spirit
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,39234,true);
                player->CastSpell(player,61456,false); 
                break;

            case 9009: // Buff me Power Word: Fortitude
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,21562,true);
                player->CastSpell(player,61456,false); 
                break;

            case 9010: // Buff me Shadow Protection
                player->CLOSE_GOSSIP_MENU();
                _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
                player->CastSpell(player,27683,true);
                player->CastSpell(player,61456,false); 
                break;

 default:
                                 break;
                          
    }
   }
  return true;
 }
};



void AddSC_npc_buffer_doktor()
{
    new npc_buffer_doktor();
}

