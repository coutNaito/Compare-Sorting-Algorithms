void selection(int x[],int n){
  clock_t tic = clock();
  int swap_count=0;
  int i, j, mi;
  for(i=0;i<n-1;i++){
    mi = i;
    for (j = i+1; j < n; j++){
      if(x[j] < x[mi])  mi = j; 
    }
    swap(&x[i],&x[mi]);
    swap_count++;
    //display(x,n);
	}
  clock_t toc = clock();
  printf("Selectionsort swap %d time\n",swap_count);
  printf("Running Time: %f milliseconds\n", ((double)(toc - tic) / CLOCKS_PER_SEC)*1000);
}