#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double b, dou;
    char c[1000]; 
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &a);
    scanf("%lf", &b);
    scanf(" %[^\n]", &c);
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + a);
    
    dou = b + d;
    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n", dou);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s", s, c);
    return 0;
