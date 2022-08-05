#include <iostream>
#include "function-2-3.cpp"
using namespace std;

extern int sum_array_elements(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main()
{
int length;
cout<<"Enter length : ";
cin>>length;

int a[length];
if(length>1)
{
cout<<"Enter "<<length<<" elements : ";
for(int i=0;i<length;i++)
cin>>a[i];
}
cout<<sum_if_palindrome(a,length);
return 0;
}