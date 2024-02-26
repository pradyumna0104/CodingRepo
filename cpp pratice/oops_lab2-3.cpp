#include <iostream>
using namespace std;
class a{
    protected:
    char name[50];
    int mark1,mark2,mark3,mark4,mark5;
};
class b:public a{
    public:
    int avg = 0;
    void getdata(){
        cout<<"\n enter the student name : ";
        cin>>name;
        cout<<"\n enter the 1st subject marks : ";
        cin>>mark1;
        cout<<"\n enter the 2nd subject marks : ";
        cin>>mark2;
        cout<<"\n enter the 3rd subject marks : ";
        cin>>mark3;
        cout<<"\n enter the 4th subject marks : ";
        cin>>mark4;
        cout<<"\n enter the 5th subject marks : ";
        cin>>mark5;
     }
     void display(){
     avg = (mark1+mark2+mark3+mark4+mark5)/5;
     cout<<"\n the name of the student is : "<<name;
     cout<<"\n the average  mark of the student is :"<<avg<<endl;
     }
};
int main(){
    b stu;
    stu.getdata();
    stu.display();
    return 0;
}