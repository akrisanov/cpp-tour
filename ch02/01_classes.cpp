#include <iostream>
class Vector {
  public:
    Vector(int s) : elements{new double[s]}, sz{s} {} // construct a Vector
    double &operator[](int i) { return elements[i]; } // element access
    int size() { return sz; }

  private:
    double *elements; // pointer to elements
    int sz;           // the humber of elements
};

double read_and_sum(int s) {
    Vector v(s);
    for (int i = 0; i != v.size(); ++i) {
        std::cin >> v[i];
    }

    double sum = 0;
    for (int i = 0; i != v.size(); ++i) {
        sum += v[i];
    }

    return sum;
}

int main() {
    double sum = read_and_sum(6);
    std::cout << "\nelements sum: " << sum << '\n';
}
