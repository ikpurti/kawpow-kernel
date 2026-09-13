#include "kawpow-kernel/work.h"

#include <cstdlib>
#include <iostream>

#define CHECK(cond)                                                          \
    do {                                                                     \
        if (!(cond)) {                                                       \
            std::cerr << "fail: " #cond " (" << __FILE__ << ":" << __LINE__  \
                      << ")\n";                                              \
            return 1;                                                        \
        }                                                                    \
    } while (0)

int main() {
    auto a = kawpowk::make_job("pool");
    auto b = kawpowk::make_job("pool");
    CHECK(a.id == b.id);
    CHECK(kawpowk::hash_nonce(a, 1) != kawpowk::hash_nonce(a, 2));
    CHECK(kawpowk::bench(8) == 8);
    CHECK(kawpowk::algo() != nullptr);
    std::cout << "ok\n";
    return 0;
}
