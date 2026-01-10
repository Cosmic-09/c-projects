#include<stdio.h>

int calculator()
{
    int cal;
    int a,b;

    printf("what operation do you wannna do(sum = 1,sup = 2,mul = 3, dv = 4): ");
    scanf("%d",&cal);

    if (cal == 1) //sum
    {
    printf("enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d",a+b); 
    }

    else if (cal == 2) //sup
    {
    printf("enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d",a-b);
    }

    else if (cal == 3) //mul
    {
    printf("enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d",a*b);
    }

    else if (cal == 4)//dv
    {
    printf("enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d",a/b);
    }

    else
    {
        printf("invalid");
    }
    
    
    
}

int main()
{
    calculator();
}