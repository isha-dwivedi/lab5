//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
int a,b,c;
//ask the user to enter values
cout<<"enter the values of three numbers to be compared";
cin>>a>>b>>c;
//compare the values
if(a>b && a>c)
 cout<<"a is greatest";
else if(b>a && b>>c)
cout<<"b is greatest";
else 
cout<<"c is greatest"<<endl;
return 0;
}
