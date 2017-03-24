 /*?A v B*/
#include "logic.h"
#include <stdbool.h>
bool imply(bool left, bool right)
{
	return !left || right;
}
