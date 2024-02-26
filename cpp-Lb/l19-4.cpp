#include <iostream>
#include <list>//double ended linked list
using namespace std;
int main(){
    list<int> l;
    
    l.push_back(1);//1
    l.push_back(2);//1 2
    l.push_back(3);//1 2 3
    l.push_front(4);//4 1 2 3 
    l.push_front(5);//5 4 1 2 3
    l.push_front(6);//6 5 4 1 2 3
    cout<<"print "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;//6 5 4 1 2 3

    l.pop_back();
    cout<<"after pop from back "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;//6 5 4 1 2 

    l.pop_front();
    cout<<"after pop from front "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;//5 4 1 2

    //cout<<"element at 2nd index -> "<<l.at(2)<<endl;//can't accesses a particular element

    cout<<"before erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;//5 4 1 2
    
    l.erase(l.begin());//eraseing only 1st element

    cout<<"after erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;//4 1 2 

    return 0;
}