#include "simplendian.hpp"
#include <cstdint>

namespace sipmlendian {

union uint_or_char {
    uint32_t i;
    char c[4];
};

uint_or_char probe{0x01020304};

bool is_big() { return probe.c[0] == 1; }

bool is_little() { return probe.c[0] == 4; }

}  // namespace sipmlendian
