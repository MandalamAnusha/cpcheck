#include<iostream>
using namespace std;

int main()
{
	char *ch ;
	ch = new char[9];
	{
		int *p;
		p = new int[4];
		*p = 20;
		cout<<*p<<endl;
		delete p;
	}
	delete ch;
	return 0;
}
