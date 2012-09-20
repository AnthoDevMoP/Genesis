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
SDName: npc_zvuky
SD%Complete: 100%
SDComment: Wotlk/Cataclysm npc_zvuky
SDCategory: Custom NPC Script
EndScriptData */

#include "ScriptPCH.h"

class npc_zvuky : public CreatureScript
{
public:
    npc_zvuky() : CreatureScript("npc_zvuky") { }

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
                        player->ADD_GOSSIP_ITEM( 5, "Prehraj menu 1"       , GOSSIP_SENDER_MAIN, 7000);
                        player->ADD_GOSSIP_ITEM( 5, "Prehraj menu 2"       , GOSSIP_SENDER_MAIN, 99);
                        player->ADD_GOSSIP_ITEM( 5, "Prehraj menu 3"       , GOSSIP_SENDER_MAIN, 98);
                        player->ADD_GOSSIP_ITEM( 5, "Prehraj menu 4"       , GOSSIP_SENDER_MAIN, 97);
                        player->ADD_GOSSIP_ITEM( 5, "Prehraj menu 5"       , GOSSIP_SENDER_MAIN, 96);
                        player->ADD_GOSSIP_ITEM( 5, "Prehraj menu 6"       , GOSSIP_SENDER_MAIN, 95);
        
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

// Custom Sound Effects
case 7000:

player->ADD_GOSSIP_ITEM(0, "Illidan 1", GOSSIP_SENDER_MAIN, 99);
player->ADD_GOSSIP_ITEM(0, "Illidan 2", GOSSIP_SENDER_MAIN, 98);
player->ADD_GOSSIP_ITEM(0, "Kil Jaeden", GOSSIP_SENDER_MAIN, 97);
player->ADD_GOSSIP_ITEM(0, "Misc 1", GOSSIP_SENDER_MAIN, 96);
player->ADD_GOSSIP_ITEM(0, "Misc 2", GOSSIP_SENDER_MAIN, 95);

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

case 99:

player->ADD_GOSSIP_ITEM(1,"Play Illidan 1", GOSSIP_SENDER_MAIN, 1);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 2", GOSSIP_SENDER_MAIN, 2);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 3", GOSSIP_SENDER_MAIN, 3);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 4", GOSSIP_SENDER_MAIN, 4);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 5", GOSSIP_SENDER_MAIN, 5);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 6", GOSSIP_SENDER_MAIN, 6);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 7", GOSSIP_SENDER_MAIN, 7);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 8", GOSSIP_SENDER_MAIN, 8);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 9", GOSSIP_SENDER_MAIN, 9);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 10", GOSSIP_SENDER_MAIN, 10);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 11", GOSSIP_SENDER_MAIN, 11);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 12", GOSSIP_SENDER_MAIN, 12);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 13", GOSSIP_SENDER_MAIN, 13);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 14", GOSSIP_SENDER_MAIN, 14);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 15", GOSSIP_SENDER_MAIN, 15);

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

case 98:

player->ADD_GOSSIP_ITEM(1,"Play Illidan 16", GOSSIP_SENDER_MAIN, 16);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 17", GOSSIP_SENDER_MAIN, 17);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 18", GOSSIP_SENDER_MAIN, 18);
player->ADD_GOSSIP_ITEM(1,"Play Illidan 19", GOSSIP_SENDER_MAIN, 19);

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

case 97:
player->ADD_GOSSIP_ITEM(1,"Play Kil Jaeden 1", GOSSIP_SENDER_MAIN, 20);
player->ADD_GOSSIP_ITEM(1,"Play Kil Jaeden 2", GOSSIP_SENDER_MAIN, 21);
player->ADD_GOSSIP_ITEM(1,"Play Kil Jaeden 3", GOSSIP_SENDER_MAIN, 22);
player->ADD_GOSSIP_ITEM(1,"Play Kil Jaeden 4", GOSSIP_SENDER_MAIN, 23);
player->ADD_GOSSIP_ITEM(1,"Play Kil Jaeden 5", GOSSIP_SENDER_MAIN, 24);
player->ADD_GOSSIP_ITEM(1,"Play Kil Jaeden 6", GOSSIP_SENDER_MAIN, 25);
player->ADD_GOSSIP_ITEM(1,"Play Kil Jaeden 7", GOSSIP_SENDER_MAIN, 26);
player->ADD_GOSSIP_ITEM(1,"Play Kil Jaeden 8", GOSSIP_SENDER_MAIN, 27);
player->ADD_GOSSIP_ITEM(1,"Play Aveena 1", GOSSIP_SENDER_MAIN, 28);
player->ADD_GOSSIP_ITEM(1,"Play Aveena 2", GOSSIP_SENDER_MAIN, 29);
player->ADD_GOSSIP_ITEM(1,"Play Aveena 3", GOSSIP_SENDER_MAIN, 30);
player->ADD_GOSSIP_ITEM(1,"Play Kalecgos", GOSSIP_SENDER_MAIN, 31);

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

