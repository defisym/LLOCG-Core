#pragma once

#include <cstdint>
#include <wchar.h>

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

constexpr auto Pink_String = L"Pink";
constexpr auto Red_String = L"Red";
constexpr auto Yellow_String = L"Yellow";
constexpr auto Green_String = L"Green";
constexpr auto Blue_String = L"Blue";
constexpr auto Purple_String = L"Purple";
constexpr auto Any_String = L"Any";
constexpr auto All_String = L"All";
constexpr auto Extra_String = L"Extra";
constexpr auto Score_String = L"Score";

const wchar_t* GetColorName(const Color& color) {
    switch (color) {
    case Color::Pink: return Pink_String;
    case Color::Red: return Red_String;
    case Color::Yellow: return Yellow_String;
    case Color::Green: return Green_String;
    case Color::Blue: return Blue_String;
    case Color::Purple: return Purple_String;
    case Color::Any: return Any_String;
    case Color::All: return All_String;
    case Color::Extra: return Extra_String;
    case Color::Score:
    default: return Pink_String;
    }
}

Color GetColorEnum(const wchar_t* pStr) {
    do {
        if (wcscmp(Pink_String, pStr) == 0) {
            return Color::Pink;
        }
        if (wcscmp(Red_String, pStr) == 0) {
            return Color::Red;
        }
        if (wcscmp(Yellow_String, pStr) == 0) {
            return Color::Yellow;
        }
        if (wcscmp(Green_String, pStr) == 0) {
            return Color::Green;
        }
        if (wcscmp(Blue_String, pStr) == 0) {
            return Color::Blue;
        }
        if (wcscmp(Purple_String, pStr) == 0) {
            return Color::Purple;
        }
        if (wcscmp(Any_String, pStr) == 0) {
            return Color::Any;
        }
        if (wcscmp(All_String, pStr) == 0) {
            return Color::All;
        }
        if (wcscmp(Extra_String, pStr) == 0) {
            return Color::Extra;
        }
        if (wcscmp(Score_String, pStr) == 0) {
            return Color::Score;
        }
    } while (false);

    return Color::Score;
}