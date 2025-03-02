#pragma once

#include "CardBase.h"

class LiveCard :public CardBase {
public:
    LiveCard(const JsonData& data) :CardBase(data) {}
};