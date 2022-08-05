#include <iostream>
#include<iomanip>
#include<fstream>
#include <stdint.h>
#include <string>
#include <cmath>
#include "function-1-2.cpp"
using namespace std;

extern int is_identity(int array[10][10]);

int main()
{
    int i, j, array[10][10], identityFlag;
    
    cout << "Enter array elements : ";
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            cin >> array[i][j];

    identityFlag = is_identity(array);
    
    if (identityFlag == 1)
    {
        cout << "Identity Matrix";
    }
    else
    {
        cout << "Not an Identity Matrix";
    }
    return 0;
}