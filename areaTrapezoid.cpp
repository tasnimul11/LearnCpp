#include <iostream>
using namespace std;
int main()
{
    int upper, lower, vertical, area;
    cout<<"\t Find the Area of a  Trapezoid"<<endl;

    cout<<"Upper hand=?"<<endl;
    cin>> upper;

    cout<<"Lower hand=?"<<endl;
    cin>> lower;

    cout<<"Vertical height=?"<<endl;
    cin>> vertical;

    area = 0.5*(upper+lower)*vertical; //as per formula

    cout<<"The Area of your Trapezoid is = "<<area <<endl;

    return 0;
}
