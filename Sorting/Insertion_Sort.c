#include<stdio.h>

// input function of array
void inputArray(int ary[], int size){

    printf("Enter the values of array: ");
    for(int i=0; i<size; i++)
        scanf("%d", &ary[i]);
    printf("\n");
}

// print function of array
void printArray(int ary[], int size){

    printf("Array is: ");
    for(int i=0; i<size; i++)
        printf("%d ", ary[i]);
    printf("\n");
}

int main(){

    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int myAry[size];

    inputArray(myAry, size);
    printArray(myAry, size);

    // insertion sort
    for(int i=1; i<size; i++){
        int current = myAry[i], j;

        for(j=i-1; j>= 0 && current < myAry[j]; j--)
            myAry[j+1] = myAry[j];

        myAry[j+1] = current;
    }

    printf("Sorted ");
    printArray(myAry, size);

    return 0;
}