case 96:
player->ADD_GOSSIP_ITEM(1,"Play MURLOC", GOSSIP_SENDER_MAIN, 32);
player->ADD_GOSSIP_ITEM(1,"Play Shade of Akama", GOSSIP_SENDER_MAIN, 33);
player->ADD_GOSSIP_ITEM(1,"Play Night Elf Female Joke", GOSSIP_SENDER_MAIN, 34);
player->ADD_GOSSIP_ITEM(1,"Play Pissed Orc Peon", GOSSIP_SENDER_MAIN, 35);
player->ADD_GOSSIP_ITEM(1,"Play Thrall Greeting", GOSSIP_SENDER_MAIN, 36);
player->ADD_GOSSIP_ITEM(1,"Play Headless Horseman Laugh", GOSSIP_SENDER_MAIN, 37);
player->ADD_GOSSIP_ITEM(1,"Play Headless Horseman Failed When all of you is dead", GOSSIP_SENDER_MAIN, 38);
player->ADD_GOSSIP_ITEM(1,"Play Headless Horseman He Dies!", GOSSIP_SENDER_MAIN, 39);
player->ADD_GOSSIP_ITEM(1,"Play Mr. Smith Deadmines 1", GOSSIP_SENDER_MAIN, 40);
player->ADD_GOSSIP_ITEM(1,"Play Mr. Smith Deadmines 2", GOSSIP_SENDER_MAIN, 41);
player->ADD_GOSSIP_ITEM(1,"Play Mr. Smith Deadmines 3", GOSSIP_SENDER_MAIN, 42);
player->ADD_GOSSIP_ITEM(1,"Play Mr. Smith Deadmines 4", GOSSIP_SENDER_MAIN, 43);
player->ADD_GOSSIP_ITEM(1,"Play Thrall - Aggroing", GOSSIP_SENDER_MAIN, 44);
player->ADD_GOSSIP_ITEM(1,"Play Thrall - Greeting", GOSSIP_SENDER_MAIN, 45);
player->ADD_GOSSIP_ITEM(1,"Play Jaina Proudmoore", GOSSIP_SENDER_MAIN, 46); 

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

case 95:
player->ADD_GOSSIP_ITEM(1,"Play Summon Succubus", GOSSIP_SENDER_MAIN, 47);
player->ADD_GOSSIP_ITEM(1,"Play Succubus Buttslap whip", GOSSIP_SENDER_MAIN, 48);
player->ADD_GOSSIP_ITEM(1,"Play Horde Talk", GOSSIP_SENDER_MAIN, 49);
player->ADD_GOSSIP_ITEM(1,"Play Baby Murloc", GOSSIP_SENDER_MAIN, 50);
player->ADD_GOSSIP_ITEM(1,"Play Whissle", GOSSIP_SENDER_MAIN, 51);

                                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
                                break;

case 51:

