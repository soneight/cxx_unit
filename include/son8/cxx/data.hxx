#ifndef SON8_CXX_DATA_HXX
#define SON8_CXX_DATA_HXX
/*
    DATA : algorithms and related to them data structures (not including generic types that does not support algorithms)
*/
#include <son8/cxx/core.hxx>
// std
#include <algorithm>
#include <complex>
#include <deque>
#include <execution>
#include <forward_list>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace son8::cxx {
    // C++98
    // -- algorithm
    using std::accumulate;
    using std::adjacent_difference;
    using std::adjacent_find;
    using std::binary_search;
    using std::copy;
    using std::copy_backward;
    using std::count;
    using std::count_if;
    using std::fill;
    using std::fill_n;
    using std::find;
    using std::find_end;
    using std::find_first_of;
    using std::find_if;
    using std::for_each;
    using std::generate;
    using std::generate_n;
    using std::equal;
    using std::equal_range;
    using std::includes;
    using std::inner_product;
    using std::inplace_merge;
    using std::iter_swap;
    using std::lexicographical_compare;
    using std::lower_bound;
    using std::make_heap;
    using std::max;
    using std::max_element;
    using std::merge;
    using std::min;
    using std::min_element;
    using std::mismatch;
    using std::next_permutation;
    using std::nth_element;
    using std::partial_sort;
    using std::partial_sort_copy;
    using std::partial_sum;
    using std::partition;
    using std::push_heap;
    using std::pop_heap;
    using std::prev_permutation;
    // std::random_shuffle - deprecated C++14, removed C++17
    using std::remove;
    using std::remove_copy;
    using std::remove_copy_if;
    using std::remove_if;
    using std::replace;
    using std::replace_if;
    using std::reverse;
    using std::reverse_copy;
    using std::rotate;
    using std::rotate_copy;
    using std::search;
    using std::search_n;
    using std::set_difference;
    using std::set_intersection;
    using std::set_symmetric_difference;
    using std::set_union;
    using std::sort;
    using std::sort_heap;
    using std::stable_sort;
    using std::stable_partition;
    using std::swap;
    using std::swap_ranges;
    using std::transform;
    using std::unique;
    using std::unique_copy;
    using std::upper_bound;
    // -- complex
    using std::complex;
    using std::arg;
    using std::conj;
    using std::norm;
    using std::imag;
    using std::polar;
    using std::real;
    // -- deque
    using std::deque;
    // -- list
    using std::list;
    // -- map
    using std::map;
    using std::multimap;
    // -- memory<-core.hxx
    using std::uninitialized_copy;
    using std::uninitialized_fill;
    // -- queue
    using std::priority_queue;
    using std::queue;
    // -- set
    using std::multiset;
    using std::set;
    // -- stack
    using std::stack;
    // -- vector
    using std::vector;
    // C++11
    // -- algorithm
    using std::all_of;
    using std::any_of;
    using std::copy_if;
    using std::copy_n;
    using std::find_if_not;
    using std::iota;
    using std::is_heap;
    using std::is_heap_until;
    using std::is_partitioned;
    using std::is_permutation;
    using std::is_sorted;
    using std::is_sorted_until;
    using std::minmax;
    using std::minmax_element;
    using std::move;
    using std::move_backward;
    using std::none_of;
    using std::partition_copy;
    using std::partition_point;
    using std::shuffle;
    // -- complex
    using std::proj;
    // -- forward_list
    using std::forward_list;
    // -- memory<-core.hxx
    using std::uninitialized_copy_n;
    using std::uninitialized_fill_n;
    // -- unordered_map
    using std::unordered_map;
    using std::unordered_multimap;
    // -- unordered_set
    using std::unordered_multiset;
    using std::unordered_set;
    // C++17
    // -- algorithm
    using std::clamp;
    using std::for_each_n;
    using std::gcd;
    using std::exclusive_scan;
    using std::inclusive_scan;
    using std::lcm;
    using std::reduce;
    using std::transform_exclusive_scan;
    using std::transform_inclusive_scan;
    using std::transform_reduce;
    using std::sample;
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
