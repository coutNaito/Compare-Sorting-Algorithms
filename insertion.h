void insertSort(int x[], int n)
{
  clock_t tic = clock();
  int swap_count=0;
  int i, j, value;
  for(i = 1; i < n; i++){
    value = x[i];
    for (j = i - 1; j >= 0 && x[j] > value ; j--){
      x[j + 1] = x[j];
      swap_count++;
      //display(x,n);
    }
    x[j + 1] = value;
    //display(x,n);
    //printf("==================\n");
  }
  clock_t toc = clock();
  printf("Insertionsort swap %d time\n",swap_count);
  printf("Running Time: %f milliseconds\n", ((double)(toc - tic) / CLOCKS_PER_SEC)*1000);
}