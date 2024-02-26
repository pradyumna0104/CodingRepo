#include <iostream>
using namespace std;
class arithmatic
{
    public:
    int num1;
    int num2;
};
class pplus : public arithmatic
{
protected:
    int sum;
    void getdata1()
    {
        cout << "\n enter two number for addition";
        cin >> num1 >> num2;
        sum = num1 + num2;
    }
};
class mminus
{
protected:
    int n1, n2;
    int diff;

public:
    void getdata2()
    {
        cout << "\n enter two number for substration";
        cin >> n1 >> n2;
        diff = n1 - n2;
    }
};
class result : public pplus, public mminus 
{
public:
    void getdata3()
    {
        cout << "the addition of" << num1 << "and" << num2 << "is" << sum;
        cout << "the substration of " << n2 << "from" << n1 << "is" << diff;
    }
};
int main()
{
    result p;

    p.getdata3();
    return 0;
}