#include<stdio.h>
int main()
{
    int n1,n2,i,j,t;
    printf("Enter the number of an Array element1 and element2\n");
    scanf("%d%d",&n1,&n2);
    int a[n1],b[n2];
    int c[n1+n2];

    printf("Scan the data for set A array\n");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);

    printf("Scan the data for set B array\n");
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);

    //merging the two arrays
    for(i=0;i<n1;i++)
    c[i]=a[i];
    for(j=0;j<n2;j++,i++)
    c[i]=b[j];

    int n3=n1+n2;
    //buble sorting logic
    for(i=0;i<n3-1;i++)
    {
        for(j=0;j<n3-1-i;j++)
        {
            if(c[j]<c[j+1])
            {
                t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;
            }
        }
    }
    printf("Printing in desending order..\n");
    for(i=0;i<n1+n2;i++)
    printf("%d ",c[i]);
    printf("\n");
}