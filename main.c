#include <stdio.h>

int main() {
    float fahrenheit;
    float celsius; 

    printf("Write the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
    printf("The temperature in Celsius is: %.2f\n", celsius);
    return 0;
}