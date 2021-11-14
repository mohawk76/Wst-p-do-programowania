#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int a = INT_MAX+1;
    float b = FLT_MAX + 1;
    float c = FLT_MIN/10;
    printf("%d\n%f\n%f", a, b, c);
    return 0;
}
