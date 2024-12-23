#include <stdio.h>
#include <math.h>
int countAndSumDigits(int num1) {
    static int count = 0; 
    if (num1 == 0) {
        printf("Count of digits: %d\n", count);
        return 0;
    }
    count++; 
    return (num1 % 10) + countAndSumDigits(num1 / 10);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Count of digits: 1\n");
        printf("Sum of digits: 0\n");
    } else {
        int sum = countAndSumDigits(num); 
        printf("Sum of digits: %d\n", sum);
    }
    return 0;
}
