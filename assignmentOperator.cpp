#include <iostream>
using namespace std;

int main()
{
    int x=100;

    x +=7; //x=x+y
    cout<<x <<endl;

    x-=7; //x=x-y, now x=107(from the upper line)
    cout<<x<<endl;

    x*=7;
    cout<<x<<endl;

    x/=7;
    cout<<x<<endl;

    x%=7; //remainder
    cout<<x<<endl;

    return 0;
}
