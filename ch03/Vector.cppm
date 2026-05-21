export module Vector;

export class Vector {
  public:
    Vector(int s);
    ~Vector();

    double &operator[](int i);
    const double &operator[](int i) const;

    double *begin();
    double *end();

    const double *begin() const;
    const double *end() const;

    int size() const;

  private:
    double *elem;
    int sz;
};

Vector::Vector(int s) : elem{new double[s]}, sz{s} {}

Vector::~Vector() { delete[] elem; }

double &Vector::operator[](int i) { return elem[i]; }

const double &Vector::operator[](int i) const { return elem[i]; }

double *Vector::begin() { return elem; }

double *Vector::end() { return elem + sz; }

const double *Vector::begin() const { return elem; }

const double *Vector::end() const { return elem + sz; }

int Vector::size() const { return sz; }

export bool operator==(const Vector &v1, const Vector &v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}
