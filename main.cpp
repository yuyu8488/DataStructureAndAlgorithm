#pragma once

#include <iostream>
//#include "IntStack.h"
//#include "ArrayIntQueue.h"
#include "IntQueue.h"

int main()
{
	IntQueue Q;
	Initialize(&Q, 5);

	for (int i = 0; i < Q.max; i++)
	{
		Enque(&Q, i);
	}

	Print(&Q);

	int A;
	Deque(&Q, &A);

	int B;
	Deque(&Q, &B);

	Enque(&Q, 26);

	printf("===================");
	putchar('\n');

	Print(&Q);

	int temp = Search2(Q, 5);
}