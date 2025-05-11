#include <stdio.h>

#define STRUNG_IMPLEMENTATION
#include "strung.h"


int main(void){
    Strung strung; 
    
    strung_init(&strung, 30);    
    strung_append(&strung, "Hello, world!");
    strung_insert_string(&strung, "duck you and you and you and you", strung.size);
    
    printf("%s \n", strung.data);
    printf("%i \n", strung.size);
    printf("%i \n", strung.capacity);

    return 0;
}