#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define null 0
int main() 
{
    char n;
    String z;
    int MAX_LEN;
    scanf("%s",z)
    scanf("%c",n)
    scanf("%i", MAX_LEN)
    char s[MAX_LEN];
    for(int i = 0; i < MAX_LEN; i++){
        scanf("%c", s[i]);
    }
    for(int z = 0; s[z] != null; z++){
        printf("%c", s[z]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
