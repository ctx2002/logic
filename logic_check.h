#ifndef LOGIC_CHECK
#define LOGIC_CHECK
#include <stdbool.h>

#define MAX_CAP 5
bool path_check[MAX_CAP + 1];

void two_variable_check(void);
bool generate(int number_of_variables, bool current, int index);
bool check(bool current_char,int index);

bool my1(bool args[], int length);

typedef bool (*one_variable)(bool value);
bool is_valid(one_variable func);
#endif
