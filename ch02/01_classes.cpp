class Vector {
  public:
    Vector(int s) : elem{new double[s]}, sz{s} {} // construct a Vector
    double &operator[](int i) { return elem[i]; } // element access: subscription
    int size() { return sz; }

  private:
    double *elem; // pointer to elements
    int sz;       // the humber of elements
};
