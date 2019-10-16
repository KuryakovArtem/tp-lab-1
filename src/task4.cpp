#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
char* sum( char* x,  char* y)
{
	int lenX = strlen(x), lenY=strlen(y);
	int restOfNum = 0;
	int max = lenX >= lenY ? lenX : lenY;
	
	char* result = new char[max+2];
	result[max + 1] = '\0';
	char* partX = x + lenX - 1;
	char* partY = y + lenY - 1;
	
	int summ = 0;
	for (int i = max; i >= 0; i--) {
		if (partX < x && partY < y) {
			summ = restOfNum;

		}
		if (partX >= x && partY >= y) {
			summ = *partX - '0' + *partY - '0' + restOfNum;
			if (summ > 9) 
			{
				summ = summ % 10;
				restOfNum = 1;
			}
			else
				restOfNum = 0;
		}
		if (partX < x && partY >= y) 
		{
			summ = *partY - '0' + restOfNum;
			if (summ > 9) 
			{
				summ = summ % 10;
				restOfNum = 1;
			}
			else restOfNum = 0;
		}
		if (partY < y && partX >= x)
		{
			summ = *partX - '0' + restOfNum;
			if (summ > 9) 
			{
				summ = summ % 10;
				restOfNum = 1;
			}
			else restOfNum = 0;
		}
		result[i] = summ + '0';
		summ = 0;
		partX--;
		partY--;
		if (result[0] == '0')
			result++;
	}
	
	return result;
}
