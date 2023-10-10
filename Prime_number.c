/*Prime number

Please enter a number to check: 11
This is prime*/

#include<stdio.h>

int main(){
    int n, i=1, j;

    printf("Please enter a number to check: ");
    scanf("%d", &n);

    if(n>1){
        for(j=2; j<n; j++){
            if(n%j==0){
                i=0;
                break;
            }
        }
        if(i==1){
            printf("This is prime");
        }
        else{
            printf("This is not prime");
        }
    }
    else{
        printf("Please enter number greater than 1");
    }

    return 0;
}

