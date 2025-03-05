#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of how many element you want..\n");
    scanf("%d", &n);
    int i, a[n], max, min;
    printf("Enter an array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (a[0] < a[1])
    {
        max = a[1];
        min = a[0];
    }
    else
    {
        max = a[0];
        min = a[1];
    }
    for (i = 2; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (min > a[i] && min != max)
            min = a[i];
    }
    printf("max=%d min=%d\n", max, min);
}