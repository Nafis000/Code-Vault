#include <stdio.h>

int main(){
    
    int x;

    while(1){
        int sum = 0;

        scanf("%d", &x);      

        if (x == 0){
            break;
        }
        else if(x % 2 != 0){
            x += 1;
        }

        for (int i = x; i < x+10; i++){
             if(i % 2 == 0){
                sum += i;
             }
        }  
        printf("%d\n", sum);
    }
    

    return 0;
}