#include <stdio.h>
int mdc(int n1, int n2){
    if(n2 == 0){
        return n1;
    }
    return mdc(n2, n1 % n2);

}

int main(){
    printf("%d", mdc(32, 60));
    return 0;
}