//
//  complex_number.c
//  
//
//  Created by Cesar Angeles on 12/08/2020.
//


#include <stdio.h>
#include <stdlib.h>

#define complex_number_IMPORT
#include "complex_number.h"


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
        complex_number *.
*/


complex_number * complex_number_new(float real, float imag){
    
    complex_number * my_number = NULL;
    
    my_number = (complex_number *)malloc(sizeof(complex_number));
    
    my_number->real = real;
    my_number->imag = imag;
    
    return my_number;
}

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



void complex_number_free(complex_number *number){
    
    free(number);
    
}

/*
 *
 * The function complex_number_memory returns the
 * amount of memory space of a complex_number structure.
 *
 * @params
 *     number (* complex_number):
            complex_number struct.

 * @returns
        allocated memory
*/




size_t complex_number_memory(complex_number *number){
    
    size_t memory = sizeof(number->real) + sizeof(number->imag);
    
    return memory;
    
}
