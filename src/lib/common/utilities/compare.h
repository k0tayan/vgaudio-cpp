#pragma once

#include <cstddef>
#include <functional>

namespace common_lib::utilities {

    template<typename T>
    struct compare;

    template<typename T>
    struct compare {

        constexpr ptrdiff_t operator()(const T &x, const T &y) const {
            const auto less = std::less<T>();

            if (less(x, y)) {
                return -1;
            }

            const auto greater = std::greater<T>();

            if (greater(x, y)) {
                return 1;
            }

            return 0;
        }

    };

}
