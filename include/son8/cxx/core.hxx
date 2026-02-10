#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX
/*
    CORE: language related and core utilities
*/
// TODO son8
#include <son8/c/base.hxx>
#include <son8/c/byte.hxx>
#include <son8/c/math.hxx>
// std
#include <array>
#include <chrono>
#include <memory>
#include <initializer_list>
#include <limits>
#include <new>
#include <ratio>
#include <scoped_allocator>
#include <string>
#include <string_view>
#include <typeindex>
#include <typeinfo>
#include <utility>

namespace son8::cxx {
    // C++98
    // -- limits
    using std::float_denorm_style;
    using std::float_round_style;
    using std::numeric_limits;
    // -- memory
    using std::allocator;
    // std::auto_ptr - deprecated C++11, removed C++17
    // std::get_temporary_buffer - deprecated C++17, removed C++20
    // std::raw_storage_iterator - deprecated C++17, removed C++20
    // std::return_temporary_buffer - deprecated C++17, removed C++20
    // -- new
    using std::new_handler;
    using std::nothrow_t;
    using std::nothrow;
    using std::set_new_handler;
    // -- string
    using std::basic_string;
    using std::string;
    using std::u16string;
    using std::u32string;
    // -- typeinfo
    using std::type_info;
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
    using std::allocator_arg_t;
    using std::default_delete;
    using std::uses_allocator;
    using std::unique_ptr;
    using std::allocator_arg;
    using std::addressof;
    using std::align;
    // std::declare_no_pointers - removed C++23
    // std::declare_reachable - removed C++23
    // std::get_pointer_safety - removed C++23
    // std::undeclare_no_pointers - removed C++23
    // std::undeclare_reachable - removed C++23
    // -- new
    using std::get_new_handler;
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
    // -- scoped_allocator
    using std::scoped_allocator_adaptor;
    // -- string
    using std::to_string;
    // -- typeindex
    using std::type_index;
    // -- utility
    using std::move;
    // C++14
    // -- (_many_:array,string,string_view,...)
    using std::cbegin;
    using std::cend;
    using std::crbegin;
    using std::rbegin;
    // -- memory
    using std::make_unique;
    // -- utility
    using std::exchange;
    // C++17
    // -- (_many_:array,string,string_view,...)
    using std::data;
    using std::empty;
    using std::size;
    // -- memory
    using std::destroy_at;
    // -- new
    using std::hardware_constructive_interference_size;
    using std::hardware_destructive_interference_size;
    using std::align_val_t;
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
    using std::chrono::treat_as_floating_point;
    using std::chrono::time_point_cast;
} // son8::cxx::chrono

#endif//SON8_CXX_CORE_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
