#include <iostream>
using namespace std;
template <class t>
class one
{
protected:
    t x, y;
};
template <class s>
class two : public one<s>
{
    s z;
public:
    two(s a, s b, s c)
    {
        // one<s>::x = a;
        this->x =a;
        // one<s>::y = b;
        this->y =b;
        z = c;
    }
    void show()
    {
        cout << "\nx = " <</* ons<s>::x */ this->x << "\ny = " << /* ons<s>::y */this->y << "\nz = " << z;
    }
};
int main()
{
    two<double> obj(1.0, 2.4, 3.6);
    obj.show();
    return 0;
}