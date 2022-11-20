#include <stdio.h>
#include <string.h>

int main ()
{
    char s [100] ;
    int i=0;
    int n;
    printf("Please type the string: \n");
    gets(s);
    puts(s);
    n=strlen(s);
    printf("Tamanho da string: %i", n);

    for (i=0; i < n/2; i++) {
    s[i] ^= s[n-i-1];
	s[n-i-1] ^= s[i];
	s[i] ^= s[n-i-1];
    }

    puts(s);}
