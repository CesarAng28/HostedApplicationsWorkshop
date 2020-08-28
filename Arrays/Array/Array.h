//
//  Array.h
//  
//
//  Created by Cesar Angeles on 24/08/2020.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>

/* Set EXTERN macro: */

#ifndef Array_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


typedef struct Array_holder{
    float * data;
    size_t size;
    size_t used;
}Array_holder;


/* Function prototypes. */

static void Array_holder_copy(Array_holder * source, Array_holder * copy);

/*
 *
 * The function Array_holder_copy copies the values and state of a Array_holder source to a destination.
 *
 * @params
 *      source (Array_holder *):
            Input array_holder structure
        copy (Array_holder *):
            Copied data structure

 
        
 * @returns
        void
*/




EXTERN Array_holder * Array_holder_new(size_t size);

/*
 *
 * The function Array_holder_new allocates and initialises an Array_holder structure. The data section contains float values.
 *
 * @params
 *      size (size_t):
            Amount of data allocated
        
 * @returns
        Array_holder.
*/



EXTERN Array_holder * Array_holder_grow(Array_holder * array, size_t new_size);


/*
 *
 * The function Array_holder_grow generates a new Array_holder structure with the previous values copied and with extra data memory in new_size.
 *
 * @params
 *      array (Array_holder *):
            Array structure to be grown
        new_size (size_t):
            New data memory size
 
        
 * @returns
        Array_holder *
       
*/

EXTERN void * Array_holder_free(Array_holder * array);

/*
 *
 * The function Array_holder_free deletes and frees the array memory.
 *
 * @params
 *      array (Array_holder *):
            Array_holder to be freed
        
 * @returns
        void *.
*/

EXTERN size_t Array_holder_lookfor(Array_holder * array, float data);

/*
 *
 * The function Array_holder_lookfor looks for the index of the first data value to be found. Otherwise, it returns -1.
 *
 * @params
 *      array (Array_holder):
            Array_structure where to look for
        data (float):
            Looked for value
        
 * @returns
        size_t
            Index of found value.
*/

EXTERN void Array_holder_push(Array_holder * array, float value);


/*
 *
 * The function array_holder_push Introduces a new value to its data array.
 *
 * @params
 *      array (Array_holder *):
            Array holder
        value (float):
            value to be pushed to the structure
        
 * @returns
        void.
*/

EXTERN float Array_holder_pop(Array_holder * array);


/*
 *
 * The function Array_holder_pop returns the last value introduced if any.
 *
 * @params
 *      array (Array_holder *):
            Retrieving array_holder
        
 * @returns
        void.
*/



EXTERN float Array_holder_dot(Array_holder * array1, Array_holder * array2);

/*
 *
 * The function Array_holder_dot calculates the dot product between two data similar array_holders.
 *
 * @params
 *      array1 (Array_holder *):
            first array
 *      array2 (Array_holder *):
            second array
        
 * @returns
        float
            dot product value
*/

EXTERN void Array_holder_print(Array_holder * array1);

/*
 *
 * The function Array_holder_dot calculates the dot product between two data similar array_holders.
 *
 * @params
 *      array1 (Array_holder *):
            first array
 *      array2 (Array_holder *):
            second array
        
 * @returns
        float
            dot product value
*/


#endif /* Array_h */
