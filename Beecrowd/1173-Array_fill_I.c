#include <stdio.h>

int main(){
    int n, arr[10];
    scanf("%d", &n);

    for(int i = 0; i < 10; i++){
        arr[i] = n;
        printf("N[%d] = %d\n", i, n);
        n *= 2;
    }

    return 0;
}