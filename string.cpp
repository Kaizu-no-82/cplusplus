#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
   string str1,str2;
    char str[12];
 getline(cin,str1);
 getline(cin,str2);
 string::iterator it;
 it=str1.begin();//iterator 
 cout<<*it<<endl;
str1.copy(str,str1.length());
   cout<<str1.substr(3,4)<<endl;
   cout<<str1<<endl;
  cout<<str<<endl;
  cout<<str1[4]<<endl;//str[1] is also operator overloading 
   string str3=str1+str2;// operator overloading 
   cout<<str3<<endl;
//   cout<<str1.max_size()<<endl;
//   cout<<str1.capacity()<<endl;
  // cout<<strlen(str1)<<endl;
   

    return 0;
}