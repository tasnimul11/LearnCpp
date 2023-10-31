//Celsius to Fahrenheit

#include <iostream>
using namespace std;
int main()
{
    double F, Cels;
    cout<<"Enter Celsius value"<<endl;
    cin>>Cels;
    F= (1.8*Cels + 32);

    cout<<"Fahrenheit value is "<<F<< " degree";

    return 0;

}
