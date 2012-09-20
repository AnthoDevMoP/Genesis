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
SDName: npc_tools
SD%Complete: 100%
SDComment: Wotlk/Cataclysm tools
SDCategory: Custom NPC Script
EndScriptData */

//Includes
#include "ScriptPCH.h"


class npc_tools: public CreatureScript
{
    public:
        npc_tools() : CreatureScript("npc_tools") { }

                               bool OnGossipHello(Player *player, Creature *_creature)

                {

                        if (player->isInCombat())
                        {
                                player->CLOSE_GOSSIP_MENU();
                                _creature->MonsterWhisper("Si v boji , prid pozdeji ! / You are in combat. Come back later!", player->GetGUID());

                        return true;
                        }
                else
                        {
                        player->ADD_GOSSIP_ITEM( 9, "Remove PvP Flags"                               , GOSSIP_SENDER_MAIN, 1009);
                        player->ADD_GOSSIP_ITEM( 9, "Unbind All Instances"                            , GOSSIP_SENDER_MAIN, 1010);
                        player->ADD_GOSSIP_ITEM( 9, "Remove All Auras"                               , GOSSIP_SENDER_MAIN, 1011);
                        player->ADD_GOSSIP_ITEM( 9, "Remove Res Sickness"                            , GOSSIP_SENDER_MAIN, 1012);
                        player->ADD_GOSSIP_ITEM( 9, "Zmena vzhledu - cost 1000g"                               , GOSSIP_SENDER_MAIN, 1013);
                        //player->ADD_GOSSIP_ITEM( 9, "Faction Change - cost 1000g"                            , GOSSIP_SENDER_MAIN, 1014);
                        //player->ADD_GOSSIP_ITEM( 9, "Race Change - cost 1000g"                            , GOSSIP_SENDER_MAIN, 1020);
                        player->ADD_GOSSIP_ITEM( 9, "Name Change - cost 1000g"                , GOSSIP_SENDER_MAIN, 1015);
                        player->ADD_GOSSIP_ITEM( 9, "Reset Talentpoints - cost 1g"                , GOSSIP_SENDER_MAIN, 1016);
                        //player->ADD_GOSSIP_ITEM( 9, "Reset Spells - cost 1g"                , GOSSIP_SENDER_MAIN, 1021);
                        player->ADD_GOSSIP_ITEM( 9, "Advance all skills - cost 10g"                , GOSSIP_SENDER_MAIN, 1017);
                        player->ADD_GOSSIP_ITEM( 9, "Save Player to DB"                , GOSSIP_SENDER_MAIN, 1019);
                        }

                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());         
                return true;
                 }
                bool OnGossipSelect(Player *player, Creature *_creature, uint32 sender, uint32 uiAction)
                {
                    if (player->isInCombat())
                    {
                                player->CLOSE_GOSSIP_MENU();
                                _creature->MonsterWhisper("Si v boji , prid pozdeji ! / You are in combat. Come back later!", player->GetGUID());
                                return true;
                   }
                    if (sender == GOSSIP_SENDER_MAIN)
                    {
                         player->PlayerTalkClass->ClearMenus();
                      switch(uiAction)
                         {
case 5552: //Back To Main Menu
                        {
                        player->ADD_GOSSIP_ITEM( 9, "Remove PvP Flags"                               , GOSSIP_SENDER_MAIN, 1009);
                        player->ADD_GOSSIP_ITEM( 9, "Unbind All Instances"                            , GOSSIP_SENDER_MAIN, 1010);
                        player->ADD_GOSSIP_ITEM( 9, "Remove All Auras"                               , GOSSIP_SENDER_MAIN, 1011);
                        player->ADD_GOSSIP_ITEM( 9, "Remove Res Sickness"                            , GOSSIP_SENDER_MAIN, 1012);
                        player->ADD_GOSSIP_ITEM( 9, "Zmena vzhledu - cost 1000g"                               , GOSSIP_SENDER_MAIN, 1013);
                        //player->ADD_GOSSIP_ITEM( 9, "Faction Change - cost 1000g"                            , GOSSIP_SENDER_MAIN, 1014);
                        //player->ADD_GOSSIP_ITEM( 9, "Race Change - cost 1000g"                            , GOSSIP_SENDER_MAIN, 1020);
                        player->ADD_GOSSIP_ITEM( 9, "Name Change - cost 1000g"                , GOSSIP_SENDER_MAIN, 1015);
                        player->ADD_GOSSIP_ITEM( 9, "Reset Talentpoints - cost 1g"                , GOSSIP_SENDER_MAIN, 1016);
                        //player->ADD_GOSSIP_ITEM( 9, "Reset Spells - cost 1g"                , GOSSIP_SENDER_MAIN, 1021);
                        player->ADD_GOSSIP_ITEM( 9, "Advance all skills - cost 10g"                , GOSSIP_SENDER_MAIN, 1017);
                        player->ADD_GOSSIP_ITEM( 9, "Save Player to DB"                , GOSSIP_SENDER_MAIN, 1019);
                        }

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;



/********** Reset - / - Player - Tools **********/

case 1009://Remove PvP Flags
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->CastSpell(player, 20762, true),
          player->RemoveFlag(PLAYER_FLAGS, PLAYER_FLAGS_CONTESTED_PVP),
          player->RemoveByteFlag(UNIT_FIELD_BYTES_2, 1, UNIT_BYTE2_FLAG_PVP),
          player->RemoveByteFlag(UNIT_FIELD_BYTES_2, 1, UNIT_BYTE2_FLAG_FFA_PVP),
          player->RemoveFlag(PLAYER_FLAGS, PLAYER_FLAGS_PVP_TIMER),
          player->RemoveFlag(PLAYER_FLAGS, PLAYER_FLAGS_IN_PVP);
          player->CastSpell(player,61456,false); 
          player->SaveToDB();
      break;


case 1010://Unbind All Instances
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("All Instance Locks Reset.", player->GetGUID());
          for (uint8 i = 0; i < MAX_DIFFICULTY; ++i)
          {
          Player::BoundInstancesMap &binds = player->GetBoundInstances(Difficulty(i));
          for (Player::BoundInstancesMap::iterator itr = binds.begin(); itr != binds.end();)
          {
          if(itr->first != player->GetMapId())
          {
          player->UnbindInstance(itr, Difficulty(i));

                    }
                    else
                        ++itr;
                }
            }
          player->CastSpell(player,61456,false); 
          player->SaveToDB();
      break;


case 1011://Remove All Auras
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->RemoveAllAuras();
          player->CastSpell(player,61456,false); 
          player->SaveToDB();
      break;


case 1012://Remove Res Sickness
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          //if (player->HasAura(15007,0))
          {
          player->RemoveAurasDueToSpell(15007,0);
          }
          player->CastSpell(player,61456,false); 
          player->SaveToDB();
      break;


case 1013://Character Customize
          player->CLOSE_GOSSIP_MENU();
          if (player->GetMoney() < 10000000)
           {
            _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
             }
            else
          {
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->SetAtLoginFlag(AT_LOGIN_CUSTOMIZE);
                               player->ModifyMoney(-10000000);
          player->CastSpell(player,61456,false);
          _creature->MonsterSay("Dakujem za obchod , novy vzhled si nastavis pri relogu :) / Thank for bussines :)" ,0 , player->GetGUID());
          player->SaveToDB();
          } 
          break;


case 1014://Faction Change
          player->CLOSE_GOSSIP_MENU();
          if (player->GetMoney() < 10000000)
           {
            _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
             }
            else
          {
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->SetAtLoginFlag(AT_LOGIN_RESET_TALENTS);
          player->SetAtLoginFlag(AT_LOGIN_RESET_SPELLS);
          player->SetAtLoginFlag(AT_LOGIN_CHANGE_FACTION);
                               player->ModifyMoney(-10000000);
          player->CastSpell(player,61456,false); 
          _creature->MonsterSay("Dakujem za obchod , novou rasu u druhe frakce si zvolis pri relogu :) / Thank for bussines :)" ,0 , player->GetGUID());
          player->SaveToDB();
          } 
          break;

case 1020://Race Change
          player->CLOSE_GOSSIP_MENU();
          if (player->GetMoney() < 10000000)
           {
            _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
             }
            else
          {
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->SetAtLoginFlag(AT_LOGIN_RESET_TALENTS);
          player->SetAtLoginFlag(AT_LOGIN_RESET_SPELLS);
          player->SetAtLoginFlag(AT_LOGIN_CHANGE_RACE);
                               player->ModifyMoney(-10000000);
          player->CastSpell(player,61456,false); 
          _creature->MonsterSay("Dakujem za obchod , novou rasu si zvolis pri relogu. :) / Thank for bussines :)" ,0 , player->GetGUID());
          player->SaveToDB();
          } 
          break;


case 1015://Name Change
          player->CLOSE_GOSSIP_MENU();
          if (player->GetMoney() < 10000000)
           {
            _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
             }
            else
          {
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->SetAtLoginFlag(AT_LOGIN_RENAME);
                               player->ModifyMoney(-10000000);
          player->CastSpell(player,61456,false);
          _creature->MonsterSay("Dakujem za obchod , nove jmeno si nastavis po relogu :) / Thank for bussines :)" ,0 , player->GetGUID());
          player->SaveToDB();
          } 
          break;


case 1016://Reset Talentpoints
          player->CLOSE_GOSSIP_MENU();
if (player->GetMoney() < 10000)
           {
            _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
             }
            else
          {

          player->SetAtLoginFlag(AT_LOGIN_RESET_TALENTS);
          _creature->MonsterWhisper("Dakujem za obchod , po relogu se ti resetnou talenty", player->GetGUID());
          player->CastSpell(player,61456,false);
player->ModifyMoney(-10000);
          player->CastSpell(player,61456,false);
          _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
          player->SaveToDB();
          } 
     break;


case 1017://Advance all skills
          player->CLOSE_GOSSIP_MENU();
          if (player->GetMoney() < 100000)
           {
            _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
             }
            else
          {
          _creature->MonsterWhisper("Hotovo:)", player->GetGUID());
          player->UpdateSkillsToMaxSkillsForLevel();
                               player->ModifyMoney(-100000);
          player->CastSpell(player,61456,false); 
          _creature->MonsterSay("Dakujem za obchod :) / Thank for bussines :)" ,0 , player->GetGUID());
          player->SaveToDB();
          } 
          break;


case 1019://Save Player to DB
          player->CLOSE_GOSSIP_MENU();
          _creature->MonsterWhisper("Hotovo , si uloženy:)", player->GetGUID());
          player->CastSpell(player,61456,false);  
          player->SaveToDB();       
    break;

case 1021://Reset spells
          player->CLOSE_GOSSIP_MENU();
if (player->GetMoney() < 10000)
           {
            _creature->MonsterSay("Nemas dostatek goldu." ,0 , player->GetGUID());
             }
            else
          {
          player->SetAtLoginFlag(AT_LOGIN_RESET_TALENTS);
          player->SetAtLoginFlag(AT_LOGIN_RESET_SPELLS);
          _creature->MonsterWhisper("Dakujem za obchod , po relogu se ti resetnou spelly", player->GetGUID());
          player->CastSpell(player,61456,false);
          player->ModifyMoney(-10000);
          player->SaveToDB();
                    } 
     break;



                         default:
                                 break;
                         }
                  }
                  return true;
          }
};

void AddSC_npc_tools()
{
    new npc_tools();
}