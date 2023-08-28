
#include <stdio.h>
#include <math.h>
#include <time.h>

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

int main()
{

    time_t inicio;
    inicio = time(NULL);
    int a=0;
    while(difftime(time(NULL), inicio) < 60){
        a++;
        if(primo(a)){
            printf("%d - A\n", a);
        }
    }
    return 0;
}
