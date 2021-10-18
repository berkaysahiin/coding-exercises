#include <stdio.h>
#define KMS_PER_MILE 1.609


int main()
{

double miles,kms;
printf("enter the distance in miles>");
scanf("%lf",&miles);
kms=KMS_PER_MILE*miles;


printf("in km=%f",kms);

return 0;
}