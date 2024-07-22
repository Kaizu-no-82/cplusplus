/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}
    void display(){
        cout<<real<<"+i"<<imaginary<<endl;
    }
    friend Complex operator + (const Complex c1,const Complex c2);
    
};
Complex operator + (const Complex& c1,const Complex c2) {
        return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
    }
int main()
{
    Complex c1(9,6);
    Complex c2(4,5);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}    
    