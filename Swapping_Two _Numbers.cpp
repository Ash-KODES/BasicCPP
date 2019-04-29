#include<iostream>
using namespace std;

int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After Swaping"<<endl;
    cout<<"A="<<x<<endl;
    cout<<"B="<<y<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter Value of A"<<endl;
    cin>>a;
    cout<<"Enter Value os B"<<endl;
    cin>>b;
    swap(a,b);
    return 0;
}
