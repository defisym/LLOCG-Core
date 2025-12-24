#pragma once

#include <cstdint>
#include <memory>

#include "3rdLib/nlohmann/single_include/nlohmann/json.hpp"

enum class CardType :std::uint8_t {
    Member,
    Live,
    Energy,
};

class CardBase {
    CardType type = CardType::Member;

public:
    using JsonData = nlohmann::basic_json<>;
    using JsonIt = nlohmann::json::iterator;

    CardBase(const JsonData& data);

    static std::unique_ptr<CardBase> CardFactory(const JsonData& data);
};