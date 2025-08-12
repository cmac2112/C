#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i = 10; // on the stack
    char *pBuffer;

    for(int k = 0; k < i; k++){

        char buffer[500]; //create a 500 char array on the stack

        pBuffer = malloc(500 * sizeof(char)); //500 bytes on the heap

        sprintf(buffer, "stack buffer iteration %d", k);
        sprintf(pBuffer, "Heap buffer iteration %d", k);
        printf("Iteration %d:\n", k);
        printf("  Stack buffer: %s (address: %p)\n", buffer, (void*)buffer);
        printf("  Heap buffer:  %s (address: %p)\n", pBuffer, (void*)pBuffer);
        printf("\n");
        
        // Stack memory is automatically freed when leaving scope
        // Heap memory must be manually freed
        free(pBuffer);
        
}


}