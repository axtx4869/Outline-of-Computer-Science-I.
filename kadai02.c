#include <stdio.h>
int main(){
  int i, j;

  i = 0;
  j = 10;

  while(i < 10){
    if(j > 5){
      printf("jの値は%dです。\n", j);
    }
      else{
      printf("iの値は%dです。\n", i);
    }
    i++;
    j--;
  }
  return 0;
}
