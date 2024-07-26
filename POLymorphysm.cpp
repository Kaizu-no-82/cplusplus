/******************************************************************************

polymorphysm Runtime in java it is dynamic method dispatch 
1> If a base class is having all concrete function then it's only purpose is to reuseiblity 
2> If a base class is having some concrete and some pure virtual functions then it's purpose is to reuseibility and polymorphysm 
3> If a base class is having all virtual function then use of class is for only polymorphysm.

*******************************************************************************/
#include <iostream>
using namespace std;
class car{
    public:
   virtual void start()=0;//pure virtual function here class has become abstract 
   virtual void stop(){//if not pure then it will become runtime polymorphysm 
        printf("Car stopped\n");
    }
};
class inova:public car{
    public:
        void start(){
            printf("Inova Started\n");
        }
        void stop(){
            printf("Inova Stopped\n");
        }
        
};
class swift:public car{
    public:
    void start(){
        printf("Swift started\n");
    }
    void stopped(){
        printf("Swift stopped\n");
    }
    
};
int main()
{
    car *c= new inova;
     c= new swift;
    c->start();//base class function
    
     //car c;//cannot do it because its a abstract class 
    //c.inova::start();// cannot declare variable ‘c’ to be of abstract type ‘car’
    return 0;
}