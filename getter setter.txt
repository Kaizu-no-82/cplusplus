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
        int getlength(){//getter function 
            return length;
        }
        int getbreadth(){
            return breadth;
        }
        int area()
        {
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
  };
int main()
{
   rectangle r1;
   r1.setlength(10);//mutator of the class
    r1.setbreadth(90);
    cout<<"Area is "<<r1.area();

    return 0;
}