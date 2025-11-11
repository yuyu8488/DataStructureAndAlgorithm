#pragma once

struct DoubleEndedQueue
{
	int Max;
	int Num;
	int Front;
	int Rear;
	int* Que;
};

int Initialize(DoubleEndedQueue* DEQ, int Max);

int EnqueFront(DoubleEndedQueue* DEQ, int Value);

int EnqueRear(DoubleEndedQueue* DEQ, int Value);

int DequeFront(DoubleEndedQueue* DEQ, int* Value);

int DequeRear(DoubleEndedQueue* DEQ, int* Value);