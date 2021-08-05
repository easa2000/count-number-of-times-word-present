// count number of times word present in string

#include<stdio.h>
void main()
{
    char str[200], pat[200];
    int i = 0, j = 0, found = 0, count = 0,k;
    printf("\n Enter a String: ");
    gets(str);
    printf("\n Enter a pattern: ");
    gets(pat);

    while(str[i] != '\0')
    {
        j=0, k=i;
        while(str[k] == pat[j] && pat[j] != '\0')
        {
            k++;
            j++;
        }
        if(pat[j] == '\0')
        {
            found = 1;
            count++;
        }
        i++;
    }
    if(found == 1)
       printf("\n Pattern found %d times",count);
    else 
       printf("\n Pattern not found");
}
