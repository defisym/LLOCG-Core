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
    Any,   // live requirement only
    All,   // blade heart only
    Extra, // blade heart only
};
