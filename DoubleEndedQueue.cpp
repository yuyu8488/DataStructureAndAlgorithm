#include "DoubleEndedQueue.h"
#include <cstddef>

int Initialize(DoubleEndedQueue* DEQ, int Max)
{
	DEQ->Num = 0;
	DEQ->Front = 0;
	DEQ->Rear = 0;
	if ((DEQ->Que = new int[ Max ]) == NULL)
	{
		DEQ->Max = 0;
		return -1;
	}
	DEQ->Max = Max;
	return 0;
}

int EnqueFront(DoubleEndedQueue* DEQ, int Value)
{
	if (DEQ->Num >= DEQ->Max)
	{
		return -1;
	}
	else
	{
		DEQ->Num++;
		if (--DEQ->Front < 0)
		{
			DEQ->Front = DEQ->Max - 1;
		}
		DEQ->Que[ DEQ->Front ] = Value;
		return 0;
	}
}

int EnqueRear(DoubleEndedQueue* DEQ, int Value)
{
	if (DEQ->Num >= DEQ->Max)
	{
		return -1;
	}
	else
	{
		DEQ->Num++;
		DEQ->Que[ DEQ->Rear++ ] = Value;
		if (DEQ->Rear == DEQ->Max)
		{
			DEQ->Rear = 0;
		}
		return 0;
	}
}

int DequeFront(DoubleEndedQueue* DEQ, int* Value)
{
	if (DEQ->Num <= 0)
	{
		return -1;
	}
	else
	{
		DEQ->Num--;
		*Value = DEQ->Que[ DEQ->Front++ ];
		if (DEQ->Front == DEQ->Max)
		{
			DEQ->Front = 0;
		}
		return 0;
	}
}

int DequeRear(DoubleEndedQueue* DEQ, int* Value)
{
	if (DEQ->Num <= 0)
	{
		return -1;
	}
	else
	{
		DEQ->Num--;
		if (--DEQ->Rear < 0)
		{
			DEQ->Rear = DEQ->Max - 1;
		}
		*Value = DEQ->Que[ DEQ->Rear ];
		return 0;
	}
}
