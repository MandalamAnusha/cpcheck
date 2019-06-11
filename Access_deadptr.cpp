#include<iostream>
using namespace std;

int main()
{
        int *p = new int;
        *p = 10;
        delete p;
        *p = 4;
}

