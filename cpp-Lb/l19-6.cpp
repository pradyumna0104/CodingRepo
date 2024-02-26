#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("love");
    q.push("moon");
    q.push("kumar");
    cout<<"queue size "<<q.size()<<endl;
    cout<<"front element "<<q.front()<<endl;
    q.pop();
    cout<<"after 1st pop front element "<<q.front()<<endl;
    cout<<"queue size "<<q.size()<<endl;
    cout<<"queue is empty or not "<<q.empty()<<endl;
    return 0;
}