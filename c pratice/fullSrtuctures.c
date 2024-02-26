#include <stdio.h>
#include <string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}stu;
 void call(int roll,float cgpa,char name[100]);

int main(){
    
    stu s1={104,9.52,"pradyumna"};
    call(s1.roll,s1.cgpa,s1.name);

    stu s2={105,9.2,"pradhan"};
    call(s2.roll,s2.cgpa,s2.name);
    return 0;
}


 void call(int roll,float cgpa,char name[100]){

    printf("student name =%s \n",name);
    printf("%s roll no. is=%d \n",name,roll);
    printf("%s cgpa is=%f \n",name,cgpa);
}