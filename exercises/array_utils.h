#include <stdlib.h>
#include <stdio.h>

/**
 * A collection of array and 2-D array utility
 * functions.
 */

/**
 * Prints the given integer array to the standard output
 */
void printArray(const int *arr, int n);

/**
 * Prints the given (n x m) integer table to the standard
 * output.
 */
void printTable(int **table, int n, int m);

/**
 * Generates an array of integers of the given size filled
 * with random integer values between 0 and 100 (exclusive).
 * This function assumes that the random number
 * generator has already been seeded.
 */
int * generateRandomArray(int size);

/**
 * Sums the elements in the given array.
 */
int getSum(int *arr, int size);

/**
 * Frees the given (n x m) table.  Only the first parameter
 * (n, number of rows) is necessary to free the table.
 */
void freeTable(int **table, int n);

/**
 * TODO: add your own documentation
 */
double getMean(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int getMin(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int getIndexOfMin(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int getMax(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int getIndexOfMax(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int * filterThreshold(const int *arr, int size, int threshold, int *resultSize);

/**
 * TODO: add your own documentation
 */
int **createMultiplicationTable(int n, int m);


void printArray(const int *arr, int n) {
  if(arr == NULL) {
    printf("[null]\n");
    return;
  }
  printf("[ ");
  for(int i=0; i<n-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d ]\n", arr[n-1]);
  return;
}

void printTable(int **table, int n, int m) {
  if(table == NULL) {
    printf("[null]\n");
    return;
  }
  for(int i=0; i<n; i++) {
    printArray(table[i], m);
  }
  return;
}

int * generateRandomArray(int size) {
  if(size < 0) {
    return NULL;
  }
  int randomArr[size];
  for(int i=0; i<size; i++) {
    randomArr[i] = rand() % 100;
  }
  //return randomArr;
}

int getSum(int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int total = 0;
  for(int i=0; i<size; i++) {
    total += arr[i];
    arr[i] = 0;
  }
  return total;
}

void freeTable(int **table, int n) {
  if(table == NULL) {
    return;
  }
  for(int i=0; i<n; i++) {
    free(table[i]);
  }
  free(table);
}

// defination of  getMean() function;

double getMean(const int *arr, int size) {

double avg;

int sum=0;

  for(int i=0;i<size;i++){

sum=sum+ *arr;
arr++;

  }

avg = sum/size;

  return avg;

}

//defination of getmin(); function

int getMin(const int *arr, int size) {
  
int min=arr[0];

for(int i=1;i<size;i++){

if(arr[i]<min){

min=arr[i];

  
}

}

return min;

}

//defination of getindexofMin(); function

int getIndexOfMin(const int *arr, int size) {

int min=arr[0];

for(int i=1;i<size;i++){

if(arr[i]<min){

min=arr[i];
 
}

}

for(int i=0;i<size;i++){

if(min==arr[i]){

return i;

}


}
 
}

//defination of getMax(); function


int getMax(const int *arr, int size) {

int max=arr[0];

for(int i=1;i<size;i++){

if (max<arr[i]){

max=arr[i];
  
}

}

return max;

}

//defination of getindexofMax(); function


int getIndexOfMax(const int *arr, int size) {

 int max=arr[0];

for(int i=1;i<size;i++){

if (max<arr[i]){

max=arr[i];
  
}
}

for(int i=0;i<size;i++){

if(max==arr[i]){

return i;

}

} 

}

int * filterThreshold(const int *arr, int size, int threshold, int *resultSize) {
  //TODO: implement
}

int **createMultiplicationTable(int n, int m) {
  //TODO: implement
}
