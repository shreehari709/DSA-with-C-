#include<stdio.h>
#include<string.h>    

int main()
{
    char source[] = "Good Morning";    
    char target[50];    
    strcpy(target, source);    
    printf("Source string: %s\n", source);    
    printf("target string: %s\n", target);    
    return 0;
}
