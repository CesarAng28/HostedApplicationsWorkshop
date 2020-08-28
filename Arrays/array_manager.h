//
//  array_manager.h
//  
//
//  Created by Cesar Angeles on 12/08/2020.
//

#ifndef array_manager_h
#define array_manager_h


/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef array_manager_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

#define MAX_SIZE 100

/* Types declarations. */

typedef struct array_manager_static_memory{
    
    float * memory;
    size_t data_memory;
    
}array_manager_static_memory;

typedef struct array_manager_linker{
    
    array_manager_static_memory * lmemory [];
    size_t links;
    
}array_manager_linker;


/* Global variables declarations. */


/* Function prototypes. */


/*
 *
 * The function array_manager_static_memory_new allocates and initialises a static_memory.
 *
 * @params
 *      size (size_t):
            Amount of memory allocated
        
 * @returns
        array_manager_static_memory.
*/

EXTERN array_manager_static_memory * array_manager_new(size_t size);


/*
 *
 * The function array_manager_static_memory_free deallocates
 * memory space of a array_manager_static_memory structure.
 *
 * @params
 *     memory (* array_manager_static_memory):
            array_manager_static_memory struct.

 * @returns
        void
*/


EXTERN void array_mamager_free(array_manager_static_memory * memory);


/*
 *
 * The function array_manager_static_memory_mem returns the
 * amount of memory space of a array_manager_static_memory structure.
 *
 * @params
 *     number (* array_manager_static_memory):
            array_manager_static_memory.

 * @returns
        allocated memory
*/


EXTERN size_t array_manager_static_memory_mem(array_manager_static_memory * memory);

/*
 *
 * The function array_manager_static_memory_copy copies an array of buffere data (buffer) within a static memory array_manager_static_memory object
 *
 * @params
 *     n (size_t):
            Amount of memory in bytes of the copied buffer
 *     buffer ( ** float):
            Memory address of the buffer
 *     memory ( * array_manager_satic_memory):
            array_manager_static_memory target

 * @returns
        allocated memory
*/


EXTERN void array_manager_static_memory_copy(size_t n, * float[n] buffer, array_manager_static_memory * memory);

/*
 *
 * The function array_manager_static_link joins two memory elements for them to be accessed sequentially
 *
 * @params
 *     memory1 (* array_manager_static_memory):
            Amount of memory in bytes of the copied buffer
 *     memory2 (* array_manager_static_memory):
            Memory address of the buffer


 * @returns
        ____ defined by you
*/

EXTERN ____ array_manager_static_link(array_manager_static_memory * memory1, array_manager_static_memory * memory2);


#undef array_manager_IMPORT
#undef EXTERN



#endif /* array_manager_h */
