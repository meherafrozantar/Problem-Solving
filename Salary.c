#include <stdio.h>

int main() {

    int n, h;
    float s, salary;

    scanf("%d\n%d\n%f", &n, &h, &s);

    salary = h * s;

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
