#include<iostream>
using namespace std;
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

int main()
{
  cout<<"\nThis is NewBranch!...\n";
  int n1,n2,ans;
  int opt;
  char ch;
  do
  {
    cout<<"\nEnter first number : ";
    cin>>n1;
    cout<<"\nEnter second number: ";
    cin>>n2;
    cout<<"-----------MENU-----------\n";
    cout<<"\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \nEnter your choice: ";
    cin>>opt;
    switch(opt)
    {
    case 1: add(n1,n2);
            break;
            
    case 2: sub(n1,n2);
            break;
            
    case 3: mul(n1,n2);
            break;
            
    case 4: div(n1,n2);
            break;
            
    default: cout<<"\nInvalid Option!";
             break;
    }
    
    cout<<"\nDo you want to continue?(1/0) : ";
    cin>>ch;
  }while(ch == 'y' || ch == 'Y');
  
}

void add(int,int)
{
  cout<<"\nAddition is: "<<n1+n2;
}

void sub(int,int)
{
  cout<<"\nSubtraction is: "<<n1-n2;
}

void mul(int,int)
{
  cout<<"\nMultiplication is: "<<n1*n2;
}

void div(int,int)
{
  cout<<"\nQuotient is: "<<n1/n2;
}
