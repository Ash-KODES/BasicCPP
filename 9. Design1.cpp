/*
    Design Using FOR-LOOP
    ---------------------------------------------------
    *
    **
    ***
    ****
    *****
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
}
int main()
{
    int x;
    cout<<"Enter How Many Rows You Want !!"<<endl;
    cin>>x;
    cout<<"\n";
    design(x);
}
