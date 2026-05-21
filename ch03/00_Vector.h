// users will #include this file to use the Vector class
class Vector {
  public:
    Vector(int);             // constructor
    double &operator[](int); // element access
    int size();              // number of elements

  private:
    int sz;
    double *elem;
};
