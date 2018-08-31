//C++ program to find power of any number using for loop.
//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
int no, exp, result=1;
cout<<"enter the no. and its exponent";
cin>> no>>exp;
for(exp; exp>0; exp--)
 result*=no;
cout<<"the power of the no. is"<<result;

}
