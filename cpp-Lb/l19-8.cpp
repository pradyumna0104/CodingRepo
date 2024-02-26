#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;//0 1 5 6 

    set<int>::iterator it = s.begin();//it->0
    it++;//it->1
    s.erase(it);//erase 1
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;//0 5 6

    cout<<"5 is presentr or not ?? -> "<<s.count(5)<<endl;//1 -> present

    set<int>::iterator itr = s.find(5);//itr -> 5
    for(auto j = itr; j !=s.end();j++){//print all after 5
        cout<<*j<<" ";
    }cout<<endl;//5 6 

    return 0;
}