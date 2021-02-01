#include<iostream>
using namespace std;

struct emp
{
	int id=101;
	char name[20]="suraj";
	float sal=1230.12;
}e;

int main()
{

	cout<<"\nemployee id is:"<<e.id;
	cout<<"\nemployee name is:"<<e.name;
	cout<<"\nemployee salary is:"<<e.sal;
	return 0;
}