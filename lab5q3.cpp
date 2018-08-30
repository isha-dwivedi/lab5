//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
int year,a;
//ask the user to enter the year
cout<<"enter the year";
cin>>year;
//check if year is leap or not
a = year%1000;
if(a%4==0)
cout<<"the year is leap year";
else
cout<<"the year is not leap year";
}

