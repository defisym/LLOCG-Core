#pragma once

#include <vector>

#include "../Card/MemberCard.h"
#include "../Card/LiveCard.h"
#include "../Card/EnergyCard.h"

class Deck {
    std::vector<CardBase*> deck = {};

    ~Deck() {
        for (const auto& it : deck) { delete it; }
    }
};