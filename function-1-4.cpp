#include <iostream>

using namespace std;
void print_scaled(int array[3][3],int scale)
{
    for(int i=0;i<3;i++) { //loop to rows 
        for(int j=0;j<3;j++){ //loop to columns 
        if (j != 0){
            cout << " ";
        }
            cout<<array[i][j]*scale;
        }
        cout<<"\n"; //print new line 
    }
}

