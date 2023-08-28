#include <stdio.h>
#include <math.h>
int primo(int n){
    if(n < 2){
        return 0;
    }
    for(int x = 2; x <= sqrt(n); x++){
        if(n % x == 0){
            return 0; 
        }
    }
    return 1;
}
int decompoePrim(int n){
    int cont = 2;
    while(n != 1){
        if(primo(cont)){
            if(n % cont == 0){
                n = n / cont;
                printf("%d\n", cont);
                cont = 2;
            }
        }
        if(n % cont != 0){
            cont += 1;
        }
    }
    return n;
}

int main(){
    decompoePrim(12);
    return 0;
}