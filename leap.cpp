#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter a number to check if it is a leap year or not"<<endl;
cin>>a;
if(a%4==0 or a%400==0)
{
    cout<<"The number is a leap year"<<endl;
    
    }
else
{
     cout<<"The number is not a leap year"<<endl;
     
     }
 return 0;
 
 }
