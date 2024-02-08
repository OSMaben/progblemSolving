#include <stdio.h>


void merge(int arr[], int low, int mid, int high)
{
    int i , j , k;

    //this is used start from the biggning of the array
    int n1 = mid - low + 1;
    //this is used to start from the middel of the array to the end of the array 
    int n2 = high - mid;
    int left[n1];
    int right[n2];

    for(i = 0; i < n1 ; i++)
        left[i] = arr[low + i];
    for(j = 0; j < n2 ; j++)
        right[j] = arr[mid + 1 + j];
    
    i = 0;
    j = 0;
    k = low;

    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i]; 
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }

}


void mergeSort(int arr[] , int low, int hight)
{
    // we check if there is more then one element inside if the array
    if(low < hight)
    {
        int mid = (low + hight) / 2;
        mergeSort(arr, low , mid);
        mergeSort(arr, mid + 1 , hight);
        merge(arr, low , mid, hight);
    }
}

int main()
{
    int arr[10] = {41,23,1,2,54,9,0,2,6,12};
    int sizeOfArr = sizeof(arr)/ sizeof(arr[0]);

    printf("here is the given array \n");
    for(int i = 0 ; i < sizeOfArr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("here is the merge Sorted Array \n");

    mergeSort(arr, 0 , sizeOfArr - 1);
    for(int j = 0 ; j < sizeOfArr; j++)
    {
        printf("%d ", arr[j]);
    }

    printf("\n");
}