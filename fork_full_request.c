#include <stdio.h>

int main()
{
  int i;
  printf*("구구단 출력\n");
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      printf("%dx%d=%d \n", i, j, i * j);
    }
  }
  
  return 0;
}
