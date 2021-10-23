#include <stdio.h>

int main()
{
    float input = 0;
    const float CAL = 2.54;
    printf("Wpisz liczbe cali: ");
    scanf("%f", &input);
    printf("%.2f cali to %.2f cm", input, (CAL*input));

    return 0;
}
