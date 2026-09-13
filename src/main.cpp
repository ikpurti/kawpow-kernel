#include "kawpow-kernel/work.h"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc > 1 && std::string(argv[1]) == "--help") {
        std::cerr << "kawpow-kernel [rounds]\n";
        return 0;
    }
    std::uint32_t rounds = 16;
    if (argc > 1) {
        rounds = static_cast<std::uint32_t>(std::stoul(argv[1]));
    }
    auto job = kawpowk::make_job(kawpowk::algo());
    auto n = kawpowk::bench(rounds);
    std::cout << "algo=" << kawpowk::algo() << " job=" << job.id << " rounds=" << n << "\n";
    return 0;
}
