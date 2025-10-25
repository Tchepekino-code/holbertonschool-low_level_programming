#include "main.h"

void times_table(void){

  int i;
  int j;

  for (i = 0; i <= 9; i++){
    _putchar('0');
    _putchar(',');
    _putchar(' ');
    for (j = 1; j <= j*9 ; j+j){
      _putchar(j +'0');
      _putchar(',');
      _putchar(' ');
    }
  }
  



}
