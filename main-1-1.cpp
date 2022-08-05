
#include<iostream>

#include<stdlib.h>

//include the file in which function is written



//Declare the function prototype.

extern int sum_diagonal(int array[4][4]);

int main(int argc, char **argv)

{

// Pass the test array

int test_array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

// Print the sum.

std::cout << sum_diagonal(test_array) << std::endl;

//return

return 0;

}