#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX
/*
    CORE: language related and core utilities
*/
// TODO son8
#include <son8/c/base.hxx>
#include <son8/c/byte.hxx>
#include <son8/c/math.hxx>
// std (? not sure to include in core)
#include <any> // ?
#include <array>
#include <chrono> // ?
#include <memory>
#include <initializer_list>
#include <iterator>
#include <limits>
#include <new>
#include <optional> // ?
#include <ratio> // ?
#include <scoped_allocator> // ?
#include <string>
#include <string_view>
#include <tuple>
#include <typeindex> // ?
#include <typeinfo>  // ?
#include <utility>
#include <variant>

namespace son8::cxx {
    // C++98
    // -- (_many_:deque,tuple,utility,...)
    using std::swap;
    // -- iterator
    using std::back_insert_iterator;
    using std::front_insert_iterator;
    using std::insert_iterator;
    // std::iterator - deprecated C++17
    using std::reverse_iterator;
    using std::advance;
    using std::distance;
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
    using std::pair;
    using std::make_pair;
    // C++11
    // -- (_many_:array,iterator,string,string_view...)
    using std::begin;
    using std::end;
    // -- (_many_:array,tuple,variant...)
    using std::get;
    // -- (_many_:array,string,tuple...)
    using std::tuple_size;
    using std::tuple_element;
    // -- (_many_:string,...)
    using std::hash;
    // -- (_many_:tuple,utility)
    using std::ignore;
    // -- array
    using std::array;
    // -- initializer_list
    using std::initializer_list;
    // -- iterator
    using std::move_iterator;
    using std::next;
    using std::prev;
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
    // -- tuple
    using std::tuple;
    using std::forward_as_tuple;
    using std::make_tuple;
    using std::tie;
    using std::tuple_cat;
    // -- typeindex
    using std::type_index;
    // -- utility
    using std::piecewise_construct_t;
    using std::piecewise_construct;
    using std::declval;
    using std::forward;
    using std::move;
    using std::move_if_noexcept;
    // C++14
    // -- (_many_:array,iterator,string,string_view,...)
    using std::cbegin;
    using std::cend;
    using std::crbegin;
    using std::rbegin;
    // -- memory
    using std::make_unique;
    // -- utility
    using std::exchange;
    using std::integer_sequence;
    // C++17
    // -- (_many_:array,iterator,string,string_view,...)
    using std::data;
    using std::empty;
    using std::size;
    // -- any
    using std::any;
    using std::any_cast;
    using std::make_any;
    // -- memory
    using std::destroy_at;
    // -- new
    using std::hardware_constructive_interference_size;
    using std::hardware_destructive_interference_size;
    using std::align_val_t;
    // -- optional
    using std::nullopt_t;
    using std::optional;
    using std::nullopt;
    using std::make_optional;
    // -- string_view
    using std::basic_string_view;
    using std::string_view;
    using std::u16string_view;
    using std::u32string_view;
    // -- tuple
    using std::apply;
    using std::make_from_tuple;
    // -- utility
    using std::in_place_index;
    using std::in_place_index_t;
    using std::in_place_t;
    using std::in_place_type;
    using std::in_place_type_t;
    using std::in_place;
    using std::as_const;
    // -- variant
    using std::monostate;
    using std::variant;
    using std::variant_npos;
    using std::get_if;
    using std::holds_alternative;
    using std::visit;
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

namespace son8::cxx::rel_ops {
    using namespace std::rel_ops;
}

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
