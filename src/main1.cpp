// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "task1.h"
#include <iostream>


int main()
{
	int arr[20];
	for (int i = 0; i < 20; i++)
	{
		arr[i] = i + 1;
	}
	int thatNumber = 1;

	for (int i = 0; i < 20; i++)
	{
		thatNumber = Nok(thatNumber, arr[i]);
	}

	return 0;
}