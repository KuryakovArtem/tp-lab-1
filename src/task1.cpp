#include "task1.h"

static unsigned long nod(unsigned long  a, unsigned long  b)
{
	if (a == 0)return b;
	return nod(b % a, a);
}

unsigned long Nok(unsigned long a, unsigned long b)
{
	return a / nod(a, b) * b;
}
unsigned long findValue(unsigned int min, unsigned int max)
{
	unsigned int result = 1;
	for (unsigned long i = min; i <= max; i++) 
	{
		result = Nok(result, i);
	}
	return result;
}





