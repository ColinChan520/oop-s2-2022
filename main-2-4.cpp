#include <iostream>
#include <string>
#include <stdlib.h>
#include "function-2-4.cpp"
using namespace std;

extern int array_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main(){
    cout << "Sum of max and min : " << sum_min_max(6, 6);
    cout << endl;
}