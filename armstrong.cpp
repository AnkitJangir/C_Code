#include <stdio.h>
#include <math.h>
int main()
{
    int low, high, i, min, max, remainder, n = 0, result = 0;
    scanf("%d %d", &low, &high);
    for(i = low + 1; i < high; ++i)
    {
        max = i;
        min = i;
        while (min != 0)
        {
            min /= 10;
            ++n;
        }
    while (max != 0)
        {
            remainder = max % 10;
            result += pow(remainder, n);
            max /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
    }
    return 0;
}
