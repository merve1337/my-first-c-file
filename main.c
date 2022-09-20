#include <stdio.h>

// author: Merve Nacak

//MARK: Creating struct.
typedef struct {
	int data;
	
	
}NODE_t[1], *NODE;



int main() {
	
	NODE_t node;
	
	node->data = 12;
	
	
	printf("%d", node->data);
	
	
	
	return 0;
}
