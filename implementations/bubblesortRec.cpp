 /* BUBBLE SORT PROGRAM IN C USING RECURSION */
#include <stdio.h>
#include <stdlib.h>
  /* To sort the given numbers in ascending order */
  void bubbleSort(int data[], int n) {
        int i, temp;
        if (n > 0) {
                for (i = 0; i < (n-1); i++) {
                        if (data[i] > data[i+1]) {
                                temp = data[i+1];
                                data[i+1] = data[i];
                                data[i] = temp;
                        }
                }
                bubbleSort(data, n - 1);
        }
        return;
  }
  int main() {
  int i;
  int data[5] = {6,5,4,3,2};
  int n = 5;
         /* sorts the given numbers */
        bubbleSort(data, 5);
        /* print the sorted numbers */
        printf("Sorted array:\n");
        for (i = 0; i < n; i++) {
                printf("%d ", data[i]);
        }
        printf("\n");
        return 0;
  }
