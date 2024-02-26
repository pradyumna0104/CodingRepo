#include <stdio.h>
void printarray(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
     printf("\n");
}
void insertionsort(int *a,int n){
    int key,j;
    for (int i = 1; i <=n-1; i++)
    {
        key = a[i];
        j= i-1;
        while(j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }  
}
void bubblesort(int *a,int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void bubblesortadptive(int *a,int n){
    int temp;
    int issorted = 0;
    for (int i = 0; i < n-1; i++)
    {
        printf("working on pass number %d \n",i+1);
        issorted = 1;
        for (int j = 0; j < n-1-i; j++)
        {
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                issorted = 0;
            }
        }
        if(issorted){
            return;
        }
    }
}
int main(){
    int a[]={1,2,22,53,67,14,3,81};
    int n = 8;
    printf("before sorting :");
    printarray(a,n);
    // bubblesort(a,n);
    // bubblesortadptive(a,n);
    insertionsort(a,n);
    printf("after sorting :");
    printarray(a,n);
    return 0;
}