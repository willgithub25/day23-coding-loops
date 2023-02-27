#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    sum = number;
    while (sum >= 10) {

        int temp = sum;
        sum = 0;
        while (temp != 0) {
            digit = temp % 10;
            sum =sum+ digit;
            temp = temp/10;
        }
    }

    printf("Last sum of digits=  %d\n", sum);

    return 0;
}
