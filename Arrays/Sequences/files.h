//
//  files.h
//  
//
//  Created by Cesar Angeles on 07/09/2020.
//

#ifndef files_h
#define files_h

#include <stdio.h>

#ifdef files_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* files.h -- Function prototypes */

/**
 * Add a node to the root three.
 * @param key Value to add to the tree.
 * @return Allocated node.
*/
EXTERN FILE * file_new(char *name, char *mode);


/**
 * Add a node to the root three.
 * @param key Value to add to the tree.
 * @return Allocated node.
*/

EXTERN void file_num_write(FILE * file, size_t columns, long double buff[] [columns], size_t rows);

#undef files_IMPORT
#undef EXTERN



#endif /* files_h */
