#pragma once

#include "CardBase.h"

class LiveCard :CardBase {
    LiveCard(const JsonData& data) :CardBase(data) {}
};