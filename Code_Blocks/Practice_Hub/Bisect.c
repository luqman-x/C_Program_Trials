#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int found;
    int index;
    int value;

} Results;
Results Bin_Sect(int array[], int size, int target)
{
    Results Res;
    Res.found = -1;
    Res.index = 0;
    Res.value = 0;

    int left = 0;
    int right = size -1;


    while(left<= right)
    {
        int mid = left +(right - left)/2 ;
        if(target == array[mid]){
            Res.found = 1;
            Res.index = mid;
            Res.value = array[mid];
            return Res;

        }else if(target > array[mid]){
           left = mid + 1;
        }else{
            right = mid -1;
         }

    }
    Res.found = 0;
    Res.index = left;
    Res.value = target;
    return Res;
}
int main()
{

    int target;
    int array[] = {60, 72, 85, 98, 110};

    int size = sizeof(array)/sizeof(array[0]);

    printf("Enter the new number:\n");

    if(scanf("%d", &target) != 1){
        printf("Invalid Input.\nNot number\n");
        while(getchar()!= '\n');
    }

    Results get = Bin_Sect(array, size, target);
    if(get.found == 1){
        printf("The value %d, was found at index %d", get.value, get.index);

    }else
    {
        printf("Value not found\nIt should have been at index %d", get.index);
    }

return 0;
}
