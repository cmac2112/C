#include <stdio.h>
int main(int argc, char* argv[]) {
    printf("program name: %s\n", argv[0]);
    if (argc > 1) {
        printf("argument: %s\n", argv[1]);
    } else {
        printf("no arguments provided\n");
    }
    //testtesttest
    printf("hello, worldssssss\n");
    return 0;
}