#include <iostream>
#include <string>

using namespace std;

void print(int x) { std::cout << x << '\n'; }

void print(double x) { std::cout << x << '\n'; }

void print(std::string s) { std::cout << s << '\n'; }

void user() {
    print(42);
    print(9.65);
    print("Lisbon");
}

int main() { user(); }
