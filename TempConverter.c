#include <stdio.h>

float TempConverterToCelsius(float c){
      return (9.0 / 5.0) * c + 32;
}

int main(){

    float celsius;

    printf("Enter Temperature in celsius: ");
    scanf("%f", &celsius);

    printf("%.2f\n" , TempConverterToCelsius(celsius));

    return 0;

}





