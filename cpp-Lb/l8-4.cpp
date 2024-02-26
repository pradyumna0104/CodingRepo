#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;
    char ch;
    cout << "enter the opaeation(+,-,/,*,%): ";
    cin >> ch;
    //swith(expression : 2 * a) also possible
    switch (ch)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "enter a valid operation. " << endl;
    }
    return 0;
}