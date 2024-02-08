#include <stdio.h>

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
    int i, low, high, mid, n, key, array[100];
    printf("Enter number of elementsn");
    scanf("%d",&n);
    
    printf("Enter %d integersn", n);
    for(i = 0; i < n; i++)
    scanf("%d",&array[i]);
    
    printf("Enter value to findn");
    scanf("%d", &key);
    
    low = 0;
    high = n - 1;
    int *sortedArray = bsort(array, n);
    mid = (low+high)/2;
    while (low <= high) {
        if(sortedArray[mid] < key)
            low = mid + 1;
        else if (sortedArray[mid] == key) {
            printf("%d found at location %d.n", key, mid+1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high)/2;
    }

    printf("\n");
    
    return 0;
}