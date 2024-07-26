#include <iostream>
#include <string>
//#include <cstring>
using namespace std;
 class rectangle{
    private:  //private is acess specifier 
        int length;
        int breadth;
    public:   //public is acess specifier
        void setlength(int l){//setter functions
            length =l;
        }
        void setbreadth(int b){//setter functions
            breadth = b;
        }
        rectangle (int l=0,int b=0){//constructor functions
            breadth = b;
             length =l;
        }
        int getlength(){//getter function 
            return length;
        }
        int getbreadth(){
            return breadth;
        }
        rectangle(rectangle &r){length = r.length; breadth=r.breadth;}
        int area();
        int perimeter();
         bool isSquare() const //query functions
        {
        return length == breadth;
        }
  };
  int rectangle::area() //area and perimeter functions are faciliators 
        {
            return length*breadth;
        }
  int rectangle::perimeter(){
            return 2*(length+breadth);
        }
  class cuboid:public rectangle{
    private:
        int height;
    public:
      /*  cuboid(int l,int b,int h):length(l),breadth(b);height(h){}; we cannot acess private method 
      directly*/
    cuboid(int h, int l, int b) :height(h)/*calling of base class from derived class */,rectangle(l, b) {
        // Constructor initializes base class and sets height param
    }
    // cuboid(int h, int l, int b){
    //     setbreadth(b);
    //     setlength(l);
    //     height=h;
    // }
    int getheight(){
        return height;
    }
    int displayvolume(){
        return getlength()*getbreadth()*height;
    }
    
  };
int main()
{
    rectangle r1(10,90);//constructor is being called 
    rectangle r2(r1);
    cuboid c1(10);
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Volume is"<<c1.displayvolume()<<endl;
     return 0;
}
//derived class only protected and public are accessible and outside only public is accessible
/***************************************************
*acess to**************private********protected********public*************
*inside class**********true***********true**************true**************          
*inside derived class**false**********true**************true**************
*an object*************false**********false*************true**************/
/*
1>Single inheritance 
2>Hierarical inheritance 
3>Multilevel inheritance
4>Multiple Inheritance (A class can inherit from more than 1 base class not available in java)*/
/*Same name but diffrent name polymorphysm (Genralization)like shape.*/ 