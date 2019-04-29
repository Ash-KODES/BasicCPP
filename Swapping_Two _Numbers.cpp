/*
    Swaping Two Numbers using function
    ---------------------------------------------------
    @author : Akash Prasher ~~ https://github.com/akashprasher/
    This Code is written in CodeBlocks.
*/

#include<iostream>
using namespace std;

int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After Swapping"<<endl;
    cout<<"A="<<x<<endl;
    cout<<"B="<<y<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter Value of A"<<endl;
    cin>>a;
    cout<<"Enter Value of B"<<endl;
    cin>>b;
    swap(a,b);
    return 0;
}
