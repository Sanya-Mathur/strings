
#include <stdio.h>

int main() 
{   printf("RA2211042010042\n")
 
    char str[60];//initializing string
    printf("Enter String\n");
    
    scanf("%s",&str);//input string 
    
    int length=strlen(str);   // strlen() calculates length of string 
    printf("String length=%d",length);
    

    return 0;
}
