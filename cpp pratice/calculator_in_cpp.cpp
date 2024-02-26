#include<iostream>
#include<math.h>
using namespace std;
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
int main()
{
    float result,d;
    int n;
    char operater;
    cout<< "enter number of input: ";
    cin>>n;
    cout<<"----------------------------------------\n";
    cout<<"---------------CALCULATOR---------------\n";
    cout<<"----------------------------------------\n";
    cout<<"--enter 1st number: ";
    cin>>result;
    for(int i=2;i<=n;i++)
    {
        cout<<"--enter any operation:+,-,*,/: ";
        cin>>operater;
        cout<<"--enter "<<i<<"nd number: ";
        cin>>d;
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
            cout<<"--error:invalid operation \n";
            break;
        }
    }
    cout<<"--RESULT="<<result<<" \n";
    cout<<"----------------------------------------\n";
    cout<<"----------------THANK YOU---------------\n";
    cout<<"----------------------------------------\n";
    return 0;
}
