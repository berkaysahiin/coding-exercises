#include <stdio.h>

int get_index_of_min (int list[], int first, int last);

void selection_sort (int list[], int n);

int main ()
{
    
    int exampleArray[12] = {2,7,1,9,10,2,6,1,5,-1,-7-5};
    
    selection_sort(exampleArray,12);
    
    for (int i = 0; i<12; i++)
    {
        printf("%d\n",exampleArray[i]);
    }
    
    return (0);
}



int get_index_of_min (int list[], int firstIndex, int lastIndex)
{
    int returnIndex = firstIndex;
    
    int minimumValue = list[firstIndex];
    
    for (firstIndex = firstIndex + 1; firstIndex <= lastIndex; ++firstIndex)
    {
        if (list[firstIndex] < minimumValue)
        {
            minimumValue = list[firstIndex];
            returnIndex = firstIndex;
        }
    }
    
    return (returnIndex);
}


void selection_sort(int list[], int arraySize)       
{
     int fillIndex, temp, index_of_min;   

     for (fillIndex = 0; fillIndex < arraySize-1; fillIndex++)
     {
          index_of_min = get_index_of_min(list, fillIndex, arraySize-1);

          if (fillIndex != index_of_min) 
          {
                temp = list[index_of_min];
                
                list[index_of_min] = list[fillIndex];
                
                list[fillIndex] = temp;
          }
     }
}