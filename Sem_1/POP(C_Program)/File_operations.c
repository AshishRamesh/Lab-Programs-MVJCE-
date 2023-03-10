//Code Has errors
#include<stdio.h>
#include<stdlib.h>
int main() 
{
    FILE *fptrl, *fptr2;
    char filename[100], c; 
    printf("Enter filename to open");
    scanf("%s", filename); 
    fptrl= fopen(filename, "r"); 
    if(fptrl == NULL)
    {
        printf("Cannot open file");
        exit (0);
    }
    
    printf("Enter filename to open"); 
    scanf("%s", filename);
    fptr2 = fopen (filename, "w");
    if (fptr2== NULL) 
    {
        printf("Cannet open file");
        exit(0);
    }
    
    c=fgetc(fptr1); 
    while (c!=EOF)
    {
        fputc (c, fptr2); 
        c = fgetc (fptr1); 
        printf(" Content copied ");
        fclose (fptr1);
        fclose (fptr2); 
    }
    return 0; 
}
