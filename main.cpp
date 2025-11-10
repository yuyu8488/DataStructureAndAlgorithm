#pragma once

#include <iostream>
//#include "IntStack.h"
//#include "ArrayIntQueue.h"
//#include "IntQueue.h"
#include "DoubleEndedQueue.h"
int main()
{
	DoubleEndedQueue DEQ;

	Initialize(&DEQ, 10);

	for (int i = 0; i < DEQ.Max; i++)
	{
		std::cout << DEQ.Queue[ i ] << "[" << i << "]" << '\n';
	}
	printf("-------------------------------\n");
	EnqueFront(&DEQ, 3);
	EnqueFront(&DEQ, 5);
	EnqueRear(&DEQ, 9);
	EnqueRear(&DEQ, 4);
	EnqueRear(&DEQ, 2);
	EnqueRear(&DEQ, 8);
	for (int i = 0; i < DEQ.Max; i++)
	{
		std::cout << DEQ.Queue[ i ] << "[" << i << "]" << '\n';
	}
}