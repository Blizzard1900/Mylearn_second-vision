typedef struct bodys {
	int x;
	int y;
	struct bodys* next;
}linked_list;

#include <stdio.h>

int main()
{
	
	linked_list Node1;
	linked_list Node2;
	Node1.x = 0; Node1.next = &Node1.next; Node1.y = 0;
	printf("%d-%d %d",Node1.x,Node1.y,Node1.next);
	return 0;
}