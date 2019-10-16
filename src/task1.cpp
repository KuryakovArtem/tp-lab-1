unsigned long findValue(unsigned int min, unsigned int max)
{
	
	return max ? findValue(max, min % max) : min;
}

unsigned long Nok(unsigned int a, unsigned int b)
{
	return a/findValue(a, b) * b;
}