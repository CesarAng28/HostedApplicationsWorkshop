//
//  test_complex_number.c
//  
//
//  Created by Cesar Angeles on 13/08/2020.
//



#include <stdlib.h>


#define complex_number_IMPORT
#include "complex_number.h"
#include "test_complex_number.h"

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


static ERROR_CODE test_complex_number_value(complex_number *number, TEST_VAR test_var){
    
    switch(test_var)
    {
        case REAL:
            if(number->real == TEST_COMPLEX_NUMBER_REAL)
            {
                printf("VALUE TEST PASSED\n");
                return SUCCESS;
            }
            else{
                printf("VALUE ERROR at var \"real\"\n");
                return VALUE_ERROR;
            }
            break;
            
        case IMAGINARY:
            if(number->imag == TEST_COMPLEX_NUMBER_IMAG){
                printf("VALUE TEST PASSED\n");
                return SUCCESS;
            }
            else{
                printf("VALUE ERROR at var \"imag\"\n");
                return VALUE_ERROR;
            }
            break;
        default:
            puts("Nothing to do");
            return VALUE_ERROR;
    }
    return INVALID;
    
}

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


ERROR_CODE test_complex_number_memall(void){
    
    complex_number * my_number = NULL;
    complex_number dummy = {0,0};
    ERROR_CODE status = SUCCESS;
    size_t mem = 0;
    
    my_number = complex_number_new(TEST_COMPLEX_NUMBER_REAL, TEST_COMPLEX_NUMBER_IMAG);
    
    if(my_number != NULL){
        puts("\tMEMORY ALLOCATION TEST PASSED");
        status = SUCCESS;
    }else{
        puts("\tMEMORY ALLOCATION ERROR");
        printf("\t\tAt memory location %p\n",my_number);
        status = MEM_ERROR;
        return status;
    }
    if(complex_number_memory(&dummy) == complex_number_memory(my_number)){
        puts("\tINTERNAL MEMORY ALLOCATION TEST PASSED");
        status = SUCCESS;
    }else{
        puts("\tINTERNAL MEMORY ALLOCATION ERROR");
        printf("\t\tAt memory location %p\n",my_number);
        status = MEM_ERROR;
        return status;
        
    }
    return status;
}


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




ERROR_CODE test_complex_number_new(void){
    
    complex_number *my_number = NULL;
    ERROR_CODE status = SUCCESS;
    
    if(test_complex_number_memall() == SUCCESS){
        status = SUCCESS;
    }else{
        puts("\tMEMORY ERROR");
        return MEM_ERROR;
    }
    
    my_number = complex_number_new(TEST_COMPLEX_NUMBER_REAL, TEST_COMPLEX_NUMBER_IMAG);
    
    if(test_complex_number_value(my_number, REAL) == SUCCESS){
        status = SUCCESS;
    }else{
        puts("\tREAL VALUE ERROR");
        return VALUE_ERROR;
    }
    if(test_complex_number_value(my_number, IMAGINARY) == SUCCESS){
        status = SUCCESS;
    }else{
        puts("\tIMAGINARY VALUE ERROR");
        return VALUE_ERROR;
    }
    return status;
    
}

    

