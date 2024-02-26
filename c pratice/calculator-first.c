#include<stdio.h>
#include<math.h>
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
int main() {
    float result,d;
    int n;
    char operater;
    printf("enter number of input: ");
    scanf("%d",&n);
    printf("----------------------------------------\n");
    printf("---------------CALCULATOR---------------\n");
    printf("----------------------------------------\n");
    printf("--enter 1st number: ");
    scanf("%f",&result);
    for(int i=2;i<=n;i++){
        printf("--enter any operation:+,-,*,/: ");
        scanf(" %c",&operater);
        printf("--enter %dnd number: ",i);
        scanf("%f",&d);
        switch(operater)
        {
            case '+':
            result = add(result,d);
            break;
            case '-':
            result = sub(result,d);
            break;
            case '*':
            result = mul(result,d);
            break;
            case '/':
            result = div(result,d);
            break;
            default:
            printf("--error:invalid operation \n");
            break;
        }
    }
    printf("--RESULT=%f \n",result);
    printf("----------------------------------------\n");
    printf("----------------THANK YOU---------------\n");
    printf("----------------------------------------\n");
    return 0;
}
