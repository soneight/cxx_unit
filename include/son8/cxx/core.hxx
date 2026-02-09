#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX
/*
    CORE: language related and core utilities
*/
// TODO son8
//#include <son8/c/base.hxx>
//#include <son8/c/byte.hxx>
//#include <son8/c/math.hxx>
// std
#include <array>
#include <chrono>
#include <memory>
#include <initializer_list>
#include <ratio>
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
    // -- memory
    using std::enable_shared_from_this;
    using std::unique_ptr;
    using std::uses_allocator;
    // -- ratio
    using std::atto;
    using std::centi;
    using std::deca;
    using std::deci;
    using std::exa;
    using std::femto;
    using std::giga;
    using std::hecto;
    using std::kilo;
    using std::mega;
    using std::micro;
    using std::milli;
    using std::nano;
    using std::peta;
    using std::pico;
    using std::ratio;
    using std::ratio_add;
    using std::ratio_divide;
    using std::ratio_equal;
    using std::ratio_greater;
    using std::ratio_greater_equal;
    using std::ratio_less;
    using std::ratio_less_equal;
    using std::ratio_multiply;
    using std::ratio_not_equal;
    using std::ratio_subtract;
    using std::tera;
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
    // C++11
    // -- (_many_:string,string_view,...)
    inline namespace literals {
        using namespace std::literals;
        // C++14
        // -- string
        inline namespace string_literals { using namespace std::literals::string_literals; }
        // C++14
        // -- chrono
        inline namespace chrono_literals { using namespace std::literals::chrono_literals; }
        // C++17
        // -- string_view
        inline namespace string_view_literals { using namespace std::literals::string_view_literals; }
    }
} // son8::cxx

namespace son8::cxx::chrono {
    // C++11
    // -- chrono
    using std::common_type;
    using std::chrono::duration;
    using std::chrono::duration_values;
    using std::chrono::hours;
    using std::chrono::microseconds;
    using std::chrono::milliseconds;
    using std::chrono::minutes;
    using std::chrono::nanoseconds;
    using std::chrono::seconds;
    using std::chrono::high_resolution_clock;
    using std::chrono::steady_clock;
    using std::chrono::system_clock;
    using std::chrono::time_point;
    using std::chrono::time_point_cast;
    using std::chrono::treat_as_floating_point;
} // son8::cxx::chrono

#endif//SON8_CXX_CORE_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
