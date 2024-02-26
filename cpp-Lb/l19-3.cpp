#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d;
    
    d.push_back(1);//1
    d.push_back(2);//1 2
    d.push_back(3);//1 2 3
    d.push_front(4);//4 1 2 3 
    d.push_front(5);//5 4 1 2 3
    d.push_front(6);//6 5 4 1 2 3
    cout<<"print "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;//6 5 4 1 2 3

    d.pop_back();
    cout<<"after pop from back "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;//6 5 4 1 2 

    d.pop_front();
    cout<<"after pop from front "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;//5 4 1 2

    cout<<"element at 2nd index -> "<<d.at(2)<<endl;//1
    cout<<"1st element -> "<<d.front()<<endl;//5
    cout<<"last element -> "<<d.back()<<endl;//2
    cout<<" array is empty or not ->"<<d.empty()<<endl;//(0) boolean return 

    cout<<"before erase "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;//5 4 1 2
    
    d.erase(d.begin(),d.begin()+2);

    cout<<"after erase "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;//1 2 

    return 0;
}