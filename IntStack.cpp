#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int Initialize(IntStack* s, int max)
{
	s->ptr = 0;
	s->ptrEnd = max - 1;
	if ((s->stack = new int[max]) == NULL)
	{
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

int Push(IntStack* s, int x)
{
	if (s->ptr >= s->ptrEnd || s->ptr >= s->max)
	{
		return -1;
	}
	s->stack[s->ptr++] = x;
	return 0;
}

int PushFromEnd(IntStack* s, int x)
{
	if (s->ptrEnd <= s->ptr || s->ptrEnd <= 0)
	{
		return -1;
	}
	s->stack[s->ptrEnd--] = x;
	return 0;
}

int Pop(IntStack* s, int* x)
{
	if (s->ptr <= 0)
	{
		return -1;
	}
	*x = s->stack[--(s->ptr)];
	return 0;
}

int PopFromEnd(IntStack* s, int* x)
{
	if (s->ptrEnd >= s->max - 1)
	{
		return -1;
	}
	*x = s->stack[++(s->ptrEnd)];
	return 0;
}

int Peek(const IntStack* s, int* x)
{
	if (s->ptr <= 0)
	{
		return -1;
	}
	*x = s->stack[s->ptr - 1];
	return 0;
}

void Clear(IntStack* s)
{
	s->ptr = 0;
}

int Capacity(const IntStack* s)
{
	return s->max;
}

int Size(const IntStack* s)
{
	return s->ptr;
}

int IsEmpty(const IntStack* s)
{
	return s->ptr <= 0;
}

int IsFull(const IntStack* s)
{
	return s->ptr >= s->max;
}

int Search(const IntStack* s, int x)
{
	for (int i = s->ptr - 1; i >= 0; --i)
	{
		if (s->stack[i] == x)
		{
			return i;
		}
	}
	return false;
}

void Print(const IntStack* s)
{
	for (int i = 0; i < s->ptr; ++i)
	{
		printf("%d ", s->stack[i]);
		putchar('\n');
	}
}

void Terminate(IntStack* s)
{
	if (s->stack != nullptr)
	{
		delete s->stack;
		s->stack = nullptr;
	}
	s->max = 0;
	s->ptr = 0;
	s->ptrEnd = 0;
}
