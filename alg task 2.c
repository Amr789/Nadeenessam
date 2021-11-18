#include <stdio.h>
#include <time.h>

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int tmp = arr[i];
    int j = i - 1;

    
    while (tmp < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = tmp;
  }
}


void quickSort(int arr[], int low, int high) {
  if (low < high) {
    

    int pi = partition(arr, low, high);
    
    quickSort(arr, low, pi - 1);
    
    quickSort(arr, pi + 1, high);
  }
}


 int main() {
	float	clock_t, start_t, end_t, total_t;
	float 	clock_h, start_h, end_h, total_h;
   	int y;
   	int l;
  int arr[100000] [100000];
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Elements before sorting:\n");
  start_t = clock();
   printf("Starting of the program, start_t = %ld\n", start_t);
   printf("Going to scan a big loop, start_t = %ld\n", start_t);
   for(y=0; y< 100000; y++) {
   }
  display(arr, n);
  insertionSort(arr, n);
  end_t = clock();
   printf("End of the big loop, end_t = %ld\n", end_t);
   total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f\n", total_t  );
   printf("Exiting of the program...\n");
  printf("Elements after sorting:\n");
  display(arr, n);
  
  
  start_h = clock();
   printf("Starting of the program, start_h = %ld\n", start_h);
   printf("Going to scan a big loop, start_h = %ld\n", start_h);
   for(l=0; l< 100000; l++) {
   }
  quickSort(arr, 0, n - 1);
  display(arr, n);
  end_t = clock();
   printf("End of the big loop, end_t = %ld\n", end_h);
   total_t = (double)(end_h - start_h) / CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f\n", total_h  );
   printf("Exiting of the program...\n");
}






