#include <stdio.h>
#include <ctype.h>

char toUpperCase(char ch){
    return toupper((unsigned char) ch);
}

int main(){
    char letter;

    printf("enter lowercase words: ");
    scanf("%ch", &letter);

    printf("%c\n", toUpperCase(letter));

    return 0;
}