#include <math.h>
bool checkPrime(unsigned int value)
{
	bool isPrime = true;
	if (value == 1) return false;
	for (int i = 2; (i < (sqrt(value) + 1)) && (i < value); i++)
	{
		if (value % i == 0)
		{
			isPrime = false;
		    return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	int i = 0;
	unsigned long int num = 1;
	while (i < n)
	{
		num++;
		if (checkPrime(num)) i++;
	}
	return (num);
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long int res = value + 1;
	   	 while (!checkPrime(res)) {
		res += 1;
	}
	return res;
}