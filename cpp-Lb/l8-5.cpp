//khuchura calculator 
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the total amount : ";
    cin >> a;
    int hundred = 0, twenty = 0, five = 0, one = 0;
    switch (a / 100)
    {
    case 0:
        break;
    default:
        hundred = a / 100;
        cout << "number of hundreds : " << hundred << endl;
        a %= 100;
    }
    switch (a / 20)
    {
    case 0:
        break;
    default:
        twenty = a / 20;
        cout << "number of twenty : " << twenty << endl;
        a %= 20;
    }
    switch (a / 5)
    {
    case 0:
        break;
    default:
        five = a / 5;
        cout << "number of fives : " << five << endl;
        a %= 5;
    }
    switch (a / 1)
    {
    case 0:
        break;
    default:
        one = a / 1;
        cout << "number of ones : " << one << endl;
    }
    return 0;
}