#include<iostream>
using namespace std;
class BaseClass
{
    public:
         virtual void display()
         {
              cout << "Base class";
         }
};
class DerivedClass : public BaseClass
{
    public:
         void display()
         {
              cout << "Derived Class";
         }
};
int main()
{
     BaseClass *bc;       // Base class pointer
     DerivedClass dc;   // Derived class object
     bc = &dc;
     bc → display();     // Late Binding Occurs
}