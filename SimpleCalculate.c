#include <stdio.h>

int main()
{
 int a, unit;
 double price, value;

 scanf("%d %d %lf", &a, &unit, &price);
 value = unit * price;
 
 scanf("%d %d %lf", &a, &unit, &price);
 value += unit * price;
 
 printf("VALOR A PAGAR: R$ %.2lf\n", value);

 return 0;
}
