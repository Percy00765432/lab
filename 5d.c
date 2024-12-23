#include<stdio.h>
int gcd(int a,int b);

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b; 
        a = b;         
        b = r;         
    }
    return a; 
}

void main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int result = gcd(a, b); 
    printf("The GCD of %d and %d is %d\n", a, b, result);
}
