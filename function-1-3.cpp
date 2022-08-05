#include <iostream>
#include <ostream>
using namespace std;

void count_digits(int array[4][4]) {
  int num_0 = 0;
  int num_1 = 0;
  int num_2 = 0;
  int num_3 = 0;
  int num_4 = 0;
  int num_5 = 0;
  int num_6 = 0;
  int num_7 = 0;
  int num_8 = 0;
  int num_9 = 0;
  

  for (int r = 0; r < 4; r++) {
    for (int c = 0; c < 4; c++) {
      switch (array[r][c]) {
        case 0:
          num_0++;
          break;
        case 1:
          num_1++;
          break;
        case 2:
          num_2++;
          break;
        case 3:
          num_3++;
          break;
        case 4:
          num_4++;
          break;
        case 5:
          num_5++;
          break;
        case 6:
          num_6++;
        case 7:
          num_7++;
          break;
        case 8:
          num_8++;
          break;
        case 9:
          num_9++;
          break;
          break;
        default:
          break;
      }
    }
  }
  printf("0:%d;1:%d;2:%d;3:%d;4:%d;5:%d;6:%d;7:%d;8:%d;9:%d;\n", num_0, num_1,
         num_2, num_3, num_4, num_5, num_6, num_7, num_8, num_9);
}

