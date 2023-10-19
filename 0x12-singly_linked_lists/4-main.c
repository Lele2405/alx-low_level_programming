#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void) {
	list_t *head = NULL;head = add_node_end(&head, "Anne");
	
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Danton");
	add_node_end(&head, "David");
	add_node_end(&head, "Gary");
	add_node_end(&head, "Holden");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Ian");

	printf("Initial list:\n");
	print_list(head);
	
	/* Free the list */
	free_list(head);
	head = NULL;
	
	return 0;
}
