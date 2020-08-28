//
//  test_complex_number.h
//  
//
//  Created by Cesar Angeles on 13/08/2020.
//

#ifndef test_complex_number_h
#define test_complex_number_h

/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/
#include "complex_number.h"

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef test_complex_number_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


#define TEST_COMPLEX_NUMBER_REAL 1.00
#define TEST_COMPLEX_NUMBER_IMAG 2

typedef enum{
    REAL,
    IMAGINARY,
}TEST_VAR;

typedef enum{
    SUCCESS,
    MEM_ERROR,
    VALUE_ERROR,
    INVALID,
}ERROR_CODE;


/* Global variables declarations. */
//

/* Function prototypes. */
/*
 *
 * The function test_complex_number_value validates assignments within a function
 *
 *
 * @params
 *      number (*complex_number):
        complex_number struct
        test_var (TEST_VAR):
            value to be tested. {REAL, IMAGINARY}

 * @returns
        ERROR_CODE. {SUCCESS, MEM_ERROR, VALUE_ERROR, INVALID}
*/


static ERROR_CODE test_complex_number_value(complex_number *number, TEST_VAR test_var);

/*
 *
 * The function test_complex_number_memall validates memory assignment of a new complex_number instance.
 *
 *
 * @params
 *      void

 * @returns
        ERROR_CODE. {SUCCESS, MEM_ERROR, VALUE_ERROR, INVALID}
*/


EXTERN ERROR_CODE test_complex_number_memall(void);

/* Function prototypes. */
/*
 *
 * The function test_complex_number_new validates instanciation and value assignment of a complex_number struct
 *
 *
 * @params
 *      void

 * @returns
        ERROR_CODE. {SUCCESS, MEM_ERROR, VALUE_ERROR, INVALID}
*/


EXTERN ERROR_CODE test_complex_number_new(void);





#undef test_complex_number_IMPORT
#undef EXTERN
#endif /* text_complex_number_h */

