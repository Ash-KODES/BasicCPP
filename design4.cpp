/*
    Design Using FOR-LOOP
    ---------------------------------------------------
    1
    22
    333
    4444
    55555
    55555
    4444
    333
    22
    1
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
            cout<<i;
        }
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
        {
        for(int j=i;j>0;j--)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}
int main()
{
    int x,l;
    cout<<"Enter How Many Numbers You Want !!"<<endl;
    cin>>x;
    cout<<"\n";
    design(x);
}

