#include<stdio.h>

void main()
{
    int n, org, rev=0, rem;
    
    printf("Enter number: ");
    scanf("%d",&n);
    org=n;
    
    while(n!=0)
    {
        rem = n%10;
        rev=rev*10+rem; 
        n=n/10;
    }
    
    printf("%d",rev);

    if (org-rev)
    {
    printf("\nPalindrome");
    }
    
    else
    {
    printf("\nNot a Palindrome");
    }
}
