#include<stdio.h>

int main(){
    //matrix addition and substration and multiplication
    int arr1[3][3], arr2[3][3], resultadd[3][3], resultsub[3][3],resultmul[3][3];
    int i,j,k;

    //input of 1st matrix
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("element of matrix 1 at position (%d,%d) is: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    } 

    printf("\n");

    //input of 2nd matrix
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("element of matrix 2 at position (%d,%d) is: ",i,j);
            scanf("%d", &arr2[i][j]);
        }
    } 

    printf("\naddition of two matrix is \n"); 
    
    //addition taking place and print
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
           resultadd[i][j]=arr1[i][j]+arr2[i][j];
           printf("%d\t", resultadd[i][j]);
        }
        printf("\n");
    } 

    printf("\nsubstration of two matrix is \n");
     
    //substration taking place and print
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
           resultsub[i][j]=arr1[i][j]-arr2[i][j];
           printf("%d\t", resultsub[i][j]);
        }
        printf("\n");
    } 

    printf("\nmultiplication of two matrix is\n");

    //multiplication taking place
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            resultmul[i][j]=0;
            for(k=0; k < 3; k++){
                resultmul[i][j] +=arr1[i][k] * arr2[k][j];
            }
        }
    }

    //result of multiplication
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
           printf("%d\t", resultmul[i][j]);
        }
        printf("\n");
    } 


    return 0;
}


/*
     input and output of a matrix
     int arr[3][3];
     int i,j;

     for(i=0; i < 3; i++){
         for(j=0; j < 3; j++){
             printf("enter the element of (%d,%d):", i, j);
             scanf("%d",&arr[i][j]);
         }
     }


     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
     }
*/