#include<stdio.h>
struct students
{
    char name[50];
    int m1,m2,m3;
    float avg,total;
};
void main()
{
    int n,i;
    struct students s[20];
    printf("Enter the number of students :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("Enter the name :\n");
       scanf("%s",&s[i].name);
       printf("Enter the marks :\n");
       scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
       s[i].total = (s[i].m1+s[i].m2+s[i].m3);
       s[i].avg = s[i].total/3;
    }
    
    for(i=0;i<n;i++)
    {
       printf("\nName : %s",s[i].name);
       printf("\nMarks : \t%d\t%d\t%d",s[i].m1,s[i].m2,s[i].m3);
       printf("\nTotal : %f",s[i].total);
       printf("\nAverage : %f",s[i].avg);
       if(s[i].avg>35)
       {
           printf("\nStudent with above average score is : %s",s[i].name);
       }
       else
       {
           printf("\nStudent with below average score is : %s",s[i].name);
       }
    }
    
}
