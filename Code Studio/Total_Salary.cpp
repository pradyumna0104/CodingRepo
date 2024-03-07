#include<iostream>
#include <cmath>
using namespace std;

int main() {
	// Write your code here
	double tot;
    double basesal;
    cin>>basesal;
    char grade;
    cin>>grade;
    double hra = (0.2)*basesal;
    double da = (0.5)*basesal;
    double allow;
    if(grade=='A'){
        allow = 1700;
    }else if(grade=='B'){
        allow = 1500;
    }else{
        allow = 1300;
    }
    double pf = (0.11)*(basesal);
    tot = basesal + hra + da+ allow - pf;
    int ans = round(tot);
    cout<<ans;
}