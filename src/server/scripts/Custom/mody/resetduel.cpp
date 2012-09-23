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

class Reset_OnDuelEnd : public PlayerScript
{
    public:
        Reset_OnDuelEnd() : PlayerScript("Reset_OnDuelEnd") {}

    void OnDuelEnd(Player *winner, Player *looser, DuelCompleteType type)
    {
        // reset cooldowns in zone 0, 41 and 616
                if (winner->GetZoneId() == 0 || winner->GetZoneId() == 12 || winner->GetZoneId() == 14)
                {
                        winner->RemoveArenaSpellCooldowns();
                        looser->RemoveArenaSpellCooldowns();
                        winner->SetHealth(winner->GetMaxHealth());
                        winner->SetPower(POWER_MANA, winner->GetMaxPower(POWER_MANA));
                        looser->SetHealth(looser->GetMaxHealth());
                        looser->SetPower(POWER_MANA, looser->GetMaxPower(POWER_MANA));
                }
    }
};

void AddSC_Reset()
{
    new Reset_OnDuelEnd;
}