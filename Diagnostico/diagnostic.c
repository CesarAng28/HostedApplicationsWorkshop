//
//  diagnostic.c
//  
//
//  Created by Cesar Angeles on 12/08/2020.
//
/**
* Our sample program.
* @copyright 2008 by icosaedro.it di Umberto Salsi
* @license as you wish
* @author Cesarin
* @version 2008-04-23
* @file
*/


/* Include standard headers: */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Include modules header we directly invoke here: */
#include "complex_number.h"


int main(int argc, char **argv)
{
    /* Initialize modules: */
    float real, imaginary;
    complex_number *new_number = NULL;
    size_t memory = 0;
    
    real = 1.0;
    imaginary = 2.0;
    
    new_number = complex_number_new(real, imaginary);
    
    printf("Real: %f\nImaginary %f\n", new_number->real, new_number->imag);
    
    
    printf("memory space %p\n", new_number);
    
    memory = complex_number_memory(new_number);
    printf("size %lu\n", memory);
 
    /* Properly terminate the modules, if required: */
    complex_number_free(new_number);
    
    memory = complex_number_memory(new_number);
    printf("size %lu\n", memory);
    printf("memory space %p\n", new_number);


    return 0;
}

