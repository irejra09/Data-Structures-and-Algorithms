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

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    Complex c1(real1, imaginary1);
    Complex c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}
