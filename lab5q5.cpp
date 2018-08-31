//count total no. of notes in a given amount
//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
int a,b,c,d,e,f,g,amount;
//ask the user to enter the amount
cout<<"enter the amount";
cin>>amount;
//cac. the no. of notes
a=amount/1000;
b=(amount%1000);
c=b/500;
d=b%500;
e=d/100;
f=d%100;
g=f/10;
//display
cout<<"the no. of 1000 notes is:"<<a<<endl;
cout<<"the no. of 500 notes is:"<<c<<endl;
cout<<"the no. 0f 100 notes is:"<<e<<endl;
cout<<"the no. 0f 10 notes is:"<<g<<endl;
}















