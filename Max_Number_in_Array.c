/*Max number in array

Count of number to compare: 3
Enter the values of array: 12 13 14
Maximum is: 14*/

#include<stdio.h>

int main(){

    int i, n, max;
    printf("Count of number to compare: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the values of array: ");
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i=1; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }

    printf("Maximum is: %d", max);
    return 0;
}
