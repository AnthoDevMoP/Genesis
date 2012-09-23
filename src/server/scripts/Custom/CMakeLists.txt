# Copyright (C) Likan Mod 2012-2013 <https://github.com/ChaosDevLikan/Genesis/>
# Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

set(scripts_STAT_SRCS
  ${scripts_STAT_SRCS}
#Boss/ ---------------------
#  Custom/Boss/boss_deathwing.cpp
#  Custom/Boss/boss_firelord.cpp

#buffer_doktor/ ---------------------
  Custom/buffer_doktor/npc_buffer_doktor.cpp

#currencies/ ---------------------
  Custom/currencies/npc_currencies_archaeology.cpp
  Custom/currencies/npc_currencies_cata.cpp
  Custom/currencies/npc_currencies_dar.cpp
  Custom/currencies/npc_currencies_miscel.cpp
  Custom/currencies/npc_currencies_pvp.cpp

#genesis_city/ ---------------------
  Custom/genesis_city/npc_genesis_city.cpp
  Custom/genesis_city/city_cop_vygum.cpp
  Custom/genesis_city/npc_event.cpp
#  Custom/genesis_city/npc_potkan.cpp

#hybrid/ ---------------------
  Custom/hybrid/npc_hybrid.cpp

#info/ ---------------------
  Custom/info/npc_info.cpp

#mody/ ---------------------
#  Custom/mody/GoldOnKill.cpp
#  Custom/mody/GoldOnKill.cpp
#  Custom/mody/resetduel.cpp
#  Custom/mody/System_Censure.cpp
#  Custom/mody/System_Xpforpvp.cpp

#mont_pucovna/ ---------------------
#  Custom/mont_pucovna/npc_mont_pucovna.cpp

#morph/ ---------------------
  Custom/morph/npc_morph.cpp

#nakup_lvl_za_goldy/ ---------------------
  Custom/nakup_lvl_za_goldy/npc_nakup_lvl_za_goldy.cpp

#profese/ ---------------------
  Custom/profese/npc_skynning_trener.cpp
  Custom/profese/npc_minig_trener.cpp
  Custom/profese/npc_herbalism_trener.cpp

#reputace/ ---------------------
  Custom/reputace/npc_reputation.cpp

#shop/ ---------------------
  Custom/shop/npc_potkan.cpp

#taxiky/ ---------------------
  Custom/taxiky/npc_desence_taxi.cpp
  Custom/taxiky/npc_vertexpinakle_taxi.cpp
  Custom/taxiky/npc_dkk_taxi.cpp
  Custom/taxiky/npc_shoop_taxi.cpp

#test/ ---------------------
  Custom/test/test_one.cpp
  Custom/test/test_two.cpp;
  Custom/test/test_tree.cpp
  Custom/test/test_four.cpp
  Custom/test/test_five.cpp
  Custom/test/test_six.cpp

#tools/ ---------------------
  Custom/tools/npc_tools.cpp

#trenery/ ---------------------
  Custom/trenery/npc_death_knight_trainer.cpp
  Custom/trenery/npc_druid_trainer.cpp
  Custom/trenery/npc_hunter_trainer.cpp
  Custom/trenery/npc_mage_trainer.cpp
  Custom/trenery/npc_mountt_trener.cpp
  Custom/trenery/npc_mountworgen_trener.cpp
  Custom/trenery/npc_paladin_trainer.cpp
  Custom/trenery/npc_priest_trainer.cpp
  Custom/trenery/npc_roguee_trainer.cpp
  Custom/trenery/npc_shaman_trainer.cpp
  Custom/trenery/npc_warlock_trainer.cpp
  Custom/trenery/npc_warrior_trainer.cpp

#vadne/ ---------------------
#  Custom/vadne/npc_petmaster.cpp

#vendors/ ---------------------
  Custom/vendors/npc_vanishing_powder.cpp

#zvuky/ ---------------------
  Custom/zvuky/npc_say.cpp
  Custom/zvuky/npc_zvuky.cpp

#poznamky ---------------------
)

message("  -> Prepared: Custom")
