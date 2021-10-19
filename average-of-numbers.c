#include <stdio.h>
#include <math.h>

int main(){
int n,i;
float summ=0,avg,given;

printf("how many numbers do you want to enter?: ");
scanf("%d",&n);

for(i=1; i<=n; i++)
{
    printf("enter the %d. number: ",i);
    scanf("%f",&given);
    summ=summ+given;    
} 
avg=summ/n;
printf("average of this %d number is = %f",n,avg);

return 0;
}