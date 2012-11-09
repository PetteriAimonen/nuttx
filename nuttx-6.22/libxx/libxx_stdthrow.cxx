#include <stdlib.h>
#include <debug.h>

namespace std {
    void __throw_out_of_range(const char*) {
        dbg("C++: Vector .at() with argument out of range\n");
        abort();
    }
    
    void __throw_length_error(const char*) {
        dbg("C++: Vector resize to excessive length\n");
        abort();
    }
    
    void __throw_bad_alloc() {
        dbg("C++: Bad allocation\n");
        abort();
    }
}