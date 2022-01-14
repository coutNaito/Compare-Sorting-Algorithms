void swap(int *x,int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;
}

void display(int x[],int n){
  int i;
  for(i=0;i<n;i++) printf("%3d ",x[i]);
  printf("\n");
}

float BubbleSort(int x[],int n){
  clock_t tic = clock();
  int i,j,count;
  int swap_count=0;
  float time;
  for(j=0; j< n-1; j++){
    count = 0;
    for(i=0;i< n-(j+1) ;i++){
      if(x[i]>x[i+1]){
        count++;
        swap_count++;
        swap(&x[i],&x[i+1]);
      }
    }
    if(count==0) break;
    //display(x,n);
  }
  clock_t toc = clock();
  printf("Bubblesort swap %d time\n",swap_count);
  printf("Running Time: %f milliseconds\n", ((double)(toc - tic) / CLOCKS_PER_SEC)*1000);
  return time;
  
}