#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    string name;
    int age;

    protected:
    int studentID;

    public:
    Student(const string &n, int a, int id) : name(n), age(a), studentID(id) {}
    void setName(const string &n)
    {
        name = n;
    }
    string getName() const
    {
        return name;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge() const
    {
        return age;
    }
    void setStudentID(int id)
    {
        studentID = id;
    }
    int getStudentID() const
    {
        return studentID;
    }
};
 class UndergraduateStudent : public Student{
   
    private:
    string major;

    public:
    UndergraduateStudent(const string &n, int a, int id, const string &m)
        : Student(n, a, id), major(m) {}
    void setMajor(const string &m)
    {
        major = m;
    }
    string getMajor() const
    {
        return major;
    }
};
int main()
{
    Student student("John", 20, 12345);
    UndergraduateStudent undergrad("Alice", 19, 54321, "Computer Science");
    cout << "Student Name: " << student.getName() << endl;
    cout << "Student Age: " << student.getAge() << endl;
    cout << "Student ID: " << student.getStudentID() << endl;
    cout << "\nUndergraduate Student Name: " << undergrad.getName() << endl;
    cout << "Undergraduate Student Age: " << undergrad.getAge() << endl;
    cout << "Undergraduate Student ID: " << undergrad.getStudentID() << endl;
    cout << "Major: " << undergrad.getMajor() << endl;
    return 0;
}