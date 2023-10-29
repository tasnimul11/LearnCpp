#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    float num1, num2;

    cout << "Input 1st number to be divided/from subtracted" <<endl;
    cin >> num1;
    cout << "Input 2nd number" <<endl;
    cin >> num2;

    cout<<showpoint; //to show doshomik (points)

    float add = num1 + num2;
    float sub = num1 - num2;
    float div = num1/num2;
    float rem = fmod(num1, num2); //type casting
    float mul = num1*num2;

    cout << "The addition is " << add <<endl;
    cout << "The subtraction is "<< sub <<endl;
    cout << "The division is " << div <<endl;
    cout << "The remainder is" << rem <<endl;
    cout << "The multiplication is" << mul;



}
