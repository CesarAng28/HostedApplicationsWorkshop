//
//  complex_number.h
//  
//
//  Created by Cesar Angeles on 12/08/2020.
//

#ifndef complex_number_h
#define complex_number_h


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

#ifndef complex_number_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

#define complex_number_PI 3.14159

/* Types declarations. */

typedef struct complex_number{
    float real;
    float imag;
}complex_number;


/* Global variables declarations. */


/* Function prototypes. */


/*
 *
 * The function complex_number_new allocates and
 * initialises a complex number.
 *
 * @params
 *      real (float):
            Real representation of the number.
        imag (float):
            Imaginary representation of the number.

 * @returns
        * complex_number.
*/


EXTERN complex_number * complex_number_new(float real, float imag);




/*
 *
 * The function complex_number_free deallocates
 * memory space of a complex_number structure.
 *
 * @params
 *     number (* complex_number):
            complex_number struct.

 * @returns
        void
*/


EXTERN void complex_number_free(complex_number *number);






/*
 *
 * The function complex_number_memory returns the
 * amount of memory space of a complex_number structure.
 *
 * @params
 *     number (* complex_number):
            complex_number struct.

 * @returns
        allocated memory (size_t)
*/


EXTERN size_t complex_number_memory(complex_number *number);

#undef complex_number_IMPORT
#undef EXTERN
#endif /* complex_number_h */
