#include <stdio.h>
#include <stdbool.h>

bool isStrictlyIncreasing(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int *bsort(int arr[], int n) {  
  int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (arr[j] > arr[j + 1]) {  
        int temp = arr[j];  
        arr[j] = arr[j + 1];  
        arr[j + 1] = temp;  
      }  
    }  
  }  

  return arr;
}  

int main()
{
    int length;
    scanf("%d", &length);
    int n = 0;
   for (int i = 0; i < length; i++) {
        scanf("%d", &n);  
        int arr[n];

        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]); 
        }

        int *result = bsort(arr, n);


        if(isStrictlyIncreasing(result, n) == true)
        {
            printf("%s", "YES\n");
        }else
        {
            printf("%s", "No\n");

        }
   }
}

