#include <iostream>
#include <string>
#include <ostream>
using namespace std;

void print_binary_str(std::string decimal_number)
{
int result = 0, j = 1;
int n = stoi(decimal_number);
int temp = n;
while(temp){
    result = result + j * (temp %2);
    temp = temp / 2;
    j = j * 10;
}
  printf("%d\n", result);
}