player->PlayDirectSound(10027);
player->MonsterSay("Whisling", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 50: 

player->PlayDirectSound(8475);
player->MonsterSay("Awwww isnt it cute, wait...get it off me!!! KILL IT", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 49: 

player->PlayDirectSound(7120);
player->MonsterSay("Horde Talk", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 48: 

player->PlayDirectSound(7096);
player->MonsterSay("Buttslap - whip", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();
return true;

case 47: 

player->PlayDirectSound(6099);
player->MonsterSay("Summon Succubus - Now What? Mhmmm, you're in trouble now! Don't touch what you can't afford Couldn't resist, Could you?", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();
return true;

case 46: 

player->PlayDirectSound(5882);
player->MonsterSay("You asked for it!/I hate resolving to violence", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();
return true;

case 45: 

player->PlayDirectSound(6004);
player->MonsterSay("Welcome to Orgrimmar, have you come to serve the horde? Lok'Thar fri, What is it you wish?", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();
return true;

case 44: 

player->PlayDirectSound(5880);
player->MonsterSay("Lok'Narosh Your Time has come! For Doomhammer", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();
return true;

case 43: 

player->PlayDirectSound(5779);
player->MonsterSay("Thuh, now you are making me angry!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();
return true;

case 42: 

player->PlayDirectSound(5778);
player->MonsterSay("...bla...bla... all I have to do is to improvise", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();
return true;

case 41: 

player->PlayDirectSound(5777);
player->MonsterSay("We're under attack...", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();
return true;

case 40:
 
player->PlayDirectSound(5775 );
player->MonsterSay("You there, check you that noise!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 39: 

player->PlayDirectSound(11964);
player->MonsterSay("Headless Horseman He Dies!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 38: 

player->PlayDirectSound(11967);
player->MonsterSay("Failed When all of you is dead", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 37: 

player->PlayDirectSound(11965);
player->MonsterSay("HA HA HA HA HA HA HA LOL", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 36: 

player->PlayDirectSound(7214);
player->MonsterSay("Lo Tar Fri What Do you Wish?", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 35: 

player->PlayDirectSound(7195);
player->MonsterSay("Pissed Orc Peon", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 34: 

player->PlayDirectSound(6179);
player->MonsterSay("Your not funny", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 33: 

player->PlayDirectSound(11389);
player->MonsterSay("Shade of Akama", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 32: 

player->PlayDirectSound(11802);
player->MonsterSay("Rgrglrgrlgrl", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 31: 

player->PlayDirectSound(12541);
player->MonsterSay("There is no time to waste The faith of the world hangs in the balance Kil Jaeden must be destroyed!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 30: 

player->PlayDirectSound(12513);
player->MonsterSay("Kalec? Kalec?!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 29: 

player->PlayDirectSound(12512);
player->MonsterSay("But I am... lost... I can not find my way back!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 28: 

player->PlayDirectSound(12511);
player->MonsterSay("I serve only the master now!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 27: 

player->PlayDirectSound(12501);
player->MonsterSay("Another step towards destruction!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 26: 

player->PlayDirectSound(12500);
player->MonsterSay("Very long thing, basiclly he tells us that he will take control over the Burning Legion", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;


case 25: 

player->PlayDirectSound(12499);
player->MonsterSay("Drain the girl, drain her power, untill there is nothing but an ...something... shell", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 24: 

player->PlayDirectSound(12498);
player->MonsterSay("Fail me, and suffer for eternity!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 23: 

player->PlayDirectSound(12497);
player->MonsterSay("I've waited long enough", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 22: 

player->PlayDirectSound(12496);
player->MonsterSay("Stay on task, do not waste time", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 21: 

player->PlayDirectSound(12495);
player->MonsterSay("All my plans have led to this", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 20: 

player->PlayDirectSound(12527);
player->MonsterSay("Kil Jaeden Spawning", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 1: 

player->PlayDirectSound(11463);
player->MonsterSay("Akama your duplicity is hardly surprising I should of slaughtered you and your malformed brethren long ago", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 2:

player->PlayDirectSound(11464);
player->MonsterSay("Boldly said but I remain unconvinced", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 3:

player->PlayDirectSound(11465);
player->MonsterSay("Come my minions, deal with this traitor as he deserves", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 4:

player->PlayDirectSound(11466);
player->MonsterSay("You are not prepared!!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 5:

player->PlayDirectSound(11467);
player->MonsterSay("I can feel your hatred", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 6:

player->PlayDirectSound(11468 );
player->MonsterSay("Give into your fear", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 7:

player->PlayDirectSound(11469);
player->MonsterSay("You know nothing of power", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 8:

player->PlayDirectSound(11470);
player->MonsterSay("Feel the hatred of 10,000 years", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 9:

player->PlayDirectSound(11471);
player->MonsterSay("Such arrogance", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 10:

player->PlayDirectSound(11472);
player->MonsterSay("This is to easy", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 11:

player->PlayDirectSound(11473);
player->MonsterSay("Who shall be next to taste my blades?", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 12:

player->PlayDirectSound(11474);
player->MonsterSay("You have wasted to much time mortals. Now you shall fall", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 13:

player->PlayDirectSound(11475);
player->MonsterSay("Behold the power of the Demon within", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 14:

player->PlayDirectSound(11476);
player->MonsterSay("Is this it mortals? Is this all the fury you can muster?", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 15:

player->PlayDirectSound(11477);
player->MonsterSay("Maiev. How is it even possible?", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 16:

player->PlayDirectSound(11478);
player->MonsterSay("You have won ... Maiev , but the huntress is nothing without the hunt. You are nothing without me", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 17:

player->PlayDirectSound(11479);
player->MonsterSay("I will not be touched by a rebel such as you", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();

return true;

case 18:

player->PlayDirectSound(11480);
player->MonsterSay("Behold the flames of Azzinoth!", LANG_UNIVERSAL, NULL);
player->CLOSE_GOSSIP_MENU();


                break;


         break;
             default:

        break;                              
    }
   }
  return true;
 }
};




void AddSC_npc_zvuky()
{
    new npc_zvuky();
}
