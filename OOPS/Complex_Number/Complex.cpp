#include <iostream>
using namespace std;
class Complex {
    // Complete this class
    private:
    int real;
    int imaginary;

    public:

    Complex(int real,int imaginary)
    {
        this -> real = real;
        this -> imaginary = imaginary;
    }

    void plus(Complex &C)
    {
        int rel = real + C.real;
        int img = imaginary + C.imaginary;
        real = rel;
        imaginary = img;
    }

    void multiply(Complex &C)
    {
        int rel1 = (real* C.real) - (imaginary* (C.imaginary));
        int img1 = (real * C.imaginary) + (imaginary* C.real);
        real = rel1;
        imaginary = img1;
    }

    void print()
    {
        cout<<real<<" + "<<"i"<<imaginary;
    }
    
};