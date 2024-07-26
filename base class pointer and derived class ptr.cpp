/******************************************************************************
Base class pointer derived class object 
*******************************************************************************/
#include <iostream>
using namespace std;
class base{
    public:
        void func(){
            cout<<"func of base class"<<endl;
    }
    
};
class derived:public base{
    public:
        void func2(){
            cout<<"func of derived class"<<endl;
        }
            
        
};
int main()
{
    derived d;
    base b;
    derived *d1,d2;
    base *b1;
    b1=&d;
    d1=&d;
   // d2=&b;‘operator=’ (operand types are ‘derived’ and ‘base*’); 
    d1->func();//we can sucssefully acess both of the class
    d1->func2();

    b1->func();//we can acess it easily 
//    b1->func2(); we cannot access it 
    return 0;
}