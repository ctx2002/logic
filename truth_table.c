#include <stdbool.h>
#include <stdio.h>
#include "truth_table.h"



inline char bool_to_single_char(bool y)
{
    return y ? 'T' : 'F';
}

void print_table(int number_of_variables)
{
    if (number_of_variables > MAX_PATH || number_of_variables < 1) {
	    fprintf(stderr, "max number of variables is %d, you provided %d\n", MAX_PATH ,number_of_variables);
	} else {
	    truth_table(number_of_variables);
	}
}

void truth_table(int number_of_variables)
{
	from_f(number_of_variables, bool_to_single_char(false) , 0);
	from_f(number_of_variables, bool_to_single_char(true)  , 0);
}

void from_f(int number_of_variables, char current_char, int index)
{
	/*if (number_of_variables > 1) {
        path[index] = current_char;
        from_f(number_of_variables-1, bool_to_single_char(false) , index+1);
        from_f(number_of_variables-1, bool_to_single_char(true) ,  index+1);	    	 
	} else {
	    end_of_path(current_char,index);
	}*/
	if (number_of_variables  == 1) {
		path[index] = current_char;
	    path[index + 1] = '\0';
	    printf("%s\n",path);
	} else {
	    path[index] = current_char;
        from_f(number_of_variables-1, bool_to_single_char(false) , index+1);
        from_f(number_of_variables-1, bool_to_single_char(true) ,  index+1);
	}
	
}

void end_of_path(char current_char, int index)
{
    path[index] = current_char;
	path[index + 1] = '\0';
	printf("%s\n",path);
}
