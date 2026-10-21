#include <stdio.h>


void BinaryReverse(int n){

    if (n == 0){
        printf("0");
        return;
    }
    while(n > 0){
        printf("%d", n % 2);
        n = n / 2;
    }

    printf("\n");

}


int main(){

    int number;

    printf("Enter number for Convert into binary: ");
    scanf("%d", &number);


    BinaryReverse(number);

    return 0;
}