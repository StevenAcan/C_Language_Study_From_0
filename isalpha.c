/* C Library function isalpha */
/* Source comes from Apple open source project */
/* https://opensource.apple.com/source/BerkeleyDB/BerkeleyDB-18/db/clib/isalpha.c.auto.html */

// /* Begin: Orign 
// /*-
//  * See the file LICENSE for redistribution information.
//  *
//  * Copyright (c) 2005,2007 Oracle.  All rights reserved.
//  *
//  * $Id: isalpha.c,v 1.4 2007/05/17 15:14:54 bostic Exp $
//  */

// #include "db_config.h"

// #include "db_int.h"

// /*
//  * isalpha --
//  *
//  * PUBLIC: #ifndef HAVE_ISALPHA
//  * PUBLIC: int isalpha __P((int));
//  * PUBLIC: #endif
//  */
// int
// isalpha(c)
// 	int c;
// {
// 	/*
// 	 * Depends on ASCII-like character ordering.
// 	 */
// 	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
// }
// End: Origin */


// Executable template
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char myinputchar;

    printf("Please input a character, i know if it's a number or an alphabet: \n");
    scanf("%c", &myinputchar);

    if(isalpha(myinputchar))
        printf("It's an alphabet!\n");
    else
        printf("It's not an alphabet!\n");

}