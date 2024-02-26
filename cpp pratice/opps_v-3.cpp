#include <iostream>
#include <string>
using namespace std;
class moon
{
    string s;

public:
    void bin(void);
    void che_bin(void);
    void compliment(void);
};
void moon::bin(void)
{
    cout << "enter a binary number " << endl;
    cin >> s;
}
void moon ::che_bin(void)
{
    for (int i = 0; i <= s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Number is not binary format" << endl;
        }
        exit(0);
    }
}
void moon ::compliment(void)
{
    for (int i = 0; i <= s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            exit(0);
        }
        else
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else if
                (s.at(i) == '1')
                {
                    s.at(i) = '0';
                }
                else{
                    exit(0);
                }
                cout<<s<<endl;
        }
    }
}
int main()
{
    moon s;
    s.bin();
    s.che_bin();
    s.compliment();
    return 0;
}