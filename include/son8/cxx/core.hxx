#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX
/*
    CORE: language related and core utilities
*/

// std
#include <array>
#include <initializer_list>
#include <string>
#include <string_view>
#include <utility>

namespace son8::cxx {
    // C++98
    // -- string
    using std::string;
    // -- utility
    using std::swap;
    // C++11
    // -- (_many_:string,...)
    using std::hash;
    // -- array
    using std::array;
    // -- initializer_list
    using std::initializer_list;
    // -- utility
    using std::move;
    // C++14
    // -- utility
    using std::exchange;
    // C++17
    // -- string_view
    using std::string_view;
} // son8::cxx

#endif//SON8_CXX_CORE_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
