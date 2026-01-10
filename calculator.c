#include<stdio.h>

int add()
{
    int a,b;

    printf("enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
}

int main(){
    add();
}