#include "00_Vector.h"

Vector::Vector(int s) : sz{s}, elem{new double[s]} {}

double &Vector::operator[](int i) { return elem[i]; }

int Vector::size() { return sz; }
