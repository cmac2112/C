#include <stdio.h>
int main() {
    char* test = "test";
    char** p = &test;
    char*** x = &p;
    printf(**x);
    return 0;
}
// test points to the string test
// p points to test
// x points to p 

// values are dereferenced and printed

//dereferencing a points means accessing the value that it points to
