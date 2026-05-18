#include <string>

using namespace std;

void print(int);
void print(double);
void print(string);

void user() {
    print(42);
    print(9.65);
    print("Lisbon");
}
