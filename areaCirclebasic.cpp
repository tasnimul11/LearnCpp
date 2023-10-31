#include <iostream>
using namespace std;
int main()
{
    float radius, area;
    const float pi=3.14159265359;

    /*If you declare a variable as const float x = 1.0;, you’re creating
    a floating-point variable x that cannot be modified
    after it’s been initialized with the value 1.0.
    Any attempt to change the value of x later in the code will result in a compile-time error.*/

    cout<<"Enter the Radius of your circle"<<endl;
    cin>> radius;

    area= pi*radius*radius;

    cout<<"Area of that circle is = "<<area;

    return 0;
}
//It's totally a basic calculation. Precise coding is available using <cmath> & more
