#include <iostream>
#include<iomanip>
#include<fstream>
#include <stdint.h>
#include <string>
#include <cmath>
using namespace std;

int is_identity(int array[10][10])
{
    int flag = 0, i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
        {
            if ((array[i][j] != 1) && (array[j][i] != 0))
            {
                flag = 1;
                break;
            }
        }
    if (flag == 0)
        return 1;
    else
        return 0;
}

