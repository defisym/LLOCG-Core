#pragma once

#include "CardBase.h"

class EnergyCard :public CardBase {
public:
    EnergyCard(const JsonData& data) :CardBase(data) {}
};