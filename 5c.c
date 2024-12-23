#include <stdio.h>
int fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n == 1) {
        return a;  
    }
    if (n == 2) {
        return b;  
    }
    for (int i = 3; i <= n; i++) {
        c = a + b;  
        a = b;      
        b = c;      
    }
    return c;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("%dth Fibonacci term is %d\n", n, fibonacci(n));
    }
    return 0;
}
