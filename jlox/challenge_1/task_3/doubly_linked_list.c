#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	struct Node *previous;
	struct Node *next;
	int value;
} Node;

int main() {
	Node *head = NULL;
	Node *firstnode = (Node *)malloc(sizeof(Node));
}


