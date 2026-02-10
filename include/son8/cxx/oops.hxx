#ifndef SON8_CXX_OOPS_HXX
#define SON8_CXX_OOPS_HXX
/*
 * OOPS: Object Oriented Programming Superiority (virtual and other heavy mistakes)
 */
#include <son8/cxx/core.hxx>
// TODO son8
#include <son8/c/char.hxx>
#include <son8/c/file.hxx>
#include <son8/c/util.hxx>
#include <son8/c/wide.hxx>
// std
#include <iostream>

namespace son8::cxx {
    // C++98
    // string<-core.hxx
    using std::getline;
    using std::wstring;
    // -- iostream
    using std::cout;
    using std::endl;
    // C++11
    // string<-core.hxx
    using std::stoi;
    using std::stol;
    using std::stoll;
    using std::to_wstring;
    // C++17
    // string_view<-core.hxx
    using std::wstring_view;
} // son8::cxx

#endif//SON8_CXX_OOPS_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
