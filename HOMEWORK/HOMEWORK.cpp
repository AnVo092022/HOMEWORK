#include <stdio.h>
// convert "do" to "do...while"
int main()
{
    int n;
    printf("Input n: ");
    scanf_s("%d", &n);
    int i = 0;
    int sum = 0;
    do
    {
        sum += i++;
    } 
    while (i <= n);
    printf("1 + 2 + ... + %d = %d\n", n, sum);
    return 0;
}
