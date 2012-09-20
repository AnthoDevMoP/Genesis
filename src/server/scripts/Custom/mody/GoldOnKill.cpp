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

#include "ScriptPCH.h"

class GoldOnKill : public PlayerScript
{
	public:
		GoldOnKill() : PlayerScript("GoldOnKill") {}
	void OnPVPKill(Player * killer, Player * killed)
	{
		killer->SetMoney(killer->GetMoney() + 50000);
		killed->SetMoney(killed->GetMoney() - 20000);
	}
};

void AddSC_GoldOnKill()
{
	new GoldOnKill();
}