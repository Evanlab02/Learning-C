#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int val;
  struct node * next;
} node_t;

void print_list(node_t * head) {
  node_t * current = head;

  while (current != NULL) {
    printf("%d\n", current->val);
    current = current->next;
  }
}

int pop(node_t ** head) {
  int retval = -1;
  node_t * next_node = NULL;

  if (*head == NULL) {
      return -1;
  }

  next_node = (*head)->next;
  retval = (*head)->val;
  free(*head);
  *head = next_node;

  return retval;
}

int remove_by_value(node_t ** head, int val) {
  // Default return value (-1 for not found.)
  int retval = -1;

  // Create pointer to same location as head.
  node_t * current = *head;

  // Assign space for temporary node that will hold the node that should be removed.
  node_t * temp_node = (node_t *) malloc(sizeof(node_t));

  // If head/current/first node val is equal to val to be removed then...
  if (current->val == val) {
    // Tell head to advance to next, due to first being freed.
    *head = current->next;

    // Create temp node and gets its value for return. 
    temp_node = current;
    retval = temp_node->val;

    // Free the temp node.
    temp_node->next = NULL;
    free(temp_node);
    return retval;
  }

  // Loop until we are one node before the node that should be removed.
  while (current->next->val != val)
  {
    current = current->next;
  }

  // Create temp node that will be freed and get its value for return.
  temp_node = current->next;
  retval = temp_node->val;

  // Point current next node to the node after the node that is going to be freed.
  current->next = temp_node->next;

  // Free temp node.
  temp_node->next = NULL;
  free(temp_node);
  return retval;
}

int main() {
  node_t * test_list = (node_t *) malloc(sizeof(node_t));
  test_list->val = 1;
  test_list->next = (node_t *) malloc(sizeof(node_t));
  test_list->next->val = 2;
  test_list->next->next = (node_t *) malloc(sizeof(node_t));
  test_list->next->next->val = 3;
  test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
  test_list->next->next->next->val = 4;
  test_list->next->next->next->next = NULL;

  remove_by_value(&test_list, 3);

  print_list(test_list);
}