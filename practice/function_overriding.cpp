#include<iostream>
using namespace std;
class BaseClass
{
     public:
         int display()
         {
              cout <<"Super Class\t";
         }
};
class DerivedClass:public BaseClass
{
     public:
         int display()
         {
              cout <<"\n Sub Class";
         }
};
int main()
{
     BaseClass b;           //Base class object
     DerivedClass d;     //Derived class object
     b.display();          //Early Binding Occurs
     d.display();   
}