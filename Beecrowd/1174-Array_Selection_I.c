#include <stdio.h>

int main(){
    double arr[100];

    for(int i = 0; i<100; i++){
        scanf("%lf", &arr[i]);
    }

    for(int j = 0; j<100; j++){
        if(arr[j] <= 10){
            printf("A[%d] = %.1lf\n", j, arr[j]);
        }
    }

}