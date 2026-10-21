
#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
