//
//  Sequences.h
//  
//
//  Created by Cesar Angeles on 07/09/2020.
//

#ifndef Sequences_h
#define Sequences_h

#include <stdio.h>

#ifdef Sequences_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Sequences.h -- Function prototypes */

/**
 * Add a node to the root three.
 * @param key Value to add to the tree.
 * @return Allocated node.
*/
EXTERN long long int Sequences_sfibo(long long int n);


/**
 * Add a node to the root three.
 * @param key Value to add to the tree.
 * @return Allocated node.
*/
EXTERN long long int Sequences_rfibo(long long int n);


#undef Sequences_IMPORT
#undef EXTERN
#endif /* Sequences_h */
