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

    // selection sort
    for(i=0; i<size-1; i++){
        int small = i;
        for(j=i+1; j<size; j++){
            if(ary[small] > ary[j])
                small = j;
        }
        //swap values
        temp = ary[small];
        ary[small] = ary[i];
        ary[i] = temp;
    }

    // print sorted array
    printf("\nSorted array is: ");
    for(i=0; i<size; i++)
        printf("%d ", ary[i]);

    return 0;
}
