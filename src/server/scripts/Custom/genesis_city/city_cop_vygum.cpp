/*###
# generic defines
###*/

#include "ScriptPCH.h"

enum Yells
{
    SAY_RANDOM_0                                = -2000000,
    SAY_RANDOM_1                                = -2000001,
    SAY_RANDOM_2                                = -2000002,
    SAY_RANDOM_3                                = -2000003,
    SAY_RANDOM_4                                = -2000004,
    SAY_RANDOM_5                                = -2000005,
};

// TEXT_0 "Pomahát a chranit !!!"
// TEXT_1 "Alebo tak niejak :D"
// TEXT_2 "Proste som ten dobrej :("
// TEXT_3 "Dodržovat zakon by sa mal ne ?!?!!Xd alebo pravydlá ?"
// TEXT_4 "Som nový poruèik Vygum"
// TEXT_5 "Som váš nový mestský stražny :D"

class city_cop_vygum : public CreatureScript
{
public:
    city_cop_vygum() : CreatureScript("city_cop_vygum") { }

    struct city_cop_vygumAI : public ScriptedAI
    {
        city_cop_vygumAI(Creature* c) : ScriptedAI(c) {}

        uint32 m_uiSayTimer;

        void UpdateAI(const uint32 uiDiff)
        {
            
            if (m_uiSayTimer <= uiDiff)
            {
                        DoScriptText(RAND(SAY_RANDOM_0, SAY_RANDOM_1, SAY_RANDOM_2, SAY_RANDOM_3, SAY_RANDOM_4, SAY_RANDOM_5), me);
                        m_uiSayTimer = 15000;                      //Say something agian in 15 seconds                     
            }
            else
                m_uiSayTimer -= uiDiff;
            
        }

      };

    CreatureAI* GetAI(Creature* creature) const
    {
        return new city_cop_vygumAI(creature);
    }
};

void AddSC_city_cop_vygum()
{
    new city_cop_vygum();
}