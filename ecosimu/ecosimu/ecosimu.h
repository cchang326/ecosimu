#include <inttypes.h>
#include <vector>
using namespace std;

enum EcoResourceType {
    EcoRsc_None = 0,
    EcoRsc_Wood,
    EcoRsc_Fish,
    EcoRsc_Stone,
    EcoRsc_Ore,
    EcoRsc_Charcoal,
    EcoRsc_Iron,
    EcoRsc_Tools,

    EcoRsc_Count
};

enum EcoBuildingType {
    EcoBld_House = 0,
    EcoBld_FishermanHut,
    EcoBld_LumberjackHut,
    EcoBld_StoneMasonHut,
    EcoBld_IronMine,
    EcoBld_CharcoalBurnerHut,
    EcoBld_IronSmelter,
    EcoBld_ToolWorkshop,

    EcoBld_Count
};

struct EcoResourceBunch {
    EcoResourceType type;
    int32_t count;
};

class EcoBuildingBase {
public:
    EcoBuildingBase() {};
    virtual ~EcoBuildingBase() {};

private:
    vector<EcoResourceBunch> cost;

};

class EcoHouse {

};

struct EcoBuilding {
    EcoBuilding()
    {
        output.count = 0;
        output.type = EcoRsc_Wood;
        count = 0;
    }

    ~EcoBuilding()
    {
        cost.clear();
        inputs.clear();
    }

    void init(const EcoResourceBunch *pCost, int32_t costCount, const EcoResourceBunch *pInput, int32_t inputCount,
        const EcoResourceBunch *pOutput)
    {
        cost.assign(pCost, pCost + costCount);
        inputs.assign(pInput, pInput + inputCount);
        output = *pOutput;
    }

    vector <EcoResourceBunch> cost;    
    vector <EcoResourceBunch> inputs;
    EcoResourceBunch output;
    int32_t count;
};

class EcoData {
public:
    static const EcoResourceBunch houseCost[];
    static const EcoResourceBunch fishermanHutCost[];
    static const EcoResourceBunch lumberjackHutCost[];
    static const EcoResourceBunch stoneMasonHutCost[];
    static const EcoResourceBunch ironMineCost[];
    static const EcoResourceBunch charcoalBurnerHutCost[];
    static const EcoResourceBunch ironSmelterCost[];
    static const EcoResourceBunch toolWorkshopCost[];

    static const EcoResourceBunch houseInputs[];
    static const EcoResourceBunch fishermanHutInputs[];
    static const EcoResourceBunch lumberjackHutInputs[];
    static const EcoResourceBunch stoneMasonHutInputs[];
    static const EcoResourceBunch ironMineInputs[];
    static const EcoResourceBunch charcoalBurnerHutInputs[];
    static const EcoResourceBunch ironSmelterInputs[];
    static const EcoResourceBunch toolWorkshopInputs[];

    static const EcoResourceBunch houseOutput[];
    static const EcoResourceBunch fishermanHutOutput[];
    static const EcoResourceBunch lumberjackHutOutput[];
    static const EcoResourceBunch stoneMasonHutOutput[];
    static const EcoResourceBunch ironMineOutput[];
    static const EcoResourceBunch charcoalBurnerHutOutput[];
    static const EcoResourceBunch ironSmelterOutput[];
    static const EcoResourceBunch toolWorkshopOutput[];

    static const char* buildingName[];
};

struct EcoState {
    EcoState();
    int32_t population;
    int32_t maxPopulation;
    int32_t inventory[EcoRsc_Count];
    int32_t increment[EcoRsc_Count];
    EcoBuilding buildings[EcoBld_Count];
};

class EcoSimu {
public:
    
    void displayState();

private:
    EcoState m_state;
};