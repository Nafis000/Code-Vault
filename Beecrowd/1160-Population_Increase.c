#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int num;
        int sum = 0;

        scanf("%d", &num);

        for(int j = 1; j < num; j++){
            if(num % j == 0){
                sum += j;
            }
        }

        if(num == sum){
            printf("%d eh perfeito\n", num);
        }
        else{
            printf("%d nao eh perfeito\n", num);
        }    
    }

    return 0;
}