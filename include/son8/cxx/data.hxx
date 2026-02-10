#ifndef SON8_CXX_DATA_HXX
#define SON8_CXX_DATA_HXX
/*
    DATA : algorithms and related to them data structures (not including generic types that does not support algorithms)
*/
#include <son8/cxx/core.hxx>
// std
#include <algorithm>
#include <complex>
#include <execution>
#include <vector>

namespace son8::cxx {
    // C++98
    // -- algorithm
    using std::copy;
    // -- complex
    using std::complex;
    using std::arg;
    using std::conj;
    using std::norm;
    using std::imag;
    using std::polar;
    using std::real;
    // -- memory<-core.hxx
    using std::uninitialized_copy;
    using std::uninitialized_fill;
    // C++11
    // -- complex
    using std::proj;
    // -- memory<-core.hxx
    using std::uninitialized_copy_n;
    using std::uninitialized_fill_n;
    // -- vector
    using std::vector;
    // C++17
    // -- execution
    using std::is_execution_policy;
    // -- memory<-core.hxx
    using std::destroy;
    using std::destroy_n;
    using std::uninitialized_default_construct;
    using std::uninitialized_default_construct_n;
    using std::uninitialized_move;
    using std::uninitialized_move_n;
    // C++11
    inline namespace literals {
        // C++14
        // -- complex
        inline namespace complex_literals {
            using namespace std::complex_literals;
        }
    }
} // son8::cxx

namespace son8::cxx::execution {
    // C++17
    // --execution
    using std::execution::parallel_policy;
    using std::execution::parallel_unsequenced_policy;
    using std::execution::sequenced_policy;
    using std::execution::par;
    using std::execution::par_unseq;
    using std::execution::seq;
}

#endif//SON8_CXX_DATA_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
