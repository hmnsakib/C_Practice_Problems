#include<stdio.h>
// binary search function
int binarySearch(int ary[], int sVlu, int low, int high){
    while(low<=high){
        int mid=low+(high-low)/2;

        if(ary[mid]==sVlu)
            return mid;
        else if(ary[mid]<sVlu)
            low=mid+1;
        else
            high=mid-1;
    }

    return -1;
}

int main(){
    // creating array
    int size, i, sVlu;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int ary[size];

    // input array
    printf("Enter the values of array: ");
    for(i=0; i<size; i++)
        scanf("%d", &ary[i]);

    // search element
    printf("Enter the element you want to search: ");
    scanf("%d", &sVlu); //sVlu=Search Value

    // search result
    int result = binarySearch(ary, sVlu, 0, size-1);

    if(result == -1)
        printf("%d not found in array!", sVlu);
    else
        printf("%d found at position: %d", sVlu, result+1);
    return 0;
}
