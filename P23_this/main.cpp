#include <iostream>
using namespace std;

class Complex
{
public:
  double real, imag;
  Complex(double r, double i);
  ~Complex();
  void print()
  {
    cout << real << "," << imag;
  }
  Complex &AddOne()
  {
    this->real++;
    return *this;
  }
};

Complex::Complex(double r, double i) : real(r), imag(i)
{
}

Complex::~Complex()
{
}

int main(int argc, char const *argv[])
{
  Complex c1(1, 1), c2(0, 0);
  c2 = c1.AddOne();
  c2.print();
  return 0;
}