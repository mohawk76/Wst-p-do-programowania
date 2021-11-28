#include <stdio.h>

int main()
{
    float litre;
    double result;
    printf("Podaj ilosc litrow: ");
    scanf("%f", &litre);

    result = (1000 * litre) / 3.0E-23;

    printf("W podanej objetosci wody, znajduje sie %Le czasteczek.\n", result);

    return 0;
}