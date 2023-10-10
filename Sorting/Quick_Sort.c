#include<stdio.h>

//Conquer Part
int partition(int ary[], int low, int high){
    int pivot=ary[high];
    int i=low-1;

    for(int j=low; j<high; j++){
        if(ary[j]<pivot){
            i++;
            int temp=ary[i];
            ary[i]=ary[j];
            ary[j]=temp;
        }
    }

    i++;
    int temp=ary[i];
    ary[i]=pivot;
    ary[high]=temp;

    return i;
}

// Divide Part
void quickSort(int ary[], int low, int high){
    if(low<high){
        int pidx=partition(ary, low, high);

        quickSort(ary, low, pidx-1);
        quickSort(ary, pidx+1, high);
    }
}

int main(){
    // creating array
    int size, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int ary[size];

    // input array
    printf("Enter the values of array: ");
    for(i=0; i<size; i++)
        scanf("%d", &ary[i]);

    // print main array
    printf("Main array is: ");
    for(i=0; i<size; i++)
        printf("%d ", ary[i]);

    //QuickSort
    quickSort(ary, 0, size-1);

    // print sorted array
    printf("\nSorted array is: ");
    for(i=0; i<size; i++)
        printf("%d ", ary[i]);

    return 0;
}
