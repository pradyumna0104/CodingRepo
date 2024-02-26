#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t currentTime;
    time(&currentTime);
   // printf("current time and date :%s \n",ctime(currentTime));
    printf("current time and date :%s \n",asctime(localtime(&currentTime)));
    return 0;
}
/* int randomNum;

    // seed the random number generator with current time
    srand(time(NULL));

    // generate a random number between 1 and 100
    randomNum = rand() % 100 + 1;
    printf("random number=%d \n",randomNum);
*/
/*
"In this code, 
srand(time(NULL)) seeds the random number generator based 
on the current time. Then, rand() % 100 + 1 generates a 
random number between 0 and 99 and adds 1 to make it between 1 and 100.
Finally, the generated number is printed to the console using printf()."
*/