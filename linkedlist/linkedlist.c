#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node_t;

size_t print_list(const Node_t *head)
{
    const Node_t *current = head;
    size_t count = 0;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
        count++;
    }

    return count;
}

Node_t *add_node_at_end_of_list(Node_t **head, const int data)
{
    Node_t *new_node = malloc(sizeof(Node_t));
    //checking if memory was allocated successfully
    if (new_node == NULL) {
        return NULL;
    }
    // we set the new node
    new_node->data = data;
    new_node->next = NULL;

    //If the linked list is empty we set the new_node to be the head node
    if (*head == NULL) {
        *head = new_node;
    } else {
        Node_t *current = *head;
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

int delete_node_at_beginning_of_list(Node_t **head) {
    if (*head == NULL) {
        return 0;
    }

    // Store the next node and its data
    Node_t *next_node = (*head)->next;
    int data = (*head)->data;

    // Free the memory used by the current head node
    free(*head);

    // Update the head pointer to point to the next node
    *head = next_node;

    return data;
}
void free_list(Node_t **head)
{
	Node_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

	}
	*head = NULL;

}

int main(void)
{
    Node_t *head;
    int deleted_data;

    head = NULL;
    add_node_at_end_of_list(&head, 0);
    add_node_at_end_of_list(&head, 1);
    add_node_at_end_of_list(&head, 2);
    add_node_at_end_of_list(&head, 3);
    add_node_at_beginning_of_list(&head, -1);
    print_list(head);
    //delete node at the beginning of a linked list
    deleted_data =  delete_node_at_beginning_of_list(&head);
    printf("\n");
    printf("Deleted head node's data: %d\n", deleted_data);
    print_list(head);
    free_list(&head);
    return (0);
}
