#include <stdio.h>
int factorial(int num) {
    int fact = 1;  
    int i = 1;    
    while (i <= num) {
        fact = fact * i; 
        i++;             
    }
    return fact;  
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
