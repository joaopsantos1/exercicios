#include <stdio.h>

int main() {
    int a, b, c;
    int mdc;
    scanf("%d %d", &a, &b);
      if(a > b){
        c = b;
    }
    else{
        c = a;
    }
    for(int i = 1; i <= c; i++){
       if(a % i == 0 && b % i == 0){
           mdc = i;
       }
    }
    printf("%d", mdc);
    

    return 0;
}