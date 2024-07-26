#include <iostream>
#include <string>
//#include <cstring>
using namespace std;
 class rectangle{
    private:  
        int length;
        int breadth;
    public:
        void setlength(int l){//setter functions
            length =l;
        }
        void setbreadth(int b){//setter functions
            breadth = b;
        }
        rectangle (int l,int b){//constructor functions
            breadth = b;
             length =l;
        }
        rectangle (rectangle &r){//The copy constructor rectangle(const rectangle &r) 
        //initializes a new rectangle object with the length and 
        //breadth values from another rectangle object r.
            length=r.length;
            breadth=r.breadth;
        }
        int getlength(){//getter function 
            return length;
        }
        int getbreadth(){
            return breadth;
        }
        int area() //area and perimeter functions are faciliators 
        {
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
         bool isSquare() const //query functions
        {
        return length == breadth;
        }
        ~rectangle();//destructor
        //dont write functions inside the class
  };
int main()
{
    rectangle *r_1,*r_2; 
    int *b2,*b1;
   rectangle r1(10,90);//constructor is being called 
    rectangle r2(r1);//overloading of constructor 
    // r_1=&r1;
    // r_2=&r2;
    
    // b1=r1.getbreadth();
    // b2=r2.getbreadth();
    cout<<"Area is "<<r1.area();
    cout<<"Area is "<<r2.area();
    // cout<<b1<<endl;
    // cout<<b2<<endl;
    
    return 0;
}