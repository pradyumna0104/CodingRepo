#include<iostream>
using namespace std;
char getmaxioccurrence(string s){
    int arr[26] = {0};
    //create an array of count character
    for (int i=0; i < s.length(); i++){
        int ch = s[i];
        int number = 0;
        //lets take only lower alphabet
        number = ch - 'a';
        arr[number]++;
    }
    int maxi =-1;
    int ans = 0;
    for(int i=0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans ='a'+ans;
    return finalans;
}
int main(){
    string s;
    cout<<"enter a string : ";
    cin>>s;
    cout<<"maximum occuring character is : "<<getmaxioccurrence(s)<<endl;
    return 0;
}