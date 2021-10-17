#include <stdio.h>


int main()

{
int number,i,c=0;
printf("enter a number: ");
scanf("%d",&number);


for(i=1; i <=number; i=i+1 ){


if(number%i==0){

    c=c+1;
}

else{
    c=c;
}
}

if(c==2){
    printf("prime\n");
}

else{
    printf("not prime\n");
}
return 0;
}


