#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a integer no."<<endl;

    cin>>num;

    if(num>0)
    {
        cout <<"The value is positive"<<endl;

    }
    else if (num<0)      //else is used to reduce execution time
    {
        cout<<"The value is negative"<<endl;
    }

    else if (num==0)     //equal sign is == (double)
    {
        cout<<"ZERO"<<endl;
    }

    else        //else function does not contain any condition
    {
        cout<<"WRONG"<<endl;
    }
    return 0;
}
