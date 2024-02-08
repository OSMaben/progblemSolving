#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
  if(numsSize == 0) return 0;
        int j = 0;
        int i = 0;
        while(j < numsSize - 1)
        {   
            if(nums[j] != nums[j + 1])
            {
                nums[i] = nums[j];                
                i++;
            }
            j++;
        }
        nums[i++] = nums[numsSize - 1];

    return  i;
}


int main()
{

    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    int result = removeDuplicates(arr, sizeOfArr);

    int i = 0;
    printf("result is %d\n", result);
    printf("sizeof is %d\n", sizeOfArr);
    printf("[");

    while(i < sizeOfArr)
    {
        if(i < result)
        {
            printf("%d", arr[i]);
        }else
        {
            printf("_");
        }

        if(i + 1 < sizeOfArr)
        {
            printf(",");
        }
        i++;
    }

    

    printf("]\n");
}   




