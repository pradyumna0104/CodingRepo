#include<iostream>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    for(int i = 0 ; arr[i] != '\0';i++){
        count++;
    }
    return count;
}
void reverse(char arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}
char tolower(char ch){
    if(ch >='a' && ch <='z'){
        return ch;
    }
    else{
        char temp = ch -'A'+'a';
        return temp;
    }
}
bool checkpalindrome(int a[],int n){
    int s= 0;
    int e= n-1;
    while(s<=e){
        if(tolower(a[s]) != tolower(a[e])){
            return 0;
        }
        else{
            s++;e--;
        }
    }
    return 1;
}
int main(){
    char name[20];
    cout<<"enter your name: ";//love moon
    cin>>name;
    cout<<"your name is : "<<name<<endl;//love
    cout<<"length : "<<getlength(name)<<endl;
    reverse(name,getlength(name));
    cout<<"reverse is: "<<name<<endl;
    /*
    //moon is not print here
    cout<<"enter your name: ";//phonix
    cin>>name;
    name[2] ='\0';//terminate after 2charater printing 
    cout<<"your name is : "<<name<<endl;//love
    */
    return 0;
}