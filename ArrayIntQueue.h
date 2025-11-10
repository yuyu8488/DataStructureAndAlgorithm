#pragma once

struct ArrayIntQueue
{
	int Max;
	int Num;
	int* Array;
};

void Initialize(ArrayIntQueue* Que, int Size);

void Enque(ArrayIntQueue* Que, int InValue);

void Deque(ArrayIntQueue* Que, int* OutValue);