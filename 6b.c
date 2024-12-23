#include<stdio.h>
int fib(int n) ;
int fib(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fib(n - 1) + fib(n - 2); 
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Please enter a positive number.\n");
        return 1; 
    }
    printf("The Fibonacci series up to %d terms is: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}
