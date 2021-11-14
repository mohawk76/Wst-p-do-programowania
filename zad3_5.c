#include <stdio.h>
#include <math.h>

#define SEC_IN_YEAR 3.156 * pow(10,7) 

int main()  
{
    int age;
    float result;
    printf("Podaj swoj wiek w latach: ");
    scanf("%d", &age);
    result = SEC_IN_YEAR * age;
    printf("Twoj wiek w sekundach to %.0f", result);
    return 0;
}
