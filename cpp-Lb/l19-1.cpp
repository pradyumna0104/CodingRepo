#include <iostream>
#include <array>
using namespace std;
int main(){
    //int basic[4]={1,2,3,4};
    array<int,4> a = {3,4,5,6};
    int size  = a.size();
    for(int i = 0 ;i< size;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"element at 2nd index -> "<<a.at(2)<<endl;
    cout<<" array is empty or not ->"<<a.empty()<<endl;//boolean return 
    cout<<"1st element -> "<<a.front()<<endl;
    cout<<"last element -> "<<a.back()<<endl;
    return 0;
}