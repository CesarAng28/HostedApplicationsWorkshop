//
//  test_fibo.c
//  
//
//  Created by Cesar Angeles on 07/09/2020.
//


#include <stdio.h>


#include "Sequences.h"


int main(void){
    
    long long int value = 0;
    
    puts("Enter n fibo value:");
    scanf("%lld", &value);
    
    printf("Recursive Fibo %lld\n", Sequences_rfibo(value));
    printf("Sequential Fibo %lld\n", Sequences_sfibo(value));
    
    
}
