//program to print all alphabets from a to z
//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
char alph='a';
//type casting
int i=int(alph);
while(i>=97 && i<=122)
{
//type casting
cout<<char(i)<<endl;
i++;
}
}

