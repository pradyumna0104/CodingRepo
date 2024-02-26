#include <iostream>
#include <map>
using namespace std;
int main(){
    
    map<int,string> m;
    
    m[1] = "moon";
    m[13] = "shradha";
    m[2] = "love";
    
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    /*
    1 moon
    2 love
    13 shradha
    */

    m.insert({6,"bheem"});
    m.insert({5,"kalia"});

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    /*
    1 moon
    2 love
    5 kalia
    6 bheem
    13 shradha
    */

    cout<<"finding 5 ->"<<m.count(5)<<endl;//1

    m.erase(13);
    cout<<"after erase 13 map is"<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    /*
    1 moon
    2 love
    5 kalia
    6 bheem
    */

    auto  it = m.find(5);
    for(auto i = it;i != m.end();i++){
        cout<<(*i).first<<endl;
    }
    /*
    5
    6
    */

    return 0;
}
