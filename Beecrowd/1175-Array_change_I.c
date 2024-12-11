#include <stdio.h>

int main(){

    int arr[20];

    for(int i = 0; i<20; i++){
        scanf("%d", &arr[i]);
    }

    for(int j = 0; j<20; j++){
        printf("N[%d] = %d\n",j, arr[19-j]);
    }

    return 0;
}