#include <iostream>

#include "Version/Version.h"

int main() {
    std::wcout << L"Core Version: " << GetCoreVersion() << "\n";
    std::wcout << L"Rule Version: " << GetRuleVersion() << "\n";
}
