#include <stdio.h>
 
int main() {
 
    double A, B, C, triangle, circle, trapezium, square, rectangle, pi = 3.14159;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    //a
    triangle = 0.5 * A * C;
    printf("TRIANGULO: %.3lf\n", triangle);
    
     //b
    circle = pi * C *C;
    printf("CIRCULO: %.3lf\n", circle);
    
      //c
    trapezium = 0.5 * (A + B) * C;
    printf("TRAPEZIO: %.3lf\n", trapezium);
    
      //d
    square = B * B;
    printf("QUADRADO: %.3lf\n", square);
    
    //e
    rectangle = A * B;
    printf("RETANGULO: %.3lf\n", rectangle);
    
    
    
    return 0;
}
