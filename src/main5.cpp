#include "task5.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int N = 0;
	char* buf=(char*)"aaa adx aab";
	
	char** result = nullptr;
	split(&result, &N, buf, ' ');

	for (int i = 0; i < N; i++)
	{
		cout << result[i]<<endl;
	}
	return 0;
}