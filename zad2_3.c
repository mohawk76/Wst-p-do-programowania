#include <stdio.h>

int main()
{
    const int DAYS_IN_YEAR = 365;
    int age = 0;
    printf("Podaj swoj wiek: ");
    scanf("%d", &age);
    printf("Czyli twoj wiek w dniach to %d dni!", (age*DAYS_IN_YEAR));
    return 0;
}
