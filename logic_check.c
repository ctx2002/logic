#include "logic_check.h"
#include "logic.h"
#include <stdio.h>
#include <stdbool.h>

/* this function check to see if a single variable logic function is a Tautology or not **/
bool is_valid(one_variable func)
{
    return func(false) && func(true);
}

void two_variable_check(void)
{
    bool x, y;   
	x = generate(2, false , 0);
	y = generate(2, true  , 0);
	if (x && y) {
	    printf("Good\n");
	} else {
	    printf("Bad\n");
	}
}

bool generate(int number_of_variables, bool current, int index)
{
	bool i, j;
	if (number_of_variables > 1) {
        path_check[index] = current;
        i = generate(number_of_variables-1, false , index+1);
        j = generate(number_of_variables-1, true ,  index+1);
        return i && j;	    	 
	} else {
	    return check(current,index);
	}
}

bool check(bool current,int index)
{
	path_check[index] = current;
	path_check[index + 1] = '\0';
	return my1(path_check, index);
}

bool my1(bool args[], int length)
{
    if (length == 1) {
		return imply(imply(args[0], args[1]) && !args[1], !args[0]);//good
          //return imply(args[0], args[1]) && imply(!args[0], !args[1]); //bad
	    //return imply( imply(args[0], args[1]) && args[0], args[1]);//good
	}
	return false;
}
