#include <stdio.h>

#define IN 1
#define OUT 0 /*inside or outside a word*/
int main(){
    int cha, nl, nw, nc, state;

    state = OUT;

    nl = nw = nc = 0;

    while((cha = getchar()) != EOF){
        ++nc;
        if (cha == '\n'){
            ++nl;
        };
        if (cha == ' ' || cha == '\n' || cha == '\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}