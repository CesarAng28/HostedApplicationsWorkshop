//
//  test_complex_number_all.c
//  
//
//  Created by Cesar Angeles on 13/08/2020.
//

#include <stdio.h>
#include <stdlib.h>

#include "test_complex_number.h"
#include "complex_number.h"


int main(int argc, char **argv){
    
    puts("COMPLEX NUMBER UNITTEST FILE:");
    puts("INIT:");
    
    puts("MEMORY TEST:");
    if(test_complex_number_memall() == SUCCESS){
        puts("MEMORY TEST SUCCESS");
    }
    puts("VALUE TEST");
    if(test_complex_number_new() == SUCCESS){
        puts("VALUE TEST SUCCESS");
    }
    
}
