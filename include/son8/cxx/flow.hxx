#ifndef SON8_CXX_FLOW_HXX
#define SON8_CXX_FLOW_HXX
/*
    FLOW: exceptions and other error handling related functionality
*/
#include <son8/cxx/core.hxx>
// TODO son8
#include <son8/c/exec.hxx>
// std
#include <exception>
#include <stdexcept>
#include <system_error>

namespace son8::cxx {
    // C++98
    // new<-core.hxx
    using std::bad_alloc;
    // typeinfo<-core.hxx
    using std::bad_cast;
    using std::bad_typeid;
    // -- exception
    using std::exception;
    // -- stdexcept
    using std::domain_error;
    using std::invalid_argument;
    using std::length_error;
    using std::logic_error;
    using std::out_of_range;
    using std::overflow_error;
    using std::range_error;
    using std::runtime_error;
    using std::underflow_error;
    // C++11
    // -- memory<-core.hxx
    using std::bad_weak_ptr;
    // new<-core.hxx
    using std::bad_array_new_length;
    // -- system_error
    using std::errc;
    using std::error_category;
    using std::error_code;
    using std::error_condition;
    using std::is_error_code_enum;
    using std::is_error_code_enum;
    using std::system_error;
    using std::generic_category;
    using std::make_error_code;
    using std::make_error_condition;
    using std::system_category;
    // C++17
    // -- any<-core.hxx
    using std::bad_any_cast;
    // -- optional
    using std::bad_optional_access;
    // -- variant
    using std::bad_variant_access;

} // son8::cxx

#endif//SON8_CXX_FLOW_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
