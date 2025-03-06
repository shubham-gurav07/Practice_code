#include<stdio.h>
#include<stdlib.h>
struct st
{
    int r_nu;
    char name[20];
    float marks;
};
int main()
{
    struct st **v;
    int n,i;
    printf("Enter the number of student\n");
    scanf("%d",&n);

    //Allocate the dynamically memory for each student
    v=malloc(sizeof(struct st *)*n);
    for(i=0;i<n;i++)
    v[i]=malloc(sizeof(struct st));

    for(i=0;i<n;i++)
    {
        printf("Enter the %d student details like R_nu, name & marks\n",i+1);
        scanf("%d%s%f",&v[i]->r_nu,v[i]->name,&v[i]->marks);
    }
    printf("Printing the student details..\n");
    for(i=0;i<n;i++)
    printf("%d\t%s\t%.2f\n",v[i]->r_nu,v[i]->name,v[i]->marks);
    printf("printing the data of student is Done successfully..\n");

    //de-allocate the dynamically allocated memory using free function
    for(i=0;i<n;i++)
    free(v[i]);
    free(v);
}