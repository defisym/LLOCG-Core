#include "CardBase.h"

#include "MemberCard.h"
#include "LiveCard.h"
#include "EnergyCard.h"

CardBase::CardBase(const JsonData&) {}

std::unique_ptr<CardBase> CardBase::CardFactory(const JsonData& data) {
    CardType type = CardType::Member;

    // update type

    do {
        if (type == CardType::Member) {
            return std::make_unique<MemberCard>(data);
        }

        if (type == CardType::Live) {
            return std::make_unique<LiveCard>(data);
        }
        if (type == CardType::Energy) {
            return std::make_unique<EnergyCard>(data);
        }
    } while (false);

    return nullptr;
}
