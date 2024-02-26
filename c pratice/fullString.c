#include <stdio.h>
#include <string.h>

int length(char array[]);

void salting(char password[]);

void slice(char name[200],int n,int m);

int main(){

    char name1[100]="apple ";
    char name2[100]="book";
   
    int length =strlen(name1);
    printf("the length is %d \n", length);

    strcat(name1,name2);
    printf("using strcat =%s \n",name1);
    
    strcpy(name1,name2);
    printf("using strcpy =%s \n",name1);

    
    printf("using strcmp =%s \n",strcmp(name1,name2));

    return 0;
}

void slice(char name[200],int n,int m){

    char new[250];
    int i,j;
    for(name[i]=n;name[i]<m;i++,j++){
        new[j]=name[i];
    }
    new[j]='\0';
    puts(new);
}


void salting(char password[]){
    char newpass[200];
    char salt[]="123";
    strcpy(newpass,password);
    strcat(newpass,salt);
    printf("after salting =%s",newpass);
    
}
int length(char array[]){
    int sum=0;
    for(int i=0;array[i]!='\0';i++){
        sum ++;
    }
    printf("the no of character is %d",sum);
}