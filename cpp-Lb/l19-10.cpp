#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    
    vector<int> v;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    cout<<"finding 5 -> "<<binary_search(v.begin(),v.end(),5)<<endl;//0
    cout<<"finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;//1
    
    //i/p = 10 20 30 40 50
    //o/p = lower bound for element 30 at index 2
    //o/p = lower bound for element 35 at index 3
    //o/p = lower bound for element 55 at index 5
    //i/p = 10 20 30 30 30 40 50
    //o/p = lower bound for element 30 at index 2
    cout<<"lower bound -> "<<lower_bound(v.begin(),v.end(),15)-v.begin()<<endl;//4
    
    //i/p = 10 20 30 30  40 50
    //o/p = upper bound for element 30 at index 4
    //i/p = 10 20 30 40 50
    //o/p = upper bound for element 45 at index 4
    //i/p = 10 20 30 40 50
    //o/p = upper bound for element 60 at index 5
    cout<<"upper bound -> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;//2

    //rotate( start ,   middle  ,   end );
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;//3 6 7 1 
    
    //here sort = ( quick + heap + insertion ) algorithm simulataneously running in the background 
    sort(v.begin(),v.end());
    cout<<"after sorting : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;//1 3 6 7
    
    
    int a = 3;
    int b = 5;
    
    cout<<"max -> "<<max(a,b)<<endl;//5
    cout<<"min -> "<<min(a,b)<<endl;//3

    swap(a,b);
    cout<<"a -> "<<a<<", b-> "<<b<<endl;//a -> 5, b-> 3

    string s = "abcde";
    reverse(s.begin(),s.end());
    cout<<"after reverse -> "<<s<<endl;//edcba
    return 0;
}