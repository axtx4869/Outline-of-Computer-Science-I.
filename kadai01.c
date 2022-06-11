#include <stdio.h>


int main(){

int i,j,k;
i = 100;
j = -200;

printf("iの値は%dです。\n", i);
printf("jの値は%dです。\n", j);
k = i;
i = j;
j = k;

printf("今度のiの値は%dです。\n", i);
printf("今度のjの値は%dです。\n", j);

return 0;
}
