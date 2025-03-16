#include <stdio.h>
#include <stdlib.h>
void insertionsort(int a[],int n){
    int temp,j,i;
    for(i=1;i<n;i++){
        j=i-1;
        temp=a[i];
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]= temp;

    }
 }


int main()

{
    int size,i;
    int arr[]={12,31,25,8,32,17,40,42};
    size=sizeof(arr)/sizeof(arr[0]);
    printf("element in the array before insertion are:\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    insertionsort(arr,size);
    printf("element in the array after insertion sort are:\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
