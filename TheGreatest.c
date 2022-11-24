#include <stdio.h>
 
int main() {
 
    int a, b, c, temp;
    
    scanf("%d %d %d", &a, &b, &c);

    temp = (a + b + abs (a - b)) / 2;
    temp = (temp + c + abs (temp - c)) / 2;

    printf("%d eh o maior\n", temp);

 
    return 0;
}
