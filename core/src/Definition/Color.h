#pragma once

// heart color

#include <cstdint>

enum class Color :std::uint8_t {
    Pink,
    Red,
    Yellow,
    Green,
    Blue,
    Purple,
    Any,   // live requirement only, any color is valid
    All,   // blade heart only, select one color
    Extra, // blade heart only, draw one more card
    Score, // blade heart only, live score +1
};
