#include<stdio.h>
int GCD(int x, int y);
int GCD(int x, int y) {
    if (y == 0) {
        return x; 
    }
    return GCD(y, x % y); 
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = GCD(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
