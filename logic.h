#ifndef LOGIC_H
#define LOGIC_H
#include <stdbool.h>
typedef bool (*property)(void);
bool imply(bool left, bool right);
bool all_true(bool input);
bool all_false(bool input);
bool same(bool input);
bool opposite(bool input);
bool equal(bool left, bool right);
//a^b = !(!a v !b)

bool axiom1(bool p, bool q);
bool axiom2(bool p, bool q);
bool axiom3(bool p, bool q);
bool axiom4(bool p, bool q, bool r);

bool pnotorp(bool value);

void print_tautology(char *name,bool value);
#endif
