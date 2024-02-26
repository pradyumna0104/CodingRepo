#include <iostream>
#include <list>
using namespace std;
void display(list<int> &ist){
      list<int>::iterator it;
      for(it=ist.begin(); it!=ist.end(); it++){
        cout << *it<<" ";
      }
      cout << endl;
}
int main(){
    list<int> list1;
    list1.push_back(44);
    list1.push_back(2);
    list1.push_back(71);
    list1.push_back(7);
    list1.push_back(30);
    display(list1);
    list1.reverse();
    display(list1);
    list1.sort();
    display(list1);
    list<int>::iterator it = list1.begin();
    list1.insert(it,3,56);
    display(list1);
    cout<<list1.max_size();
    // list1.pop_back();
    // list1.pop_front();
    // display(list1);
    // list1.remove(3);
    // display(list1);
    return 0;
}