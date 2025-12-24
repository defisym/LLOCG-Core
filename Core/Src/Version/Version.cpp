#include "Version.h"

#include "format"

const wchar_t* GetCoreVersion() {
    static std::wstring coreVersion = std::format(L"{}.{}.{}",
        LLOCG_CORE_VERSION_MAJOR,
        LLOCG_CORE_VERSION_MINOR,
        LLOCG_CORE_VERSION_PATCH);
    return coreVersion.c_str();
}

const wchar_t* GetRuleVersion() {
    static std::wstring coreVersion = std::format(L"{}.{}.{}",
        LLOCG_RULE_VERSION_MAJOR,
        LLOCG_RULE_VERSION_MINOR,
        LLOCG_RULE_VERSION_PATCH);
    return coreVersion.c_str();
}
