#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <time.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

int main(int argc, char **argv){

  clock_t tic = clock();
  int i,N,*a,*b,*c;
  char op[15];
  N=argc-2; 
  a=(int*) malloc(sizeof(int)*N);
  b=(int*) malloc(sizeof(int)*N);
  c=(int*) malloc(sizeof(int)*N);
  printf("argument= %d\n",argc);
  for(i=2;i<argc;i++){
    a[i-2]=atoi(argv[i]);
    b[i-2]=atoi(argv[i]);
    c[i-2]=atoi(argv[i]);
  }
  //strcpy(op, argv[1]);
  //printf("%s",op);
  
  
  BubbleSort(a,N);
  printf("======================\n");
  insertSort(b,N); 
  printf("======================\n");
  selection(c,N);
  printf("======================\n");


  printf("BubleSorted\n");
  for(i=0;i<N;i++){
    printf("%3d ",a[i]);
  }
  printf("\n\n");
  
  printf("InsertSorted\n");
  for(i=0;i<N;i++){
    printf("%3d ",b[i]);
  }
  printf("\n\n");

  printf("SelectionSorted\n");
  for(i=0;i<N;i++){
    printf("%3d ",c[i]);
  }
  printf("\n\n");

bye:
  printf("\n=============");
  //clock_t toc = clock();
  //printf("\nRunning Time: %f milliseconds\n", ((double)(toc - tic) / CLOCKS_PER_SEC)*1000);
  printf("\n");
}


