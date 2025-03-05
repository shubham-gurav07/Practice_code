#include<stdio.h>
void sorting(int *a,int ele);

int main()
{
    int n;
    printf("Enter the number..\n");
    scanf("%d",&n);
    int a[n],i,j,num;
    printf("Enter the array elements\n");
    for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);
    printf("Enter the number which you want to insert in an array list..\n");
    scanf("%d",&num);

    sorting(a,n-1);
    for(i=0;i<n;i++)
    {
        if(num<a[i])
        {
            break;
        }
    }
    for(j=n;j>=i;j--)
    {
        a[j]=a[j-1];
    }
    for(j=0;j<n;j++)
    {
        if(j==i)
        a[j]=num;
    }
    printf("After printing the data\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}

void sorting(int *a,int ele)
{
    int i,j,t;
    for(i=0;i<ele;i++)
    {
        for(j=0;j<ele-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}