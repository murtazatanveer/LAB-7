#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

int main(int argc, char **argv) {



int size;
printf("\nEnter Size of your array : ");
scanf("%d",&size);

int array[size];

printf("\nEnter elements of your array with wide spaces : ");

for(int i=0;i<size;i++){

scanf("%d",&array[i]);

}


  //seed the random number generator with the current time
  /*srand(time(NULL));

  int n = 10;
  int *arr = generateRandomArray(n);
  printArray(arr, n);

  int sum = getSum(arr, n);
  printf("sum of elements = %d\n", sum);
  printArray(arr, n);

  free(arr);*/


//testing getmean(); function

double Mean = getMean(array,size);

printf("\nMean of given array is : %.2lf",Mean);



  return 0;

}


