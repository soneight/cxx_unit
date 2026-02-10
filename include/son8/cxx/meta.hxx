#ifndef SON8_CXX_META_HXX
#define SON8_CXX_META_HXX
/*
    META: compile-time related
*/
#include <son8/cxx/core.hxx>
// std
#include <type_traits>

namespace son8::cxx {
    // C++98
    // string<-core.hxx
    using std::char_traits;
    // C++11
    // memory<-core.hxx
    using std::allocator_traits;
    // std::pointer_safety - removed in C++23
    using std::pointer_traits;
    // -- type_traits
    using std::common_type;
    using std::enable_if;
    // C++14
    // -- type_traits
    using std::common_type_t;
} // son8::cxx

#endif//SON8_CXX_META_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
