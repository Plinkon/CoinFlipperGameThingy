#include <iostream>
#include <vector>

// Pack info stuff
enum PACKS {
    CARDBOARD,
    TIN,
    FOIL,
    SILVER,
    GOLDEN,
    DIAMOND,
};

// todo: add pack rewards vec and pack reward chances vec

// gameState stuff for management
class gameState {
    private:
        float points = 0; // default
        std::vector<std::string> packsInInventory;

        std::string packToString(int pack) {
            switch (pack) {
                case 0: // CARDBOARD
                    return "Cardboard";
                case 1: // TIN
                    return "Tin";
                case 2: // FOIL
                    return "Foil";
                case 3: // SILVER
                    return "Silver";
                case 4: // GOLDEN
                    return "Golden";
                case 5: // DIAMOND
                    return "Diamond";
                default:
                    return;
            }
        }

        // todo: add randomBool(int truePercentChance) func to return true or false 
    public:
        gameState() = default;
        ~gameState() = default;

    //--POINT MANIPULATION--//
    void addPoints(int amount) {
        if (amount == 0) return;

        this->points += amount;
        if (this->points < 0) {
            this->points = 0;
        }
    }

    void removePoints(int amount) {
        if (amount == 0) return;

        this->points -= amount;
        if (this->points < 0) {
            this->points = 0;
        }
    }

    //--PACK STUFF--//
    void addPack(int pack) {
        this->packsInInventory.emplace_back(this->packToString(pack));
    }

    void removePack(int pack) {
        // remove pack at index
        packsInInventory.erase(std::remove(packsInInventory.begin(),
                                           packsInInventory.end(),
                                           pack),
                               packsInInventory.end());
    }
};

int main() {
    // todo: start game stuff and init settings


    while (true) {
        // todo: show shop and inv.

        // todo: open packs and flip coins
        
    }
}