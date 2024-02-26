#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> reverse(vector<int> v){
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
       // swap(v.at(i),v.at(j));
       swap(v[i],v[j]);
        i++;
        j--;
    }
    return v;
}
void print(vector<int> v){
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    cout<<"before reverse "<<endl;
    print(v);
    vector<int> ans = reverse(v);
    cout<<"after reverse "<<endl;
    print(ans);
    return 0;
}