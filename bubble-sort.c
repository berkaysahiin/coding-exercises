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

  for(i=0; i< count-1; i++ ) /* When we group the numbers in our array in pairs, the number of groups to look at becomes element number( int count in this code)-1.*/
{
  for(j=0; j<=count-2; j++)  /* We compare the numbers in our array with the number that comes after it. */
  {                          /* Since there is no number after the last number in the array, we can only compare it with the number before it.  */                                         
  if(number[j]>number[j+1])  
    {
     temp=number[j];         /* if the next number is greater than the previous number, we swap the numbers */
     number[j]=number[j+1];
     number[j+1]=temp;
    }
  }
}


 printf("\nsorted list in ascending order:\n");

 for(i=0; i<count; i++ )
 {
    printf("%d\n",number[i]);
 }
return 0;
}


