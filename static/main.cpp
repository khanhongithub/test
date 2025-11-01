#include <iostream>

using namespace std;

class A {
public:
    // static data member
    static int x;
    A(){ cout << "A's constructor is called \n"; }
};
//test conflict
//test line confict 1
//test line confict 2
int A::x = 2;

int main()
{
    cout << "Acessing static member \n" << endl;
    cout << A::x << endl; 

    return 0;
}
