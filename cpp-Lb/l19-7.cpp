#include <iostream>
#include <queue>
using namespace std;
int main(){
    //max_heap create by default
    priority_queue<int> maxi;
    
    //min_heap declaration
    priority_queue<int,vector<int>,greater<int>> mini;
    
    maxi.push(3);   
    maxi.push(2);   
    maxi.push(0);   
    maxi.push(1);   
    int n = maxi.size();
    for(int i = 0;i < n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    
    mini.push(4);   
    mini.push(5);   
    mini.push(0);   
    mini.push(1);   
    mini.push(2);   
    int m = mini.size();
    for(int i = 0;i < m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"khali h kya bhai ?? -> "<<mini.empty()<<endl;

    return 0;
}