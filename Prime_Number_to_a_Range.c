/*Prime number to a range

Please enter a number of range to print: 20
2 3 5 7 11 13 17 19
Count: 8*/

#include<stdio.h>

int main(){
    int rng, n, i, j, c=0;

    printf("Please enter a number of range to print: ");
    scanf("%d", &rng);

    if(rng>1){
        for(n=2; n<=rng; n++){
            i=1;

            for(j=2; j<n; j++){
                if(n%j==0){
                    i=0;
                    break;
                }
            }
            if(i==1){
                printf("%d ", n);
                c++;
            }
        }
        printf("\nCount: %d", c);
    }
    else{
        printf("Please enter number greater than 1");
    }

    return 0;
}

