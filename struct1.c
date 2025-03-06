#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student v[5];
    int i,ele;
    ele=sizeof(v)/sizeof(v[0]);
    
    //printf("Enter the student details like R_nu, name & marks\n");
    for(i=0;i<5;i++){
        printf("Enter the %d student details like R_nu, name & marks\n",i+1);
        scanf("%d%s%f",&v[i].rollno,v[i].name,&v[i].marks);

    }
    printf("Printing the student details..\n");
    for(i=0;i<ele;i++)
    printf("%d\t%s\t%.2f\n",v[i].rollno,v[i].name,v[i].marks);
    printf("printing the data of student is Done successfully..\n");
}