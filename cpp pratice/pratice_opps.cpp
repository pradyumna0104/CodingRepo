#include <iostream>
using namespace std;
int main (){
    return 0;
}

// //constructer overloading
// class area{
//     private:
//     double b,h,r,a1,a2,d;
//     public:
//     area(double b,double h){
//         double ans = 0.5*b*h;
//         cout<<"the area of triangle is "<<ans<<endl;
//     }
//     area(double r){
//         double ans = 3.14*r*r;
//         cout<<"the area of circle is "<<ans<<endl;
//     }
//     area(double a1,double a2,double d){
//         double ans = 0.5 *(a1+a2)*d;
//         cout<<"the area of trapezium is "<<ans<<endl;
//     }
// };
// int main(){
//     area a(3,4),b(5),c(1,2,3);
//     return 0;
// }

// class base{
//     int a;
//     public:
//     base(){
//         a = 10;
//     }
//     void display(){
//         cout<<"\n a = "<<a;
//     }
// };
// class derive:public base{
//     int b;
//     public:
//     derive(){
//         b = 10;
//     }
//     void display(){
//         cout<<"\n b = "<<b;
//     }
// };
// int main(){
//     // base obj_base,*ptr;
//     // ptr = &obj_base;
//     // ptr->display();
//     // derive obj_derive;
//     // ptr = &obj_derive;
//     // ptr->display();
//     // derive obj_derive,*ptr;
//     // ptr = &obj_derive;
//     // ptr->display();
//     // obj_derive.base::display();
//     return 0;
// }

// //array of object
// class student{
//   char name[50];
//   double rollno;
//   int mark;
//   public:
//   void getdata(){
//     cout<<"\n enter the name : ";
//     cin>>name;
//     cout<<"\n enter the roll no : ";
//     cin>>rollno;
//     cout<<"\n enter the mark : ";
//     cin>>mark;
//   }
//   void printing(){
//     cout<<"\n the name is: "<<name;
//     cout<<"\n the roll no is: "<<rollno;
//     cout<<"\n the mark is : "<<mark;
//   }
// };
// int main(){
//     student arr[5];
//     arr[1].getdata();
//     arr[2].getdata();
//     arr[3].getdata();
//     arr[1].printing();
//     arr[2].printing();
//     arr[3].printing();
//     return 0;
// }

// //base class pointer to derive class object
// class  first{
//     int a;
//     public:
//     first(){
//         a = 10;
//     }
//     void display(){
//         cout<<"\n a = "<<a;
//     }
// };
// class  second:public first{
//     int b;
//     public:
//     second(){
//         b = 20;
//     }
//     void display(){
//         cout<<"\n b = "<<b;
//     }
// };
// int main(){
//     first f,*p;
//     p = &f;
//     p->display();
//     second e;
//     p = &e;
//     p->display();
//     return 0;
// }

// //function overloading
// class shape{
//     private:
//     double b,h,r,a1,a2,d;
//     public:
//     void area(double b,double h){
//         double ans = 0.5*b*h;
//         cout<<"the area of triangle is "<<ans<<endl;
//     }
//     void area(double r){
//         double ans = 3.14*r*r;
//         cout<<"the area of circle is "<<ans<<endl;
//     }
//      void area(double a1,double a2,double d){
//         double ans = 0.5 *(a1+a2)*d;
//         cout<<"the area of trapezium is "<<ans<<endl;
//     }
// };
// int main(){
//     shape a,b,c;
//     a.area(3,4);
//     b.area(3);
//     c.area(1,2,3);
//     return 0;
// }

// //operater overloading
// class math{
//     private:
//     int a,b,c,d;
//     public:
//     void input(){
//         cout<<"enter four value :"<<endl;
//         cin>>a>>b>>c>>d;
//     }
//     void display(){
//         cout<<"a="<<a<<", b="<<b<<", c="<<c<<", d="<<d<<endl;
//     }
//     math operator * (int t){
//          math temp;
//          temp.a = a*t;
//          temp.b = b*t;
//          temp.c = c*t;
//          temp.d = d*t;
//          return temp;
//     }
//     math operator +(math w){
//         math temp;
//         temp.a = a +w.a;
//         temp.b = b +w.b;
//         temp.c = c +w.c;
//         temp.d = d +w.d;
//         return temp;
//     }
//     math operator *(math x){
//         math temp;
//         temp.a = a*x.a;
//         temp.b = b*x.b;
//         temp.c = c*x.c;
//         temp.d = d*x.d;
//         return temp;
//     }
// };
// int main(){
//     math m1,m2,m3,m4;
//     m1.input();
//     m1.display();
//     m2 =m1*10;
//     m2.display();
//     m3 =m2+m1;
//     m3.display();
//     m4 =m1*m3;
//     m4.display();
//     return 0;
// }

// class man{
// private:
//     int x, y;
// public: 
//     // man()
//     // {
//     //     x = 0;
//     //     y = 0;
//     //     cout<<"x= "<<x<<"  &  y= "<<y<<endl;
//     // }
//     man(int a = 0, int b = 0)
//     {
//         x = a;
//         y = b; 
//         cout<<"x= "<<x<<"  &  y= "<<y<<endl;
//     }
//     man(man &ref){
//         x = ref.x;
//         y = ref.y;
//         cout<<"x= "<<x<<"  &  y= "<<y<<endl;
//     }
//     ~man(){
//         cout<<"destructer is called .\n"<<endl;
//     }
// };
// int main()
// {
//     man muna;
//     man kanha(2,3);
//     man anna = kanha;
//     return 0;
// }
//    int x, y, j;
//     cout << " enter two number x and y" << endl;
//     cin >> x >> y;
//     j = x > y ? 0 : 1;
//     try
//     {
//         if (j == 0)
//         {
//             cout << "subration of x-y is " << x - y << endl;
//         }
//         else
//             throw(j);
//     }
//     catch (int k)
//     {
//         cout << "exception caught. j =" << j << endl;
//     }
