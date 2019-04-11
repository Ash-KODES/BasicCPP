#include<iostream> //Header File
using namespace std; //For Input(cin) and Output(cout)

int main() //main function
{
    int a,b; //declaring variables of integer type
    float div; //declaring variable div of float(e.g - 1.0) type
    cout<<"Enter the first number."<<endl; //asking for entering first number
    cin>>a; //getting input for first number
    cout<<"Enter the second number."<<endl; //asking for entering second number
    cin>>b; //getting input for second number

    div=a/b; //dividing the numbers and storing in another variable.

    cout<<"Division : "<<div<<endl; //showing division of both numbers
}
