#include <stdio.h>

int *sortArray(int *arr, int m)
{

    int i = 0;
    while(i < m)
    {
        int j = 0;
        while(j < m - i - 1)
        {   
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }   

        i++;
    }

    return arr;
}


int *merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    nums1Size = m + n;
    nums2Size = n;

    for(int i = 0; i < nums1Size; i++)
    {
        if(nums1[i] == 0)
        {
            for(int j = 0; j < nums2Size ; j++)
            {
                nums1[i] += nums2[j];
                i++;
            }
        }
    }

    return nums1;
}   

int main()
{

    int nums1[] = {1,2,3, 0,0,0};
    int nums2[] = {2,5,6};
    int m = 6;
    int n = 3;
    int nums1Size =  m + n;
    int nums2Size = n;

    int *result = merge(nums1, nums1Size, m , nums2, nums2Size , n);
    int *finnaly = sortArray(result, nums1Size);
    for(int i = 0; i < m ; i++)
    {
        printf("%d",finnaly[i]);
    }
    printf("\n");

    
    //block of code here
}