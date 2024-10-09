#include <stdio.h>

int main(){
    long count;

    count = 0;
    while(getchar() != EOF){
        ++count;
        printf("%d\n", count);
    }
}