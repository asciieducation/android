#include<iostream>
using namespace std;
class addition
{
	public:
	int add(int a, int b)
		{
			cout<<a+b<<endl;
		}
	int add(int a, int b, int c)
	{
		cout<<a+b+c<<endl;
	}
}a;

int main()
{
     a.add(10,20);
     a.add(10,20,30);
	 return 0;
}