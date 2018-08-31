//program to reverse any no.
//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
int a,b,c,d;
//ask the user to enter no.
cout<<"enter the 3 digit no. to be reversed";
cin>>a;
//display each digit of the no.
b=a/100;
d=a%10;
c=((a%100)-d)/10;
cout<<"before swaping , thr digits of the no. are"<<endl;
cout<<"1st digit:"<< b<<endl<< "2nd digit:"<< c<<endl<<"3rd digit:"<< d<<endl;
//swap the 1st and last digit of the no.
int temp;
temp=b;
b=d;
d=temp;
//display the swapped no.
cout<<"after swapping"<<endl;
cout<<"1st digit:"<< b<<endl<< "2nd digit:"<< c<<endl<<"3rd digit:"<< d<<endl;
}



