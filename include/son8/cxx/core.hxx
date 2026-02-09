#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX
/*
    CORE: language related and core utilities
*/
// TODO son8
//#include <son8/c/base.hxx>
//#include <son8/c/byte.hxx>
// std
#include <array>
#include <initializer_list>
#include <string>
#include <string_view>
#include <utility>

namespace son8::cxx {
    // C++98
    // -- string
    using std::basic_string;
    using std::string;
    using std::u16string;
    using std::u32string;
    // -- utility
    using std::swap;
    // C++11
    // -- (_many_:array,...)
    using std::begin;
    using std::end;
    // -- (_many_:array,string...)
    using std::tuple_size;
    using std::tuple_element;
    // -- (_many_:string,...)
    using std::hash;
    // -- array
    using std::array;
    using std::get;
    // -- initializer_list
    using std::initializer_list;
    // -- string
    using std::to_string;
    // -- utility
    using std::move;
    // C++14
    // -- (_many_:array,string,string_view,...)
    using std::cbegin;
    using std::cend;
    using std::crbegin;
    using std::rbegin;
    // -- utility
    using std::exchange;
    // C++17
    // -- (_many_:array,string,string_view,...)
    using std::data;
    using std::empty;
    using std::size;
    // -- string_view
    using std::basic_string_view;
    using std::string_view;
    using std::u16string_view;
    using std::u32string_view;
    // C++98...
    // -- (_many_:string,string_view,...)
    inline namespace literals {
        using namespace std::literals;
        // C++14
        // -- string
        inline namespace string_literals {
            using namespace std::literals::string_literals;
        }
        // C++17
        // -- string_view
        inline namespace string_view_literals {
            using namespace std::literals::string_view_literals;
        }
    }
} // son8::cxx

#endif//SON8_CXX_CORE_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
