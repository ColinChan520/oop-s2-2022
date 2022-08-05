#include <iostream>
#include <string>
#include <stdlib.h>
#include "function-2-1.cpp"
using namespace std;

extern void print_binary_str(std::string decimal_number);

int main(){
string number;
cout << "Enter positive number : " << endl;
cin >> number;
print_binary_str(number);
}