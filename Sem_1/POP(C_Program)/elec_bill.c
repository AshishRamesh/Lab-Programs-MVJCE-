#include <stdio.h>

void main()
{
    char nam[50];
    int id , units , surcharge=0 ;
    float charge , amt , total_amt ;
    
    printf("Enter the customer ID :\n");
    scanf("%d",&id);
    printf("Enter the customer name :\n");
    scanf("%s",nam);
    printf("Enter the units consumed :\n");
    scanf("%d",&units);
    
    if(units<=200)
    {
        charge = 0.80;
    }
    else if(units>200&units<=300)
    {
        charge = 0.90;
    }
    else
    {
        charge = 1.00;
    }
    amt = units*charge;
    
    if(amt>400)
    {
        surcharge = amt*15/100;
    }
    total_amt = amt+surcharge;
    printf("customer ID : %d \n",id);
    printf("customer name : %s \n",nam);
    printf("units consumed : %d \n",units);
    printf("charge per unit : %f \n",charge);
    printf("total amount : %f \n",total_amt);
    
}
