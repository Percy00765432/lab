#include <stdio.h>
#include <math.h>
void primeFactors(int num) {

    while (num % 2 == 0) {
        printf("%d ", 2);
        num= num/2;
    }
    for (int i = 3; i <= sqrt(num); i = i+2) {
        while (num % i == 0) {
            printf("%d ", i);
            num=num/i;
        }
    }
    if (num > 2) {
        printf("%d",num);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    primeFactors(num);
  return 0;
}
