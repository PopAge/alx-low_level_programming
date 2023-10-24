#include "main.h"
#include <stdlib.h>
/**
 * function that allocates memory using malloc.
 * @b: size to allocate 
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b) {
    void *mem = malloc(b);
    if (mem == NULL) {
        exit(98);
    }
    return mem;
}
