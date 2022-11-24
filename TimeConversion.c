#include <stdio.h>
 
int main() {
 
    int a, b, c, N, temp ;
    
    scanf("%d\n", &N);
    
    a = N / 3600;
    temp = N % 3600;
    b = temp / 60;
    temp = temp % 60;
    c = temp;
    printf("%d:%d:%d\n", a, b, c);
    
 
    return 0;
}
