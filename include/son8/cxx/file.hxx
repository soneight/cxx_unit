#ifndef SON8_CXX_FILE_HXX
#define SON8_CXX_FILE_HXX

#include <son8/cxx/core.hxx>
// std
#include <fstream>
#include <iostream>
#include <iomanip>

namespace son8::cxx {
    // C++03
    // -- fstream
    using std::basic_filebuf;
    using std::basic_fstream;
    using std::basic_ifstream;
    using std::basic_ofstream;
    using std::filebuf;
    using std::fstream;
    using std::ifstream;
    using std::ofstream;
    using std::wfilebuf;
    using std::wfstream;
    using std::wifstream;
    using std::wofstream;
    // -- iomanip
    using std::get_money;
    using std::get_time;
    using std::put_money;
    using std::put_time;
    using std::quoted;
    using std::resetiosflags;
    using std::setbase;
    using std::setfill;
    using std::setiosflags;
    using std::setprecision;
    using std::setw;
    // -- iostream
    using std::cin;
    using std::cout;
    using std::cerr;
    using std::clog;
    using std::wcin;
    using std::wcout;
    using std::wcerr;
    using std::wclog;
} // namespace son8::cxx

#endif//SON8_CXX_FILE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
