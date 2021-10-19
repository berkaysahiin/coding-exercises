#include <stdio.h>
#include <math.h>

int main(){
int a,b,c,d=0;
printf("Enter the sides of the triangle:\n");
scanf("%d %d %d",&a,&b,&c);


while(a+b>c && a+c>b && c+b>a && a>b-c && b>a-c && c>a-b && d==0)
   {
if(a==b && b!=c || a!=b && b==c || a!=b && a==c)
{
    printf("isosceles triangle");
}

if(a==b && b==c)
{
    printf("Equilateral triangle");
}

if(a!=b && a!=c && b!=c)
{
    printf("Scalene triangle");
}
d++;     
    }
if(d==0){ printf("This triangle does not exist");}
return 0;
}











