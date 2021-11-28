#include <stdio.h>

int main()
{
    float x;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &x);
    printf("Podano %.1f lub %.1e\n", x, x);
    printf("Podano %+.3f lub %.3E\n", x, x);
    return 0;
}