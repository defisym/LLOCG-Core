#pragma once

#include <cstdint>

enum class Phase :std::uint8_t {
    Active, // auto
    Energy, // auto
    Draw,
    Main,
    Live,
};

enum class LivePhase :std::uint8_t {
    Set,
    Perormance,
    Check,
};
