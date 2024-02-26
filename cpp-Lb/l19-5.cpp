#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("love");
    s.push("moon");
    s.push("kumar");
    cout<<"top element "<<s.top()<<endl;
    s.pop();
    cout<<"after 1st pop top element "<<s.top()<<endl;
    cout<<"stack size "<<s.size()<<endl;
    cout<<"stack is empty or not "<<s.empty()<<endl;
    return 0;
}