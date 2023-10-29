//learning how to format the outputs
//using showpoint, setprecision, fixed

#include <iostream>
#include <cmath> // to use fmod() in line 28
#include <iomanip> //to use setprecission()

using namespace std;

int main()

{
    float num1, num2;

    cout << "Input 1st number to be divided/from subtracted" <<endl;
    cin >> num1;
    cout << "Input 2nd number" <<endl;
    cin >> num2;

    cout<<showpoint; //to show doshomik (points)
    cout<<fixed;
    cout<<setprecision (4); //as we used "fixed" it will show 4 nums after point, if fixed wasn't used, it would show total 4 nums

    float div = num1/num2;
    float rem = fmod(num1, num2); //type casting, % only works in int or fmod
    float mul = num1*num2;
    cout << setw(25)<< "The division is " << div <<endl; //setw() is used to fix the character width
    cout << setw(25)<< "The remainder is " << rem <<endl;
    cout << setw(25)<< "The multiplication is " << mul<<endl;

    cout << noshowpoint;//these won't show points
    cout<<fixed;
    cout<<setprecision (0);
    float add = num1 + num2;
    float sub = num1 - num2;


    cout << setw(25)<< "The addition is " << add <<endl;
    cout << setw(25)<< "The subtraction is "<< sub ;

}
