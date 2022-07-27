#include<iostream>
int array_sum(int array[], int n){
int total = 0;
if (n < 1){
    return 0 ;
}

for (int i = 0; i < n; i++){
     total += array[i]; 
}
return total;
}

int main() {
int test_array[4] = {3,5,6,7};
std::cout << array_sum(test_array, 4) << std::endl;
    return 0;
}
