#include <iostream>
#include <string>
#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	stack_pony;

	stack_pony = Pony("스택말", 3);
	stack_pony.Howl();
};

void	ponyOnTheHeap()
{
	Pony	*heap_pony;

	heap_pony = new Pony("힙말", 5);
	heap_pony->Howl();
	delete heap_pony;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
