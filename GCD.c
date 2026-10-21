#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while(b != 0){
         temp = b;
         b = a % b;
         a = temp;
    }

    return a;
}

int main()
{
    int A, B;

    printf("Enter 2 integer: ");
    scanf("%d %d", &A, &B);

    printf("%d\n", gcd(A,B));

    return 0;
}
