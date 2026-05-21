// import Vector; does not search for Vector.cpp directly.
// The compiler needs a compiled module interface for Vector, and your build command/build system
// must compile the module before compiling user.cpp.

#include <cmath>
#include <iostream>

import Vector;

double sqrt_sum(const Vector &v) {
    double sum = 0.0;

    for (const auto &element : v) {
        sum += std::sqrt(element);
    }

    return sum;
}

int main() {
    Vector v(3);

    v[0] = 1.0;
    v[1] = 4.0;
    v[2] = 9.0;

    std::cout << sqrt_sum(v) << '\n';
}
