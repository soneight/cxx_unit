#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX

// std
#include <any>
#include <array>
#include <bitset>
#include <functional> // TODO skipped entities
#include <initializer_list>
#include <iosfwd>
#include <iterator>
#include <limits>
#include <memory>
#include <new>
#include <optional>
#include <tuple> // TODO skipped entities
#include <typeindex>
#include <typeinfo>
#include <utility> // TODO skipped entities
#include <variant>

namespace son8::cxx {
    // C++03
    // -- _many_
    using std::swap;
    // -- bitset
    using std::bitset;
    // -- iosfwd
    using std::basic_filebuf;
    using std::basic_fstream;
    using std::basic_ifstream;
    using std::basic_ios;
    using std::basic_iostream;
    using std::basic_istream;
    using std::basic_istringstream;
    using std::basic_ofstream;
    using std::basic_ostream;
    using std::basic_ostringstream;
    using std::basic_streambuf;
    using std::basic_stringbuf;
    using std::basic_stringstream;
    using std::char_traits;
    using std::filebuf;
    using std::fpos;
    using std::fstream;
    using std::ifstream;
    using std::ios;
    using std::iostream;
    using std::istream;
    using std::istringstream;
    using std::ofstream;
    using std::ostream;
    using std::ostringstream;
    using std::streambuf;
    using std::streampos;
    using std::stringbuf;
    using std::stringstream;
    using std::wfilebuf;
    using std::wfstream;
    using std::wifstream;
    using std::wios;
    using std::wiostream;
    using std::wistream;
    using std::wistringstream;
    using std::wofstream;
    using std::wostream;
    using std::wostringstream;
    using std::wstreambuf;
    using std::wstreampos;
    using std::wstringbuf;
    using std::wstringstream;
    // ---- depr-rm?
    // using std::istrstream; // depr C++03, rm C++26
    // using std::ostrstream; // depr C++03, rm C++26
    // using std::strstream; // depr C++03, rm C++26
    // using std::strstreambuf; // depr C++03, rm C++26
    // -- iterator
    using std::advance;
    using std::back_insert_iterator;
    using std::back_inserter;
    using std::bidirectional_iterator_tag;
    using std::distance;
    using std::forward_iterator_tag;
    using std::front_insert_iterator;
    using std::front_inserter;
    using std::insert_iterator;
    using std::inserter;
    using std::iterator_traits;
    using std::input_iterator_tag;
    using std::output_iterator_tag;
    using std::random_access_iterator_tag;
    using std::reverse_iterator;
    // ---- depr-rm?
    // using std::iterator; // depr C++17
    // -- limits
    using std::float_denorm_style;
    using std::float_round_style;
    using std::numeric_limits;
    // -- memory
    using std::allocator;
    // ---- depr-rm?
    // using std::auto_ptr; // depr C++11, rm C++17
    // using std::get_temporary_buffer; // depr C++17, rm C++20
    // using std::raw_storage_iterator; // depr C++17, rm C++20
    // using std::return_temporary_buffer; // depr C++17, rm C++20
    // -- new
    using std::nothrow;
    using std::nothrow_t;
    // -- typeinfo
    using std::type_info;
    // -- utility
    using std::make_pair;
    using std::pair;
    // C++11
    // -- _many_
    using std::begin;
    using std::end;
    using std::get;
    using std::hash; // functional: TODO list species
    using std::ignore;
    using std::tuple_element;
    using std::tuple_size;
    // -- array
    using std::array;
    // -- initializer_list
    using std::initializer_list;
    // -- iosfwd
    using std::u16streampos;
    using std::u32streampos;
    // -- iterator
    using std::make_move_iterator;
    using std::move_iterator;
    using std::next;
    using std::prev;
    // -- memory
    using std::addressof;
    using std::align;
    using std::allocator_arg;
    using std::allocator_arg_t;
    using std::allocator_traits;
    using std::default_delete;
    using std::pointer_traits;
    using std::unique_ptr;
    // ---- depr-rm?
    // using std::declare_no_pointers; // rm C++23
    // using std::declare_reachable; // rm C++23
    // using std::get_pointer_safety; // rm C++23
    // using std::undeclare_no_pointers; // rm C++23
    // using std::undeclare_reachable; // rm C++23
    // -- tuple
    using std::make_tuple;
    using std::tuple;
    using std::tie;
    // -- typeindex
    using std::type_index;
    // -- utility
    using std::forward;
    using std::move;
    // C++14
    // -- _many_
    using std::crbegin;
    using std::crend;
    using std::rbegin;
    using std::rend;
    // -- memory
    using std::make_reverse_iterator;
    using std::make_unique;
    // -- utility
    using std::exchange;
    // C++17
    // -- _many_
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
    using std::align_val_t;
    using std::hardware_constructive_interference_size;
    using std::hardware_destructive_interference_size;
    using std::launder;
    // -- optional
    using std::make_optional;
    using std::nullopt;
    using std::nullopt_t;
    using std::optional;
    // -- utility
    using std::as_const;
    // -- variant
    using std::get_if;
    using std::holds_alternative;
    using std::monostate;
    using std::variant;
    using std::variant_npos;
    using std::visit;

} // namespace son8::cxx

#endif//SON8_CXX_CORE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
