#pragma once

#include <iostream>
#include "IntStack.h"
#include "ArrayIntQueue.h"
#include "IntQueue.h"
#include "DoubleEndedQueue.h"
#include "Recur.h"

int main()
{
	int x;
	printf("정수 입력...");
	scanf_s("%d", &x);

	RecurMemo(x);

	return 0;

}