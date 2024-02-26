#include<stdio.h>
float add(float a,float b){
    return a+b;
}
float sub(float a,float b){
    return a-b;
}
float mul(float a,float b){
    return a*b;
}
float div(float a,float b){
    return a/b;
}
int main(){
    float c,d;
    char operater;
printf("enter 1st number:");
scanf("%2f",&c);
printf("enter any operation:+,-,*,/: ");
scanf("%c",&operater);
printf("enter 2nd number:");
scanf("%2f",&d);
float sto; 
switch(operater){
case '+':
sto = add(c,d);
printf("ans =%2f\n",sto);
break;
case '-':
sto = sub(c,d);
printf("ans =%2f\n",sto);
break;
case '*':
sto = mul(c,d);
printf("ans =%2f\n",sto);
break;
case '/':
sto = div(c,d);
printf("ans =%2f\n",sto);
break;
default:
printf("error:invalid operation \n");
break;
}
    return 0;
}
