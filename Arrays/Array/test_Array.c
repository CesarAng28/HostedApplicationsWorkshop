//
//  test_Array.c
//  
//
//  Created by Cesar Angeles on 24/08/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "test_Array.h"
#include "Array.h"

#define MAX 1000
#define INIT_SIZE 10


int main(void){
    
    
    
    size_t index = 0;
    Array_holder * my_array = NULL;
    
    my_array = Array_holder_new(INIT_SIZE);
    
    
    for(index = 0; index < MAX; index++){
        if(my_array->used < my_array->size){

            puts("IF");
        }else{
            my_array = Array_holder_grow(my_array, ceil((my_array->size)*1.5));
            puts("ELSE");
        }
        Array_holder_push(my_array, index);
    }
    Array_holder_print(my_array);
    
}
