 /*?A v B*/
#include "logic.h"
#include <stdbool.h>
bool imply(bool left, bool right)
{
	return !left || right;
}

bool all_true(bool input)
{
    return input || !input;
}
bool all_false(bool input)
{
    return input && !input;
}

bool same(bool input)
{
    return input;
}
bool opposite(bool input)
{
    return !input;
}

bool equal(bool left, bool right)
{
	return imply(left, right) && imply(right, left);
}

bool axiom1(bool p, bool q)
{
    return imply( (p || p ), p);
}
bool axiom2(bool p, bool q)
{
    return imply(p, p || q);
}
bool axiom3(bool p, bool q)
{
    return imply( p || q, q || p);
}
bool axiom4(bool p, bool q, bool r)
{
    return imply( imply(p, r) ,
	    			imply( p || q, p || r)
	);
}
