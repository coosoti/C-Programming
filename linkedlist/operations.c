#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} Node_t;

size_t print_list(const Node_t *head)
{
	const Node_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
		count++;
	}
	return count;
}

Node_t *add_node_at_end_of_list(Node_t **head, const int data) {
	Node_t *new_node = malloc(sizeof(Node_t));
	
        if (new_node == NULL) {
		return NULL;
	}
	new_node->data = data;
	new_node->next = NULL;
	if(*head == NULL) {
		*head = new_node;
	} else {
		Node_t *current = *head; /// contains 
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = new_node;
	}
	return new_node;
}

Node_t *add_node_at_beginning_of_list(Node_t **head, const int data)
{
	Node_t *new_node = malloc(sizeof(Node_t));

	if (new_node == NULL) {
		return NULL;
	}
        new_node->data = data;
	new_node->next = *head;

	*head = new_node;
	return new_node;
}

int delete_node_at_beginning_of_list(Node_t **head) 
{
	if (head == NULL) {
		return 0;
	}
	Node_t *new_node  = (*head)->next; //1->2->3  
	int data = (*head)->data;

	free(*head);
	
	*head = new_node;

	return data;
}

void free_linkedlist(Node_t **head)
{
	Node_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}

int main()
{
	Node_t *head;
        int deleted_data;

        head = NULL;
	add_node_at_end_of_list(&head, 2);
	add_node_at_end_of_list(&head, 3);
	print_list(head);/* list 2, 3 */
	printf("\n");
	add_node_at_beginning_of_list(&head, 1);
	print_list(head); /* 1, 2, 3 */

        printf("\n");
	printf("__Deleting first node__\n");
	deleted_data = delete_node_at_beginning_of_list(&head);
	printf("Deleted node data is: %d\n", deleted_data);
	print_list(head);
        free_linkedlist(&head);

	return 0;

}
