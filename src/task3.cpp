#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	int sum = 0;

	for (int i = 0; i < hbound; i++)
	{
		if (checkPrime(i))
		{
			sum += i;
		}		
	}
	return sum;
}