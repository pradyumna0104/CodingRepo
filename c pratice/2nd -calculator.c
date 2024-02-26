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
    float c,d;
    int n;
    char operater;
    printf("enter number of input: ");
    scanf("%d\n",&n);
    printf("enter 1st number:");
    for(int i=2;i<=n;i++){
    scanf("%2f",&c);
    printf("enter 2nd number:");
    scanf("%2f",&d);
    printf("enter any operation:+,-,*,/: ");
    scanf(" %c", &operater);

    float sto;
    switch(operater)
    {
      case '+':
      sto = add(c,d);
      break;
      case '-':
      sto = sub(c,d);
      break;
      case '*':
      sto = mul(c,d);
      break;
      case '/':
      sto = div(c,d);
      break;
      default:
      printf("error:invalid operation \n");
      break;
    }
    return 0;
}
