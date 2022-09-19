#include <stdio.h>

int main()
{
    int i, n;
    printf("Input n: ");
    scanf_s("%d", &n);
    int sum = 1;
 /*   for (i = 1; i <= n; i++) 
    {
        sum *= i;
    }*/
    if (n == 0)
        printf("0! = 1\n");
    else (n > 0);
        for (i = 1; i <= n; i++)
        {
            sum *= i;
        }
    printf("1 * 2 * ... * %d = %d\n", n, sum);
    printf("Done\n");
    return 0;
}
