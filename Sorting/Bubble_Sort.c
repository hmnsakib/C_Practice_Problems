#include<stdio.h>

int main(){
    // creating array
    int size, i, j, temp;
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

    // bubble sort
    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(ary[j] > ary[j+1]){
                //swap values
                temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
            }
        }
    }

    // print sorted array
    printf("\nSorted array is: ");
    for(i=0; i<size; i++)
        printf("%d ", ary[i]);

    return 0;
}
