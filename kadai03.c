#include <stdio.h>

int main(){

double x1,x2,y1,y2;
double slope, y_intercept;

printf("x1 = ");
scanf("%lf", &x1);

printf("y1 = ");
scanf("%lf", &y1);

printf("x2 = ");
scanf("%lf", &x2);

printf("y2 = ");
scanf("%lf", &y2);

slope = (y2 - y1)/(x2 - x1);
y_intercept = y1 - x1*(y2 - y1)/(x2 - x1);

printf("傾き = %lf, y-切片 = %lf\n",slope, y_intercept);

return 0;
}
