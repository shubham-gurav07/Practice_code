#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *s,temp;
    s=(char *)malloc(sizeof(char )*50);
    printf("Enter the string..\n");
    scanf("%[^\n]",s);

    int i,j,l,k,m;
    for(l=0;s[l];l++);  //dummy for loop for to calculate the sizeof string
    for(i=0,j=0;i<=l;i++,j++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            for(k=i-j,m=i-1;k<m;k++,m--)
            {
                temp=s[k];
                s[k]=s[m];
                s[m]=temp;
            }
            j=-1;
        }
    }
    printf("After reversing the perticuler word in string is : \n");
    printf("%s\n",s);

    //de-allocating the DMA
    free(s);
}