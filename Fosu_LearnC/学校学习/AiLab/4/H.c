#include <stdio.h>
int main()
{
    int i, a, b, c, d, e;
    for (i = 10000; i <= 99999; i++)
    {
        a = (i / 10000 % 10);
        b = (i / 1000 % 10);
        c = (i / 100 % 10);
        d = (i / 10 % 10);
        e = (i % 10);
        if (e * (a * 1000 + b * 100 + c * 10 + d) + (e + d * 10) * (a * 100 + b * 10 + c * 1) + (e + d * 10 + c * 100) * (a * 10 + b) + a * (e + d * 10 + c * 100 + b * 1000) == i)
        {
            printf("%d ", i);
        }
    }
}