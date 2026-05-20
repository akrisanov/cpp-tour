#include <iostream>

enum class Color { red, green, blue };
enum class Traffic_light { green, yellow, red };
enum Bits { oneBit = 1, twoBits = 2, fourBits = 4, eightBits = 8 };

// user-defined prefix increment operator for Traffic_light
Traffic_light &operator++(Traffic_light &t) {
    using enum Traffic_light; // make enumerators visible without qualification

    switch (t) {
    case green:
        return t = yellow;
    case yellow:
        return t = red;
    case red:
        return t = green;
    }
}

int main() {
    auto c = Color::red;
    auto t = Traffic_light::green;
    std::cout << "color: " << static_cast<int>(c) << "\ntraffic light: " << static_cast<int>(t)
              << '\n';

    // example of using the increment operator for Traffic_light
    auto signal = Traffic_light::green;
    std::cout << "signal: " << static_cast<int>(signal) << '\n';
    ++signal;
    std::cout << "signal: " << static_cast<int>(signal) << '\n';

    // enum defined without class keyword are accessible without qualification
    // and their enumerators are in the same scope as the enum
    auto b = oneBit;
    std::cout << "bits: " << b << '\n';
}
