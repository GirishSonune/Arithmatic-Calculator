#include<stdio.h>
void main()
{
    float x,y,z;
    int choice;
    x=0;y=0;z=0;choice=0;
    printf("\n Welcome to a program to build Calculator");
    printf("\n Enter operands:=\n ");
    scanf("%f%f",&x,&y);
    printf("\n Enter operation as per ther number \n 1 Addition \n 2 Subtraction \n 3 Mulitiplication \n 4 Division");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        z=x+y;
        printf("\n Addition is %f",z);
        break;
        case 2:
        z=x-y;
        printf("\n Subtraction is %f",z);
        break;
        case 3:
        z=x*y;
        printf("\n Muitiplication is %f",z);
        break;
        case 4:
        if(y==0)
        {
            printf("\n Maths Error \n Enter vailid Number");
        }
        else
        {
            z=x/y;
            printf("\n Division is %f",z);
        }
        break;
        default:
            printf("\n Improper choice \n Retry"); 
        break;
    }
}