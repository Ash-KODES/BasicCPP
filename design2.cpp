/*
    Design Using FOR-LOOP
    ---------------------------------------------------
    *
    **
    ***
    ****
    *****
    *****
    ****
    ***
    **
    *
    ---------------------------------------------------
    @author : Akash Prasher ~~ https://github.com/akashprasher/
    This Code is written in CodeBlocks.
*/

#include<iostream>
using namespace std;

int design(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
        {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int x,l;
    cout<<"Enter How Many Rows You Want !!"<<endl;
    cin>>x;
    l=x/2;
    x=x-l;
    cout<<"\n";
    design(x);
}

