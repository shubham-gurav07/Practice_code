#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *s,temp;
    s=(char *)malloc(sizeof(char )*50);
    printf("Enter the string..\n");
    scanf("%[^\n]",s);

    int i,j,l;
    for(l=0;s[l];l++);  //dummy for loop for to calculate the sizeof string
    for(i=0,j=l-1;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("After reversing the string is : \n");
    printf("%s\n",s);

}