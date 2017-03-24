#ifndef LOGIC_H
#define LOGIC_H
#include <stdbool.h>
typedef bool (*property)(void);
bool imply(bool left, bool right);
#endif
