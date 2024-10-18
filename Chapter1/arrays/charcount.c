# include <stdio.h>

int main(){
    int c;
    int nwhite;
    int nother;
    int i;
    int ndigit[10]; /* initializing an array sizeof 10*/

    nwhite = 0;
    nother = 0;

    /* set all indexes of the array to 0*/
    for(i = 0; i < 10; i++){
        ndigit[i] = 0;
    }
    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            ++ndigit[c - '0']; /* increment digit counter at specific index*/
        }else if(c == ' ' || c == '\n' || c == '\t'){
            ++nwhite; /*increment whitespace counter*/
        }else{
            ++nother;
        }
    }
    printf("digits =");
    for(i = 0; i < 10; i++){
        printf(" %d", ndigit[i]);
    }
    printf(", whitespace = %d, other = %d\n", nwhite, nother);
    return 0;
}
/* enter numbers or letters, hit enter, hit ctrl + z, hit enter*/