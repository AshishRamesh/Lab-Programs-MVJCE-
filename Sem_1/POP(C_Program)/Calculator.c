#include <stdio.h>

int main() 
{
    int n1,n2, opt;
    float result;

    printf("Choose an operation 1. Add 2 Sub 3. Mul 4. Div 5. Mod\n"); 
    scanf("%d",&opt);
    printf("Enter first number: \n");
    scanf("%d",&n1); 
    printf("Enter second number: \n"); 
    scanf("%d",&n2);

    switch(opt)
    {
        case 1: result = n1+n2;
                printf("Result of addition: %f \n", result);
                break;
            
        case 2: result = n1-n2;
                printf("Result of subtraction: %f \n", result);
                break;

        case 3: result = n1*n2;
                printf ("Result of multiplication: % f \n", result);
                break;
                
        case 4: result = n1/n2;
                printf ("Result of division: % f \n", result);
                break;
                
        case 5: result = n1%n2;
                printf ("Result of modulus: % f \n", result);
                break;
        default: printf("Invalid Operator");
    }
}
