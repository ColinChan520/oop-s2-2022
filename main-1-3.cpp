#include <iostream>
#include<iomanip>
#include<fstream>
#include <stdint.h>
#include <string>
#include <cmath>
#include "function-1-3.cpp"
using namespace std;

extern void count_digits(int array[4][4]);

int main()
{
    int i, j, a[4][4];
    
    cout << "Enter array elements : ";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            cin >> a[i][j];

    count_digits(a);
    return 0;
}