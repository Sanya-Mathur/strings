
#include <stdio.h>
#include<string.h>
int main() {
    printf("RA2211042010042\n");
    //declaring and initializing string 
   int count=1;
    char sentence[42]="Hi! How are you doing?";
    for(int i=0;i<42;i++)
    {
        if(sentence[i]==32)//counts number of spaces 
        count++;
    }
    printf("number of words=%d ",count);

}
