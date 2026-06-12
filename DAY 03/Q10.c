#include<stdio.h>
int main()
{
   int start, end, i, j, count;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i <= 1) {
            continue;
        }

        count = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}