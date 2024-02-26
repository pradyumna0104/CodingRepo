#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch <='z'){
        cout<<"lower case alphabet"<<endl;
    }
    else if(ch>='A' && ch <='Z'){
        cout<<"Upper case alphabet"<<endl;
    }
    else if(ch >= '0' && ch<='9'){
        cout<<"number alphabet"<<endl;
    }
    else{
        cout<<"special character"<<endl;
    }
    return 0;
}