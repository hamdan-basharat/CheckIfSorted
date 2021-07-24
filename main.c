#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, i, size=0, x;
    printf("Please input the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Please input an array of integers: \n");
    for(i=0;i<size;i++){
        scanf("%d", &array[i]);
    }
    check_sort(array, size);
    return;
}
void check_sort(int a[], int size)
{
   int i, flag=0;
   for(i=0;i<size;i++){
        if(a[i]<=a[i+1]){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
   }
   if(flag==1){
        printf("The array is not sorted");
   }
   else{
        printf("The array is sorted");
   }
   return;
}


