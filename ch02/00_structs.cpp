#include <iostream>

struct Vector {
    double *elem; // pointer to elements
    int sz;       // number of elements
};

void vector_init(Vector &v, int s) {
    v.elem = new double[s];
    v.sz = s;
}

double read_and_sum(int s) {
    Vector v;
    vector_init(v, s);

    int sum = 0;

    for (int i = 0; i != s; ++i) {
        std::cin >> v.elem[i];
        sum += v.elem[i];
    }

    return sum;
}

void f(Vector v, Vector &rv, Vector *pv) {
    int i1 = v.sz;   // access through name
    int i2 = rv.sz;  // access through reference
    int i3 = pv->sz; // access through pointer
}

int main() {
    int sum = read_and_sum(3);
    std::cout << "\nitems sum is " << sum << '\n';
}
