#include<stdio.h>
#include<math.h>
#define PI 3.142
 void  main()
{
         int i, degree;
         float x, sum=0,term,nume,deno;
         printf("Enter the value of degree");
         scanf("%d",&degree);
         x = degree * (PI/180);
         nume = x;
         deno = 1;
         i=2;
do
{
       term = nume/deno;
       sum=sum+term;
       nume = -nume*x*x; 
       deno = deno*i*(i+1);
        i=i+2;
} while (fabs(term) >= 0.00001);
    printf("The sine of %d is %f\n", degree, sum);
    printf("Using library function sin(x) of degree %d is %f", degree, sin(x));
}
