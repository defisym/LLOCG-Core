#pragma once

#include "CardBase.h"

class MemberCard :public CardBase {
public:
    MemberCard(const JsonData& data) :CardBase(data) {}
};