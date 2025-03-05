// Removing Dupliacate ELements in an Array

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number how many element you want..\n");
    scanf("%d", &n);
    int a[n], i, ele, j, k, t;
    ele = sizeof(a) / sizeof(a[0]);

    printf("Scanning the data..\n");
    for (i = 0; i < ele; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < ele; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < ele; k++)
                {
                    t = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = t;
                }
                ele--;
                i--;
            }
        }
    }
    printf("Printing the data..\n");
    for (i = 0; i < ele; i++)
        printf("%d ", a[i]);
    printf("\n");
}