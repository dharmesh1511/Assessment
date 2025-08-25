#include<stdio.h>
void main()
{
    int i;
    float a,b,Addition,Substraction,Multiplication,Division;
    while(1)
    {
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
        
    printf("\nEnter your choice::");
    scanf("%d",&i);
    
    if(i==5)
    {
        printf("Exits the program");
        break;
    }

    if(i<1 || i>5)
    {
        printf("Invalid choice!! Please try agin.\n");
        continue;
    }
        printf("Enter first number::");
        scanf("%f",&a);
        printf("Enter second number::");
        scanf("%f",&b);
        
    switch (i)
    {
    case 1:
        Addition=a+b;
        printf("Addition=%.2f\n",Addition);
        break;
    case 2:
        Substraction=a-b;
        printf("Substration=%.2f\n",Substraction);
        break;
    case 3:
        Multiplication=a*b;
        printf("Multiplication=%.2f\n",Multiplication);
        break;
    case 4:
        Division=a/b;
        printf("Division=%.2f\n",Division);
        break;
    }
}
}
