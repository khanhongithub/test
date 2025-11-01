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
//test line 1 conflict in func
//test line 2 conflict in func
    int x,y; //test non-comment conflict
    return 0;
//test conflict if no line between
}
