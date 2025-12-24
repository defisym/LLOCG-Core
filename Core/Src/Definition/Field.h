#pragma once

#include <cstdint>

enum class Field :std::uint8_t {
    Stage,
    Live,
    Energy,   // may simplifiled
    Success,
    Greenroom,
    Solution, // may not be needed
    Hand,
    MainDeck,
    EnergyDeck,
    Banished,
};
