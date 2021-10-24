#include <stdio.h>
#include <math.h>

int main()
{

  int count,i,temp,j;
  int number[40];

  printf("How many integers are you going to enter?> ");
  scanf("%d",&count);
  printf("Enter %d integers:\n",count);

  for(i=0; i<count; i++) 
  {
   scanf("%d",&number[i]);
  }

 for(i=1; i<count; i++) /* For n(count) numbers we need n-1(count-1) insertion */
  { 
  temp=number[i];       /* we will do swap in every loop so we need a temp value and this temp value should be equal to the value we are trying to insert */
  j=i-1;                /* in each loop we will first compare the temporary value with the number before it because previous number will always be the greatest number among the sorted numbers */
     while(j>=0 && temp<number[j]) /* if our temp value is less than the value we are comparing and the number we compare exists*/
     {
     number[j+1]=number[j]; /* shift the value we're comparing one right */
     j=j-1;                 /* In the next while loop, we will compare our temp value with the number that comes before the number we are comparing in this loop (if there is such a value) */
     }                      /* at the end of the loop our temp value is not placed anywhere */
  number[j+1]=temp; /* if it got here, the compared value is less than temp, so the temp value must be one right of the compared value */
  } /* OR, because our temp value is smaller than all the values ​​on its left side the variable j came out as -1 from the while loop, so our temp value is set to 0, which is the first value of the array */
                   
 printf("\nSorted list in ascending order:\n");
 for(i=0; i<count; i++ )
 {
   printf("%d ",number[i]);
 }
return 0;
}
