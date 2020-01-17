#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<math.h>

void insertion_sort(int size, int *arr);

int main(){
    int size;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort(size, arr);
}

void insertion_sort(int size, int* arr){
    int i,t,v;
    i = size -2; //second last element index
    v= arr[size - 1]; //last element

    while(i>=0){
        if (v<arr[i])
        arr[i+1] = arr[i];
        else {
        arr[i+1] = v;
        break;
            }
            i--;



            for(t=0;t<size ;t++){
                printf("%d ",arr[t]);
            }
            printf("\n");
            
    }

    if (i == -1)
    arr[i+1] = v;

    for(t=0;t<size;t++)
    printf("%d ",arr[t]);

}
