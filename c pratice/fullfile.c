#include <stdio.h>

 
int main(){

    FILE *str;
    str = fopen("text.txt","a");
    char name[100];
    int roll;
    float cgpa;
    printf("Enter name = ");
    scanf("%s",name);
    printf("Enter roll = ");
    scanf("%d",&roll);
    printf("Enter cgpa = ");
    scanf("%f",&cgpa);
    fprintf(str,"student name =%s \n",name);
    fprintf(str,"student roll =%d \n",roll);
    fprintf(str,"student cgpa =%f \n",cgpa);
    fclose(str);
    return 0;
}

/*
if(str==NULL){
        printf("file does not exit");
    }
    else{
        printf("file exit");
    }
*/
/*
//text.txt=pradyumna
char ch;
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//p
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//r
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//a
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//d
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//y
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//u
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//m
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//n
    fscanf(str,"%c",&ch);
    printf("chatater is =%c \n",ch);//a
*/
 /* 
   \\text.txt=123 234 345 456
   int n=0;
    fscanf(str,"%d \n",&n);
    printf("number =%d \n",n);//123
    fscanf(str,"%d \n",&n);
    printf("number =%d \n",n);//234
    fscanf(str,"%d \n",&n);
    printf("number =%d \n",n);//345
    fscanf(str,"%d \n",&n);
    printf("number =%d \n",n);//456
    */