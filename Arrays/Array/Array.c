//
//  Array.c
//  
//
//  Created by Cesar Angeles on 24/08/2020.
//
#define Array_IMPORT

#include <stdio.h>
#include <stdlib.h>

#include "Array.h"


static void Array_holder_copy(Array_holder * source, Array_holder * copy){
    
    size_t index = 0;
    
    if(source == NULL || copy == NULL){
        puts("Empty Array Error");
        return;
    }
    if(source->used > copy->size){
        puts("Sizes Not Matching Error");
        return;
    }
    
    for(index = 0; index < source->used; index++){
        copy->data[index] = source->data[index];
    }
    copy->used = source->used;
    
    
}

EXTERN Array_holder * Array_holder_new(size_t size){
    
    Array_holder * my_array = NULL;
    
    my_array = (Array_holder *)malloc(sizeof(Array_holder));
    
    my_array->data = (float *)malloc(sizeof(float)*size);
    my_array->size = size;
    my_array->used = 0;
    
    return my_array;
    
}


EXTERN Array_holder * Array_holder_grow(Array_holder * array, size_t new_size){
    
    Array_holder * new_array = NULL;
    
    if(array == NULL){
        puts("Empty Array Error");
        return NULL;
    }
    if(array->size > new_size){
        puts("New Size Smaller Than Previous");
        return NULL;
    }
    
    
    new_array = Array_holder_new(new_size);
    Array_holder_copy(array, new_array);
    
    return new_array;
    
}



EXTERN void * Array_holder_free(Array_holder * array){
    
    free(array);
    array = NULL;
    return array;
    
}

EXTERN size_t Array_holder_lookfor(Array_holder * array, float data){
    
    int index = 0;
    if(array == NULL){
        puts("Empty array function");
        return -1;
    }
    
    for(index = 0; index < array->used; index++){
        if(array->data[index] == data)
            return index;
    }
    return -1;
    
}

EXTERN void Array_holder_push(Array_holder * array, float value){
    
    if(array->used < array->size){
        array->data[array->used] = value;
        array->used +=1;
    }else{
        puts("Not Enough Memory");
    }
    
}


EXTERN float Array_holder_pop(Array_holder * array){
    
    if(array->used == 0){
        puts("Nothing to Pop");
        return 999;
    }
    
    return array->data[array->used-1];
    
}


EXTERN float Array_holder_dot(Array_holder * array1, Array_holder * array2){
    
    size_t index = 0;
    float dot = 0;
    if(array1->used != array2->used){
        puts("ERROR");
        return 999;
    }
    for(index = 0; index <= array1->used; index ++){
        dot += array1->data[index] * array2->data[index];
    }
    return dot;
    
}

EXTERN void Array_holder_print(Array_holder * array1){
    
    size_t index = 0;
    if(array1 == NULL){
        puts("Empty Array");
        return;
    }
    
    for(index = 0; index<array1->used; index ++){
        printf("Value %zu: %f\n", index, array1->data[index] );
        
    }
    
}
