#include<stdio.h>
struct student input(void);
void display(struct student);
struct student
{
   int roll,age;
   char name[20];
};
struct student input()
{
    struct student s1;
   printf("Enter your roll number, name and age : ");
   scanf("%d",&s1.roll);
   fflush(stdin);
   gets(s1.name);
   scanf("%d",&s1.age);
   return(s1);
}
void display(struct student s1)
{
 printf("\nstudent details are : \n%d %s %d",s1.roll,s1.name,s1.age);
}
main()
{
    struct student s1;


    s1=input();
    display(s1);
    getch();
}
