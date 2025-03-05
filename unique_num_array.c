#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number How many array elements you want..\n");
    scanf("%d", &n);
    int i, j, ele, c = 0;
    int a[n];
    ele = sizeof(a) / sizeof(a[0]);

    printf("Enter the array elements\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 0; j < n ; j++)
        {
            if (i != j)
            {
                if (a[i] == a[j])
                {
                    c++;
                }
            }
        }
        if (c == 0)
        {
            printf("%d ", a[i]); 
        }
    }
}