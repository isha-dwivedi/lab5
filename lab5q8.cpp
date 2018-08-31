//program to reverse any no.
//library
#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"enter the 3 digit no. to be reversed";
cin>>a;
b=a/100;
d=a%10;
c=
cout<<"before swaping , thr digits of the no. are"<<endl;
cout<<"1st digit:"<< b<<endl<< "2nd digit:"<< c<<endl<<"3rd digit:"<< d<<endl;
int temp;
temp=b;
b=d;
d=temp;
cout<<"after swapping"<<endl;
cout<<"1st digit:"<< b<<endl<< "2nd digit:"<< c<<endl<<"3rd digit:"<< d<<endl;
}


//declare vthe variables
