#include<stdio.h>
// linear search function
int linearSearch(int ary[], int size, int sVlu){
    for(int i=0; i<size; i++){
        if(ary[i]==sVlu)
            return i;
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
    int result = linearSearch(ary, size, sVlu);

    if(result == -1)
        printf("%d not found in array!", sVlu);
    else
        printf("%d found at position: %d", sVlu, result+1);
    return 0;
}
