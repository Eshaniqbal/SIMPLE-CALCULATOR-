#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;
    float a,b;
    float res;              
printf("Enter the numbers A & B :");
scanf("%f%f",&a,&b);
printf("Enter the operation\n");
printf("1:ADDTION\n 2:SUBTRACTION\n 3:MULTIPLICATION\n 4:DIVISION\n");
scanf("%d",&ch);
switch(ch)
{
    case 1: res=a+b;
    break;
    case 2: res=a-b;
    break;
    case 3: res=a*b;
    break;
    case 4: res=a/b;
    break;
    default:printf("operation was unsuccesfull");
}
printf("Result= %f",res);
return 0;

}