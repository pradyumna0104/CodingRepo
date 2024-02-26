#include <iostream>
#include <string>
using namespace std;
class personalinfo{
    private:
    string name;
    string gmail;
    public:
    string phoneno;
    string branch;
    void setname(const string &n){
        name = n;
    }
    void setgmail(const string &g){
        gmail = g;
    }
    void setphoneno(const string &p){
        phoneno = p;
    }
    void setbranch(const string &b){
        branch = b;
    }
    void display(){
        cout<<"name :"<<name<<endl;
        cout<<"gmail :"<<gmail<<endl;
        cout<<"phoneno :"<<phoneno<<endl;
        cout<<"branch :"<<branch<<endl;
    }

};
int main(){
    personalinfo student;
    cout<<"enter name :";
    cin >>student.name;
    cout<<"\n enter gmail id :";
    cin>>student.gmail;
    cout<<"\n enter phone no :";
    cin>>student.phoneno;
    cout<<"\n branch :";
    cin>>student.branch;
    student.setname(student.name);
    student.setgmail(student.gmail);
    student.setphoneno(student.phoneno);
    student.setbranch(student.branch);
    student.display();
    return 0;
}