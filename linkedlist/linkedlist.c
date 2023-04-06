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

size_t linkedlist_len(const Node_t *head) {
    size_t len = 0;
    const Node_t *current = head;
    while (current != NULL) {
        len++;
        current = current->next;
    }
    return len;
}

Node_t *return_node_at_nth_index(Node_t *head, unsigned int index) {
    Node_t *current = head;
    unsigned int count;

    while (current != NULL)
    {
	    if (count == index)
		    return current;
	    count++;
	    current = current->next;
    }

    return NULL;
}

Node_t *insert_node_at_nth_index(Node_t **head, unsigned int index, int data)
{
    Node_t *new_node = malloc(sizeof(Node_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->data = data;
    new_node->next = NULL;

    if (index == 0) {
        new_node->next = *head;
        *head = new_node;
        return *head;
    }

    Node_t *current = *head;
    unsigned int count = 0;

    while (count < index - 1 && current != NULL) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->next = current->next;
    current->next = new_node;

    return *head;
}

// Delete node at an index

Node_t *delete_node_at_nth_index(Node_t **head, int index) {
    if (*head == NULL || index == 0) {
        // Linked list is empty or index is 0
        return NULL;
    }

    Node_t *current = *head;
    Node_t *previous = NULL;
    int i = 0;

    while (current != NULL && i < index) {
        previous = current;
        current = current->next;
        i++;
    }

    if (i == index && current != NULL) {
        // Found the node to be deleted
        if (previous == NULL) {
            // Node to be deleted is the head of the linked list
            *head = current->next;
        } else {
            previous->next = current->next;
        }
        current->next = NULL;
	free(current);
        return current;
    } else {
        // Index was out of bounds
        return NULL;
    }
}

int main(void)
{
    Node_t *head;
    int deleted_data;
    int len;
    Node_t *nth_node;

    head = NULL;
    add_node_at_end_of_list(&head, 0);
    add_node_at_end_of_list(&head, 1);
    add_node_at_end_of_list(&head, 2);
    add_node_at_end_of_list(&head, 3);
    add_node_at_beginning_of_list(&head, -1);
    // Lenth of a linked list
    print_list(head);
    len = linkedlist_len(head);
    printf("-> %d elements\n", len);
    //delete node at the beginning of a linked list
    //deleted_data =  delete_node_at_beginning_of_list(&head);
    //printf("\n");
    //printf("Deleted head node's data: %d\n", deleted_data);
    //print_list(head);
    //Get the nth_node
    //nth_node = return_node_at_nth_index(head, 2);
    //printf("\nData at the index is: %d\n", nth_node->data);

    //insert a node at nth index
    insert_node_at_nth_index(&head, 3, 9);
    print_list(head);
    printf("\n");
    printf("Delete node at 3rd index\n");
    delete_node_at_nth_index(&head, 3);
    print_list(head);
    free_list(&head);
    return (0);
}
