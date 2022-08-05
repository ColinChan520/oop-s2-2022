#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int array_max(int integers[], int length)
{
int max=0;
for(int i=0; i<length; i++)
{
if(max < integers[i])
{
max = integers[i];
}
}
cout << max << " + ";
return max;
}


int array_min(int integers[], int length)
{
int min =integers[0];
for(int i=0; i<length; i++)
{
if(min > integers[i])
{
min = integers[i];
}
}
cout << min << " = ";
return min;
}

int sum_min_max(int integers[], int length)
{
return (array_max(integers, length) + array_min(integers, length));
}