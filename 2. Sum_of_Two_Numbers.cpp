#include<iostream> //Header File
using namespace std; //For Input(cin) and Output(cout)

int main() //main function
{
    int a,b,sum; //declaring variables of integer type
    cout<<"Enter the first number."<<endl; //asking for entering first number
    cin>>a; //getting input for first number
    cout<<"Enter the second number."<<endl; //asking for entering second number
    cin>>b; //getting input for second number

    sum=a+b; //adding both numbers and storing in another variable of same data type

    cout<<"Sum : "<<sum<<endl; //showing sum of both numbers
}
