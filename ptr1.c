#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,num;
    printf("Enter the number\n");
    scanf("%d",&num);
    p=(int *)malloc(sizeof(int)*num);

    printf("Enter the an Array element\n");
    for(int i=0;i<num;i++)
    scanf("%d",&p[i]);

    printf("Printing the data\n");
    for(int i=0;i<num;i++)
    printf("%d ",p[i]);
    printf("\n");

    free(p);
    p=0;
    if(p==0){
        printf("de-allocation of memory successfully\n");
        return 0;
    }
}