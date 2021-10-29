#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
 int count,i=0,j;
 char temp[40];
 
 printf("how many word(s) are you going to enter>");
 scanf ("%d",&count);
 char words[count][40];

 for(i=0; i<count; i++){
     printf("enter the %d.word>",i+1);
     scanf ("%s",words[i]);
    }
 for(i=0; i<=count-2; i++){
     for(j=i+1; j<=count; j++){
         if(strcmp(words[i],words[j])>0){
             strcpy(temp,words[i]);
             strcpy(words[i],words[j]);
             strcpy(words[j],temp);
            }
        } 
    } 
 printf("Order of Sorted Strings:\n");
   for(i=0;i<count;i++){
      printf("%d.%s\n",i+1,words[i]);
    }
 return 0;
}
