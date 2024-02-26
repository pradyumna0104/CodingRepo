#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    
    cout<<"size -> "<<v.size()<<endl;//0
    cout<<"capacity -> "<<v.capacity()<<endl;//0
    
    v.push_back(1);
    cout<<"size -> "<<v.size()<<endl;//1
    cout<<"capacity -> "<<v.capacity()<<endl;//1

    v.push_back(2);
    cout<<"size -> "<<v.size()<<endl;//2
    cout<<"capacity -> "<<v.capacity()<<endl;//2

    v.push_back(3);
    cout<<"size -> "<<v.size()<<endl;//3
    cout<<"capacity -> "<<v.capacity()<<endl;//4

    cout<<"element at 2nd index -> "<<v.at(2)<<endl;//3
    cout<<"1st element -> "<<v.front()<<endl;//1
    cout<<"last element -> "<<v.back()<<endl;//3

    v.push_back(4);

    cout<<"before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;//1 2 3 4

    v.pop_back();

    cout<<"after pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;//1 2 3

    cout<<" before clear size -> "<<v.size()<<endl;//3
    cout<<"before clear capacity -> "<<v.capacity()<<endl;//4
    v.clear();
    cout<<"after clear size -> "<<v.size()<<endl;//0
    cout<<"after clear capacity -> "<<v.capacity()<<endl;//4

    v.push_back(1);    
    v.push_back(2);    
    v.push_back(3);    
    v.push_back(4);    
    v.push_back(5);
    cout<<"print v "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;//1 2 3 4 5

    vector<int> v2(5,1);//create a vector v2 of size 5  and intialize every element with 1
    cout<<"print v2 "<<endl;
    for(int i:v2){
        cout<<i<<" ";
    }cout<<endl;// 1 1 1 1 1

    vector<int> v3(v2);//create a vector v3 and copying all element of vector v2
    cout<<"print v3 "<<endl;
    for(int i:v3){
        cout<<i<<" ";
    }cout<<endl;// 1 1 1 1 1

    return 0;
}