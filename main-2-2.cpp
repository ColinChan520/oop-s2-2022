#include <iostream>
#include "function-2-2.cpp"
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int arr[] = {1, 0, 1, 0, 0};
    cout << binary_to_int(arr, 5) << endl;
    return 0;
}