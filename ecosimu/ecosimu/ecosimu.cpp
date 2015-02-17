#include "ecosimu.h"
#include <Windows.h>

const EcoResourceBunch EcoData::houseCost[] = { { EcoRsc_Wood, 20 } };
const EcoResourceBunch EcoData::fishermanHutCost[] = { { EcoRsc_Wood, 40 } };
const EcoResourceBunch EcoData::lumberjackHutCost[] = { { EcoRsc_Wood, 40 } };
const EcoResourceBunch EcoData::stoneMasonHutCost[] = { { EcoRsc_Wood, 100 } };
const EcoResourceBunch EcoData::ironMineCost[] = { { EcoRsc_Wood, 150 }, { EcoRsc_Stone, 20 }, { EcoRsc_Tools, 5 } };
const EcoResourceBunch EcoData::charcoalBurnerHutCost[] = { { EcoRsc_Wood, 20 }, { EcoRsc_Tools, 5 } };
const EcoResourceBunch EcoData::ironSmelterCost[] = { { EcoRsc_Wood, 20 }, { EcoRsc_Stone, 20 }, { EcoRsc_Tools, 5 } };
const EcoResourceBunch EcoData::toolWorkshopCost[] = { { EcoRsc_Wood, 20 }, { EcoRsc_Stone, 20 } };

const EcoResourceBunch EcoData::houseInputs[] = { {EcoRsc_None, 0} };
const EcoResourceBunch EcoData::fishermanHutInputs[] = { { EcoRsc_None, 40 } };
const EcoResourceBunch EcoData::lumberjackHutInputs[] = { { EcoRsc_None, 0 } };
const EcoResourceBunch EcoData::stoneMasonHutInputs[] = { { EcoRsc_None, 0 } };
const EcoResourceBunch EcoData::ironMineInputs[] = { { EcoRsc_None, 0 } };
const EcoResourceBunch EcoData::charcoalBurnerHutInputs[] = { { EcoRsc_Wood, 5 } };
const EcoResourceBunch EcoData::ironSmelterInputs[] = { { EcoRsc_Charcoal, 1 }, { EcoRsc_Ore, 1 } };
const EcoResourceBunch EcoData::toolWorkshopInputs[] = { { EcoRsc_Charcoal, 1 }, { EcoRsc_Iron, 1 } };

const EcoResourceBunch EcoData::houseOutput[] = { { EcoRsc_None, 0 } };
const EcoResourceBunch EcoData::fishermanHutOutput[] = { { EcoRsc_Fish, 40 } };
const EcoResourceBunch EcoData::lumberjackHutOutput[] = { { EcoRsc_Wood, 1 } };
const EcoResourceBunch EcoData::stoneMasonHutOutput[] = { { EcoRsc_Stone, 1 } };
const EcoResourceBunch EcoData::ironMineOutput[] = { { EcoRsc_Ore, 1 } };
const EcoResourceBunch EcoData::charcoalBurnerHutOutput[] = { { EcoRsc_Charcoal, 1 } };
const EcoResourceBunch EcoData::ironSmelterOutput[] = { { EcoRsc_Iron, 1 } };
const EcoResourceBunch EcoData::toolWorkshopOutput[] = { { EcoRsc_Tools, 1 } };

const char* EcoData::buildingName[] = { "house", "fisherman hut", "lumberjack hut", "stone mason hut", "iron mine", "charcoal burner hut", "iron smelter", "tool workshop" };

#define BUILDING_DATA(bld) EcoData::bld##Cost,_countof(EcoData::bld##Cost),EcoData::bld##Inputs,_countof(EcoData::bld##Inputs),EcoData::bld##Output
EcoState::EcoState()
{
    buildings[EcoBld_House].init(BUILDING_DATA(house));
    buildings[EcoBld_FishermanHut].init(BUILDING_DATA(fishermanHut));
    buildings[EcoBld_LumberjackHut].init(BUILDING_DATA(lumberjackHut));
    buildings[EcoBld_StoneMasonHut].init(BUILDING_DATA(stoneMasonHut));
    buildings[EcoBld_IronMine].init(BUILDING_DATA(ironMine));
    buildings[EcoBld_CharcoalBurnerHut].init(BUILDING_DATA(charcoalBurnerHut));
    buildings[EcoBld_IronSmelter].init(BUILDING_DATA(ironSmelter));
    buildings[EcoBld_ToolWorkshop].init(BUILDING_DATA(toolWorkshop));
}

void EcoSimu::displayState()
{
    system("CLS");
    COORD p = { 0 };
    HANDLE hdl = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hdl, p);
    printf("p: %d/%d, house:%d, Fisherman:%d, Lumberjack:%d, StoneMason:%d, IronMine:%d, CharcoleBurner::%d, IronSmelter:%d, ToolWorkshop:%d\n",
        m_state.population, m_state.maxPopulation, m_state.buildings[EcoBld_House].count, m_state.buildings[EcoBld_FishermanHut].count,
        m_state.buildings[EcoBld_LumberjackHut].count, m_state.buildings[EcoBld_StoneMasonHut].count, m_state.buildings[EcoBld_IronMine].count,
        m_state.buildings[EcoBld_CharcoalBurnerHut].count, m_state.buildings[EcoBld_IronSmelter].count, m_state.buildings[EcoBld_ToolWorkshop].count);
    printf("wood:%d, fish:%d, stone:%d, ore:%d, charcoal:%d, iron:%d, tools:%d\n");
    printf("build: house(1), fisherman's hut(2), lumberjack(3), stoneMason(4), ironmine(5), charcoalBurner(6), ironSmelter(7), toolWorkshop(8)");
}