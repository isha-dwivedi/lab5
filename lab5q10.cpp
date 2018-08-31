//C++ program to enter any number and print all factors of the number. 
//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
int no;
cout<<"enter the no. whose factors are to be found";
cin>>no;
for(int i=1; i<= no; i++)
{if(no%i==0)
cout<<i<<": is a factor of "<<no;
}
}
