#include <iostream>
using namespace std;

void passbyValue(int b);  //function prototyping
void passbyReference(int &b); //function prototyping

int main()
{
    int a = 50; //declaring variable a
    passbyValue(a); //setting int b equals to int a
    cout << "After pass by Value function. Value of A inside main is : " << a << endl;
    passbyReference(a); // setting int&b equal to A
    cout << "After pass by reference function. Value of A inside main is : " << a << endl;

    return 0;
}

void passbyValue(int b)
{
cout << "In pass by value function value of b is " << b <<endl;
b++;
cout << "After incrementing value of B .. value inside function is: " << b << endl;
}
void passbyReference(int &b) //int &b stands for the reference
{
    cout <<"In pass by reference function value of b is " << b <<endl;
    b++; //incrementing using reference..
    cout << "After incrementing value of B .. value inside function is: " << b << endl;
//pass by reference is global via pass by value is local
}


/*Reference type just refers to a variable.They even
point to the same memory location*/
