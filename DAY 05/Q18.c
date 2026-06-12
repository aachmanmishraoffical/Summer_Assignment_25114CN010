#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0, i, fact;
    
    printf("Enter a number: ");
    n = 145;  /* Testing with 145 */
    temp = n;

    while (n) {
        i = 1;
        fact = 1;
        rem = n % 10;
        
        /* Calculate factorial of digit */
        while (i <= rem) {
            fact = fact * i;
            i++;
        }
        
        sum = sum + fact;
        n = n / 10;
    }

    if (sum == temp)
        printf("%d is a strong number<br>", temp);
    else
        printf("%d is not a strong number<br>", temp);

    return 0;
}