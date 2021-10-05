#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#1
void printArr(int *arr, int lenArr){
  int i;
  printf("[ ");
  for(i=0; i<lenArr; i++){
    printf("%d ", arr[i]);
  }
  printf(" ]\n");
}

//#2
double avgArr(int *arr, int lenArr){
  int j;
  double sum;
  for(j=0; j<lenArr; j++){
    sum += *(arr+j);
  }
  return sum/lenArr;
}

void copyArr(int *arr, int *arr1, int lenArr){
  int k;
  for(k=0; k<lenArr; k++){
    *(arr1+k) = *(arr+k);
  }
}

int main(){
  int lenArr = 10;
  int arr[lenArr];
  

  int i;
  srand(time(NULL));
  for(i=0; i<lenArr; i++){
    arr[i]=rand();
  }

  //#1
  printArr(arr, lenArr);
  printf("\n");

  //#2
  printf("avg: %f", avgArr(arr, lenArr));
  printf("\n\n");

  //#3
  int arr1[lenArr];
  copyArr(arr, arr1, lenArr);
  printArr(arr1, lenArr);

  return 0;
}