#ifndef TRUTH_TABLE_H
#define TRUTH_TABLE_H

#define MAX_PATH 5
char path[MAX_PATH + 1];

char bool_to_single_char(bool value);
void print_table(int number_of_variables);
void truth_table(int number_of_variables);
void from_f(int number_of_variables, char current_char, int index);
#endif
