/******************************************************************************

polymorphysm 

*******************************************************************************/
#include <iostream>
using namespace std;
class base{
  public:
    virtual void display(){
        cout<<"Display of base"<<endl;
        //after doing virtual it will become normal 
    }
    // void display(){
    //     cout<<"Display of base"<<endl;
        
    // } it is not virtual
};
class derived:public base{
    public:
      void display(){
        cout<<"Display of derived"<<endl;  
    }
};
int main()
{
    base *p=new derived;
    p->display();//only call in base class but pointer is for derived class
//   base b;
//   derived d; 
//   d.base::display();//display of base not over ridding of function.
//   d.display();    
    return 0;
}