#include<stdio.h>

int main(){
    int i, n, sum=0;
    printf("Enter the N^th number: ");
    scanf("%d", &n);

    //creating series
    int ary[n];
    for(i=1; i<=n; i++){
        if(i%2!=0)
            ary[i-1]=i;
        else
            ary[i-1]=i*-1;
    }

    //printing series
    for(i=0; i<n; i++){
        printf("%d, ", ary[i]);
    }

    //calculating sum
    for(i=0; i<n; i++){
        sum+=ary[i];
    }

    printf("\nSum = %d\n", sum);
}
