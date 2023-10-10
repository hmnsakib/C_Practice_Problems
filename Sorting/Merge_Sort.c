#include<stdio.h>

//Conquer Part
void conquer(int ary[], int sIndex, int mid, int eIndex, int size){
    //int merged[size];
    int size1=mid-sIndex+1;
    int size2=eIndex-mid;

    int ary1[size1];
    int ary2[size2];

    for(int i=0; i<size1; i++){
        ary1[i]=ary[sIndex+i];
    }
    for(int j=0; j<size2; j++){
        ary2[j]=ary[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=sIndex;

    while(i<size1 && j<size2){
        if(ary1[i]<=ary2[j]){
            ary[k]=ary1[i];
            i++;
        }
        else{
            ary[k]=ary2[j];
            j++;
        }
        k++;
    }
    while(i<size1){
        ary[k]=ary1[i];
        i++;
        k++;
    }
    while(j<size2){
        ary[k]=ary2[j];
        j++;
        k++;
    }
}

// Divide Part
void divide(int ary[], int sIndex, int eIndex, int size){
    if(sIndex < eIndex){
            int mid = sIndex+(eIndex-sIndex)/2;
            divide(ary, sIndex, mid, size);
            divide(ary, mid+1, eIndex, size);
            conquer(ary, sIndex, mid, eIndex, size);
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

    //Merge Sort
    divide(ary, 0, size-1, size);

    // print sorted array
    printf("\nSorted array is: ");
    for(i=0; i<size; i++)
        printf("%d ", ary[i]);

    return 0;
}
