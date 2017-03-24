#include <stdbool.h>
#include <stdio.h>
#include "truth_table.h"



char bool_to_single_char(bool y)
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
	int number = number_of_variables;
	int local_index = index;
	if (number_of_variables > 1) {
        path[index] = current_char;
		--number;
		++local_index;
        from_f(number, bool_to_single_char(false) , local_index);
        from_f(number, bool_to_single_char(true) , local_index);	    	 
	} else {
	    //push current char to path, print current char
		path[local_index] = current_char;
		path[++local_index] = '\0';
		printf("%s\n",path);
	}
}
