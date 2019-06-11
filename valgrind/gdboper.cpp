#include<iostream>
using namespace std;
class A
{
        int a, b;
        public:
        A()
        {
                a = 0;
                b = 0;
        }
        A(int x, int y)
        {
                a = x;
                b = y;
        }
        A operator+(A obj)
        {
                A r;
                r.a = a+obj.a;
                r.b = b+obj.b;
                return r;
        }
        void display()
        {
                cout<<a<<b<<endl;
        }


};
int main()
{
        A o1(2, 3);
        A o2(3, 4);
        A o3;
        o3 = o1+o2;
        o3.display();

        return 0;
}

