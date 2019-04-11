/*
    CALCULATOR USING FUNCTIONS AND IF/ELSE (CLI)
    ***********************************************************
    @author : Akash Prasher ~~ https://github.com/akashprasher/
    This Code is written in CodeBlocks.
*/

#include <iostream>
using namespace std;

//function for addition
int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

//function for subtraction
int sub (int a, int b)
{
  int r;
  r=a-b;
  return r;
}

//function for multiplication
int multiply (int a, int b)
{
  int r;
  r=a*b;
  return r;
}

//function for division
int division (int a, int b)
{
  int r;
  r=a/b;
  return r;
}

int main ()
{
  int num1,num2,choice,res;

  //Getting input
  cout<<"Enter the First Number"<<endl;
  cin>>num1;
  cout<<"Enter the Second Number"<<endl;
  cin>>num2;
   
  //Menu with option for operations
  cout<<"\nChoose Any ONE(1-4)"<<endl;
  cout<<"1. Addition"<<endl;
  cout<<"2. Subtraction"<<endl;
  cout<<"3. Multiplication"<<endl;
  cout<<"4. Division"<<endl;
  cin>>choice;
  cout<<"\n";

/**checking the entered option using
if/else statement
*/
    
  //if addition is chosen.
  if(choice==1)
  {
      res=addition(num1,num2);
      cout<<"Addition : "<<res<<endl;
  }
    
  //if subtraction is chosen.
  else if(choice==2)
  {
      res=sub(num1,num2);
      cout<<"Subtraction : "<<res<<endl;
  }
    
  //if multiplication is chosen
  else if(choice==3)
  {
      res=multiply(num1,num2);
      cout<<"Multiplication : "<<res<<endl;
  }
    
  //if division is chosen
  else if(choice==4)
  {
      res=division(num1,num2);
      cout<<"Division : "<<res<<endl;
  }
    
  //for wrong input (i.e. except 1-4)
  else
  {
      cout<<"Error! Please Choose Right Option"<<endl;
  }
  return 0;
}
