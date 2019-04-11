/*
    TABLE OF ANY NUMBER USING FUNCTION AND FOR LOOP
    ***********************************************************
    @author : Akash Prasher ~~ https://github.com/akashprasher/
    This Code is written in CodeBlocks.
*/

#include<iostream> //header file
using namespace std;

//  function for generating table 
int table(int a,int b)
{
    cout<<"\nTable of "<<a<<" upto "<<b<<"\n"<<endl;
//  for-loop for printing table up-to the number user wants
    for(int i=1;i<=b;i++)
    {
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
}

int main()
{
   int num,upto; //declaring variables integer type
   cout<<"Enter the Number for which you want table"<<endl;
   cin>>num; //getting number
   cout<<"Up to which number you want this table to be"<<endl;
   cin>>upto; //getting the limitation
// calling function and passing arguments
   table(num,upto);
   return 0;
}
