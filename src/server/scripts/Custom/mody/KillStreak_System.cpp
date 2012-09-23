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

#include "ScriptPCH.h"

void SendMessage(Player * Killer, uint32 killstreak)
{
		std::string message;
		message += "[PvP System]: ";
		message += Killer->GetName();
		message += " is on a killstreak of ";
		message += killstreak;
		message += "!";
		sWorld->SendServerMessage(SERVER_MSG_STRING, message.c_str());
}

class KillStreak_System : public PlayerScript
{
public:
	KillStreak_System() : PlayerScript("KillStreak_System"){}

	struct KillStreak_Info
	{
		uint32 killstreak;
		uint64 lastkill;
	};

	static std::map<uint64, KillStreak_Info> KillStreakData;

	void OnPvPKill(Player * Killer, Player * Victim)
	{
		uint64 KillerGUID = Killer->GetGUID();
		uint64 VictimGUID = Victim->GetGUID();

		if( KillerGUID == VictimGUID || KillStreakData[KillerGUID].lastkill == VictimGUID )
			return;

		KillStreakData[KillerGUID].killstreak++;
		KillStreakData[KillerGUID].lastkill = VictimGUID;
		KillStreakData[VictimGUID].killstreak = 0;
		KillStreakData[VictimGUID].lastkill = 0;


		switch( KillStreakData[KillerGUID].killstreak )
		{

			case 5:
				SendMessage(Killer, KillStreakData[KillerGUID].killstreak);
				break;

			case 10:
				SendMessage(Killer, KillStreakData[KillerGUID].killstreak);
				break;

				
		}


	}
};

void AddSC_KillStreak_System()
{
    new KillStreak_System;
}