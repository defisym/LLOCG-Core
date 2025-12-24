#pragma once

#include <cstdint>
#include <wchar.h>

enum class Unit :std::uint8_t {
    // Mius
    Mius_BiBi,
    Mius_Printemps,
    Mius_LilyWhite,

    // Aqours
    Aqours_GuiltyKiss,
    Aqours_CYaRon,
    Aqours_AZALEA,

    // Nijigasaki
    Niji_A_ZU_NA,
    Niji_QU4RTZ,
    Niji_R3BIRTH,
    Niji_DiverDiva,

    // Liella
    Liella_CatChu,
    Liella_KALEIDOSCORE,
    Liella_5yncri5e,

    // Hasunosora
    Hasu_CeriseBouquet,
    Hasu_DOLLCHESTRA,
    Hasu_MiraCraPark,

    // Mixed
    Mixed_YYY,
    Mixed_AiScReam,

    // Solo
    Solo,
};

// Mius
constexpr auto Mius_BiBi_String = L"BiBi";
constexpr auto Mius_Printemps_String = L"Printemps";
constexpr auto Mius_LilyWhite_String = L"Lily white";

// Aqours
constexpr auto Aqours_GuiltyKiss_String = L"Guilty Kiss";
constexpr auto Aqours_CYaRon_String = L"CYaRon!";
constexpr auto Aqours_AZALEA_String = L"AZALEA";

// Nijigasaki
constexpr auto Niji_A_ZU_NA_String = L"A·ZU·NA";
constexpr auto Niji_QU4RTZ_String = L"QU4RTZ";
constexpr auto Niji_R3BIRTH_String = L"R3BIRTH";
constexpr auto Niji_DiverDiva_String = L"DiverDiva";

// Liella
constexpr auto Liella_CatChu_String = L"CatChu!";
constexpr auto Liella_KALEIDOSCORE_String = L"KALEIDOSCORE";
constexpr auto Liella_5yncri5e_String = L"5yncri5e!";

// Hasunosora
constexpr auto Hasu_CeriseBouquet_String = L"Cerise Bouquet";
constexpr auto Hasu_DOLLCHESTRA_String = L"DOLLCHESTRA";
constexpr auto Hasu_MiraCraPark_String = L"Mira-Cra Park!";

// Mixed
constexpr auto Mixed_YYY_String = L"YYY";
constexpr auto Mixed_AiScReam_String = L"AiScReam";

// Solo
constexpr auto Solo_String = L"Solo";

const wchar_t* GetUnitName(const Unit& unit) {
    switch (unit) {
    // Mius
    case Unit::Mius_BiBi: return Mius_BiBi_String;
    case Unit::Mius_Printemps: return Mius_Printemps_String;
    case Unit::Mius_LilyWhite: return Mius_LilyWhite_String;

    // Aqours
    case Unit::Aqours_GuiltyKiss: return Aqours_GuiltyKiss_String;
    case Unit::Aqours_CYaRon: return Aqours_CYaRon_String;
    case Unit::Aqours_AZALEA: return Aqours_AZALEA_String;

    // Nijigasaki
    case Unit::Niji_A_ZU_NA: return Niji_A_ZU_NA_String;
    case Unit::Niji_QU4RTZ: return Niji_QU4RTZ_String;
    case Unit::Niji_R3BIRTH: return Niji_R3BIRTH_String;
    case Unit::Niji_DiverDiva: return Niji_DiverDiva_String;

    // Liella
    case Unit::Liella_CatChu: return Liella_CatChu_String;
    case Unit::Liella_KALEIDOSCORE: return Liella_KALEIDOSCORE_String;
    case Unit::Liella_5yncri5e: return Liella_5yncri5e_String;

    // Hasunosora
    case Unit::Hasu_CeriseBouquet: return Hasu_CeriseBouquet_String;
    case Unit::Hasu_DOLLCHESTRA: return Hasu_DOLLCHESTRA_String;
    case Unit::Hasu_MiraCraPark: return Hasu_MiraCraPark_String;

    // Mixed
    case Unit::Mixed_YYY: return Mixed_YYY_String;
    case Unit::Mixed_AiScReam: return Mixed_AiScReam_String;

    // Solo
    case Unit::Solo:
    // default
    default: return Solo_String;
    }
}

Unit GetUnitEnum(const wchar_t* pStr) {
    do {
        // Mius
        if (wcscmp(Mius_BiBi_String, pStr) == 0) {
            return Unit::Mius_BiBi;
        }
        if (wcscmp(Mius_Printemps_String, pStr) == 0) {
            return Unit::Mius_Printemps;
        }
        if (wcscmp(Mius_LilyWhite_String, pStr) == 0) {
            return Unit::Mius_LilyWhite;
        }

        // Aqours
        if (wcscmp(Aqours_GuiltyKiss_String, pStr) == 0) {
            return Unit::Aqours_GuiltyKiss;
        }
        if (wcscmp(Aqours_CYaRon_String, pStr) == 0) {
            return Unit::Aqours_CYaRon;
        }
        if (wcscmp(Aqours_AZALEA_String, pStr) == 0) {
            return Unit::Aqours_AZALEA;
        }

        // Nijigasaki
        if (wcscmp(Niji_A_ZU_NA_String, pStr) == 0) {
            return Unit::Niji_A_ZU_NA;
        }
        if (wcscmp(Niji_QU4RTZ_String, pStr) == 0) {
            return Unit::Niji_QU4RTZ;
        }
        if (wcscmp(Niji_R3BIRTH_String, pStr) == 0) {
            return Unit::Niji_R3BIRTH;
        }
        if (wcscmp(Niji_DiverDiva_String, pStr) == 0) {
            return Unit::Niji_DiverDiva;
        }

        // Liella
        if (wcscmp(Liella_CatChu_String, pStr) == 0) {
            return Unit::Liella_CatChu;
        }
        if (wcscmp(Liella_KALEIDOSCORE_String, pStr) == 0) {
            return Unit::Liella_KALEIDOSCORE;
        }
        if (wcscmp(Liella_5yncri5e_String, pStr) == 0) {
            return Unit::Liella_5yncri5e;
        }

        // Hasunosora
        if (wcscmp(Hasu_CeriseBouquet_String, pStr) == 0) {
            return Unit::Hasu_CeriseBouquet;
        }
        if (wcscmp(Hasu_DOLLCHESTRA_String, pStr) == 0) {
            return Unit::Hasu_DOLLCHESTRA;
        }
        if (wcscmp(Hasu_MiraCraPark_String, pStr) == 0) {
            return Unit::Hasu_MiraCraPark;
        }

        // Mixed
        if (wcscmp(Mixed_YYY_String, pStr) == 0) {
            return Unit::Mixed_YYY;
        }
        if (wcscmp(Mixed_AiScReam_String, pStr) == 0) {
            return Unit::Mixed_AiScReam;
        }

        // Solo
        if (wcscmp(Solo_String, pStr) == 0) {
            return Unit::Solo;
        }
    } while (false);

    return Unit::Solo;
}