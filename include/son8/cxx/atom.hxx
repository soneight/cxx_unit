#ifndef SON8_CXX_ATOM_HXX
#define SON8_CXX_ATOM_HXX
/*
    ATOM: concurrency and parallelism
*/
#include <son8/cxx/core.hxx>
// std
#include <atomic>
#include <future>
#include <thread>

namespace son8::cxx {
    // C++11
    // -- atomic
    using std::atomic;
    // -- future
    using std::async;
    using std::future;
    using std::future_category;
    using std::future_errc;
    using std::future_error;
    using std::future_status;
    using std::launch;
    using std::packaged_task;
    using std::promise;
    using std::shared_future;
    // -- memory<-core.hxx
    using std::owner_less;
    using std::enable_shared_from_this;
    using std::shared_ptr;
    using std::weak_ptr;
    using std::allocate_shared;
    using std::const_pointer_cast;
    using std::dynamic_pointer_cast;
    using std::get_deleter;
    using std::make_shared;
    using std::reinterpret_pointer_cast;
    using std::static_pointer_cast;
    // -- thread
    using std::thread;
    // C++11
    namespace this_thread {
        using std::this_thread::get_id;
        using std::this_thread::sleep_for;
        using std::this_thread::sleep_until;
        using std::this_thread::yield;
    }
} // son8::cxx

#endif//SON8_CXX_ATOM_HXX

// Ⓒ 2026 Oleg'Ease'Kharchuk ᦒ
