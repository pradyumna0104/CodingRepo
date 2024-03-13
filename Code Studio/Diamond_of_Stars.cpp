#include <bits/stdc++.h>
using namespace std;
void printPattern(int n)
{
    int mid = (n / 2) + 1;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n - i / 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j <= n - i / 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}