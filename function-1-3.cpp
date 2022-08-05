#include <iostream>
#include<iomanip>
#include<fstream>
#include <stdint.h>
#include <string>
#include <cmath>
using namespace std;

void count_digits(int array[4][4])
{
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j] == 0)
                zero++;
            if (array[i][j] == 1)
                one++;
            if (array[i][j] == 2)
                two++;
            if (array[i][j] == 3)
                three++;
            if (array[i][j] == 4)
                four++;
            if (array[i][j] == 5)
                five++;
            if (array[i][j] == 6)
                six++;
            if (array[i][j] == 7)
                seven++;
            if (array[i][j] == 8)
                eight++;
            if (array[i][j] == 9)
                nine++;
        }
    }

    cout << "0:" << zero << ";" << "1:" << one << ";" << "2:" << two << ";" << "3:" << three << ";" << "4:" << four << ";" << "5:" << five << ";" "6:" << six << ";" << "7:" << seven << ";"
        << "8:" << eight << ";" << "9:" << nine << ";";

}

