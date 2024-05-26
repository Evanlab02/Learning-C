#include <stdio.h>
#include <stdlib.h>

// Structs
typedef struct node {
  int val;
  struct node * next;
} node_t;

// Function declarations
void print_list(node_t * head);
void push_end(node_t * head, int val);
void push(node_t ** head, int val);
int pop(node_t ** head);
int remove_last(node_t * head);
int remove_by_index(node_t ** head, int n);

// Entrypoint
int main() {
  // create head and allocate memory for it.
  node_t * head = NULL;
  head = (node_t *) malloc(sizeof(node_t));
  
  // If it is still NULL, exit with code 1.
  if (head == NULL) {
    return 1;
  }

  // Assign head intial value.
  head->val = 1;
  head->next = NULL;

  // Add more items to linked list
  // START
  head->val = 1;
  head->next = (node_t *) malloc(sizeof(node_t));
  
  // Check that allocation did not fail...
  if (head->next == NULL) {
    return 1;
  }

  head->next->val = 2;
  head->next->next = NULL;
  // END

  // Print list after initialization
  printf("-----\n");
  print_list(head);
  printf("-----\n");

  // Push new node to the end of the linked list
  push_end(head, 3);

  // Print list after pushing to it
  printf("-----\n");
  print_list(head);
  printf("-----\n");

  // Push new node to start of the the linked list
  push(&head, 4);

  // Print list after pushing to it
  printf("-----\n");
  print_list(head);
  printf("-----\n");

  // Pop the first item from the linked list.
  pop(&head);

  // Print list after popping first item from it
  printf("-----\n");
  print_list(head);
  printf("-----\n");

  // Pop the last item from the linked list.
  remove_last(head);

  // Print list after popping last item from it
  printf("-----\n");
  print_list(head);
  printf("-----\n");

  // Repopulate with some values
  push_end(head, 3);
  push_end(head, 4);
  push_end(head, 5);

  // Print list after populating it.
  printf("-----\n");
  print_list(head);
  printf("-----\n");

  // Remove by index.
  remove_by_index(&head, 2);

  // Print list after removing the 2nd index value.
  printf("-----\n");
  print_list(head);
  printf("-----\n");

  // Return exit code 0
  return 0;
}

// Print the list of nodes
void print_list(node_t * head) {
  node_t * current = head;

  while (current != NULL) {
    printf("%d\n", current->val);
    current = current->next;
  }
}

// Add to end of linked list
void push_end(node_t * head, int val) {
  node_t * current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  /* now we can add a new variable */
  current->next = (node_t *) malloc(sizeof(node_t));
  current->next->val = val;
  current->next->next = NULL;
}

// Add to start of linked list
void push(node_t ** head, int val) {
  node_t * new_node;
  new_node = (node_t *) malloc(sizeof(node_t));

  new_node->val = val;
  new_node->next = *head;
  *head = new_node;
}

// Remove the item at the start of the linked list
int pop(node_t ** head) {
  int retval = -1;
  node_t * next_node = NULL;

  if (*head == NULL) {
    return retval;
  }

  next_node = (*head)->next;
  retval = (*head)->val;
  free(*head);
  *head = next_node;

  return retval;
}

// Remove the last item from the linked list
int remove_last(node_t * head) {
  int retval = 0;

  /* if there is only one item in the list, remove it */
  if (head->next == NULL) {
    retval = head->val;
    free(head);
    return retval;
  }

  /* get to the second to last node in the list */
  node_t * current = head;
  while (current->next->next != NULL) {
    current = current->next;
  }

  /* now current points to the second to last item of the list, so let's remove current->next */
  retval = current->next->val;
  free(current->next);
  current->next = NULL;
  return retval;
}

int remove_by_index(node_t ** head, int n) {
  int i = 0;
  int retval = -1;
  node_t * current = *head;
  node_t * temp_node = NULL;

  if (n == 0) {
    return pop(head);
  }

  for (i = 0; i < n-1; i++) {
    if (current->next == NULL) {
      return -1;
    }
    current = current->next;
  }

  if (current->next == NULL) {
    return -1;
  }

  temp_node = current->next;
  retval = temp_node->val;
  current->next = temp_node->next;
  free(temp_node);

  return retval;
}
