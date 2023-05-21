#include <stdio.h> 
#include <math.h>

int main()

{
    float a,b,c,dis,r1,r2, realpart, imgpart; 
    
    printf("Enter the co-efficients : \n"); 
    scanf("%f %f %f",&a, &b, &c); 
    dis = (b*b)-4*a*c;

    if (dis>0)
    {
        printf("The roots are real and distinct \n"); 
        r1 = (-b+sqrt(dis))/(2*a);
        r2 = (-b-sqrt(dis))/(2*a);
        printf("The roots are r1 = %f, r2 = %f \n",r1,r2);
    }
    
    else if (dis==0)
    {
        r1=r2=-b/(2*a);
        printf("The roots are equal \n");
    }

    else
    { 
        realpart = -b/(2*a); 
        imgpart = sqrt(-dis)/(2*a); 
        printf ("The roots are imaginary \n");
        return 0;
    }

}
