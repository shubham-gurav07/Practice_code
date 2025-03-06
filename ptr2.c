#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p,*q,ch;
    int num;
    printf("Enter the character..\n");
    scanf("%c",&ch);
    if(ch>='a' && ch <= 'z')
    {
        num='z'-ch;
    }
    else if(ch>='A' && ch <='Z')
    {
        num='Z'-ch;
    }
    else
    {
        printf("Enter the valid alphabet charecter..\n");
        return 0;
    }
    printf("num= %d\n",num);
    p=(char *)malloc(sizeof(char )*num);
    q=p;
    for(int i=0;i<=num;i++)
    {
        *p=ch+i;
        p++;
    }
    printf("Printing the data\n");
    for(int i=0;i<=num;i++)
    printf("%c ",*q++);
    printf("\n");
    
    //de-allocation of memory
    free(p);
}