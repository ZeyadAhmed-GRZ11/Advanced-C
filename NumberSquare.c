int square(int n){
   return n * n;
}

int main(){
    int num;

    printf("Enter numberfor Square: ");
    scanf("%d", &num);

    printf("%d\n", square(num));

    return 0;
    
}