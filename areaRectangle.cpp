#include <iostream>
using namespace std;

int main()
{
    double base, height, area;
    cout<<"\t Calculate the Area of a Triangle"<<endl;

    cout<<"Enter the Base: "<<endl;
    cin>> base;

    cout<<"Enter the Height: "<<endl;
    cin>> height;

    area = 0.5*base*height;
    cout<<"Area is "<<area<<endl;

    return 0;
}
