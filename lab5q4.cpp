//library
#include<iostream>
using namespace std;
int main()
{
//declare the character
char a;
//ask the user to enter the year
cout<<"enter any character";
cin>>a;
//compare if the character is alphabet or not
int b=int(a);
if((b>=65 && b<=90) || (b>=97 && b<=122))
cout<<"the character is alphabet";
else
cout<<"the character is not a variable";
}
 
