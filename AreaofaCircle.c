#include <stdio.h>
 
int main() {
 
  const double pi = 3.14159;
  double A, R;
  
  scanf("%lf\n", &R);
  
  A = 3.14159 * R * R;
  
  printf("A=%.4lf\n", A);
  
    return 0;
}
