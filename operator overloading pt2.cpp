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
    friend Complex operator + (const Complex& c1,const Complex& c2);
    friend ostream &operator<<(ostream &out, Complex &c);//over loading of osteream 
    
};
Complex operator + (const Complex& c1,const Complex& c2) {
        return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
    }
ostream &operator<<(ostream &out, Complex &c){
	out<<c.real<<"+i"<<c.imginary<<endl;
	return out;
}
int main()
{
    Complex c1(9,6);
    Complex c2(4,5);
    Complex c3 = c1+c2;
    //c3.display();
    cout<<c3;
    return 0;
}    
    