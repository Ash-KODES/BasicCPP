/*
    Finding Greater Common Factor(GCD) for two number.
    ---------------------------------------------------
    @author : Akash Prasher ~~ https://github.com/akashprasher/
    This Code is written in CodeBlocks.
*/

#include<iostream> //Header File
using namespace std; //For Input(cin) and Output(cout)

int gcd(int a,int b) //Function for finding GCD
{
    int res=0;  // Variable to count the GCD
    for(int i=1;i<=a&&i<=b;i++) //for loop to check the cases
        {
        if(a%i==0 && b%i==0){ //it will be true only if a%i==0 and b%i==0
            res=i;
        }
    }
    cout<<"GCD is "<<res<<endl; //Displaying Result
}

int main(){
    int x,y; // Declaring variables
    cout<<"Enter first number"<<endl; //ask for input first number
    cin>>x; // input first number
    cout<<"Enter second number"<<endl;  //ask for input second number
    cin>>y; // input second number
    gcd(x,y); //calling GCD function
    return 0;
}
