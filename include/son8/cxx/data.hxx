#ifndef SON8_CXX_DATA_HXX
#define SON8_CXX_DATA_HXX
/*
    DATA : algorithms and related to them data structures (not including generic types that does not support algorithms)
*/
#include <son8/cxx/core.hxx>
// std
#include <algorithm>
#include <complex>
#include <vector>

namespace son8::cxx {
    // C++98
    // -- algorithm
    using std::copy;
    // -- complex
    using std::arg;
    using std::complex;
    using std::conj;
    using std::norm;
    using std::imag;
    using std::polar;
    using std::real;
    // C++11
    // -- complex
    using std::proj;
    // -- vector
    using std::vector;
    // C++11
    inline namespace literals {
        // C++14
        // -- complex
        inline namespace complex_literals {
            using namespace std::complex_literals;
        }
    }
} // son8::cxx

#endif//SON8_CXX_DATA_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
