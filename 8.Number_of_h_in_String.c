
#include <stdio.h>
#include<string.h>
int main() {
    printf("RA2211042010042\n");
    //declaring and initializing string 
   int count=0;
    char sentence[42]="Hi! How are you doing?";
    for(int i=0;i<42;i++)
    {
        if(sentence[i]==104||sentence[i]==72)
        count++;
    }
    printf("number of h=%d ",count);

}
