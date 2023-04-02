#include<stdio.h>
#include<string.h>
void compare(char[],char[]);
void concat(char[],char[]);
void length(char[]);
void main()
{
  int n;
  char str1[10],str2[10];
  printf("press 1-compare 2-concatenate 3-length of string");
  printf("\n enter your choice=");
  scanf("%d",&n);
  switch(n)
  {
  case 1:printf("enter first string=");
	 scanf("%s",str1);
	 printf("enter second string=");
	 scanf("%s",str2);
	 compare(str1,str2);
	 break;
 case 2:printf("enter first string=");
	 scanf("%s",str1);
	 printf("enter second string=");
	 scanf("%s",str2);
	 concat(str1,str2);
	 break;

 case 3:printf("enter string=");
	 scanf("%s",str1);
	 length(str1);
	 break;

 default: printf("wrong choice");
         break;
 }
 }
void compare(char str1[],char str2[])
{
    int i;
    i=strcmp(str1,str2);
    if(i==0)
    printf("\nstrings are equal ");
   else
   printf("\n string are not equal");
}
void concat(char str1[],char str2[])
{
    strcat(str1,str2);
    printf("concatenate string=%s",str1);
}
void length(char str1[])
{
    int l;
    l=strlen(str1);
   printf("the length of string=%d",l);
 }

