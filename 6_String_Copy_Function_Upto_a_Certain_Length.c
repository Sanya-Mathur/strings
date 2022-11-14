
#include <stdio.h>

int main() 
{   printf("RA2211042010042\n");
 
    char str[60];//initializing string
    printf("Enter String\n");
    
    scanf("%s",&str);//input string 
    char copy[60];
    strncpy(copy,str,3);   // strncpy() copies a string from source to detination 
    printf("String copy=%s",copy);
    

    return 0;
}
