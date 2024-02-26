#include <stdio.h>
#include <string.h>


int length(char array[]);
/* hydrogen,helium,lithium,berylium,boron,carbon,nitrogen,oxygen,fluroine,neon,
sodium,magnesium,aluminium,silicon,phosphrous,sulpher,chlorine,argon,potassium,calcium,
scandium,titanium,vanadium,chromium,manganese,iron,cobalt,nickel,copper,zinc */

int main(){

    char name1[100]="pradyumna";

    int count=strlen(name1);
    printf("the length is %d", count);
    return 0;
}


int length(char array[]){
    int sum=0;
    for(int i=0;array[i]!='\0';i++){
        sum ++;
    }
    printf("the no of character is %d",sum);
}