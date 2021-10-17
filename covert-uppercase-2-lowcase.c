#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
char metin[40];
int i;
int j;

printf("to convert uppercases to lower cases: enter 0\nto convert lowercases to upper cases: enter 1\n:");                                                 
scanf("%d",&j);

printf("enter a string: ");
scanf("%s",metin);

for(i=0; i<strlen(metin); i++)
{
    if(metin[i]<=90&& metin[i]>=65 && j==0)
    {
        metin[i]=metin[i]+32;
    }
    else if(metin[i]<=90&& metin[i]>=65 && j==1)
    {
        metin[i]=metin[i];
    }
    else if(metin[i]<=122&& metin[i]>=97 && j==0)
    {
        metin[i]=metin[i];  
    }
    else if(metin[i]<=122&& metin[i]>=97 && j==1)
    {
        metin[i]=metin[i]-32;
    }
}
printf("%s",metin);

return 0;
}