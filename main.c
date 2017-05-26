/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <math.h>
#include <float.h>
#include <fenv.h>
#include <tgmath.h>
#include <stdbool.h>
#include <assert.h>
#include "logic.h"
#include "truth_table.h"
#include "logic_check.h"
/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
    /*bool y;   
	printf("Hello, world!\n");
	y = imply(false, true);
	printf("%s", y ? "true" : "false");*/

	print_table(19);
    bool p = true, q = false;
	bool y = imply( imply(p, q) && p, q);
    printf("%s", y ? "true" : "false");

	two_variable_check();
    
	/* this check to see if pnotorp is Tautology or not **/
    bool valid = is_valid(pnotorp);

	print_tautology("pnotorp", valid);
    return 0;
}

