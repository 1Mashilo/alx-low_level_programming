# Doubly Linked List Operations

This C program provides a set of functions to perform various operations on a doubly linked list. It includes basic operations such as adding nodes to the list, printing the list, calculating the sum of elements, and more.

## Table of Contents

1. [Doubly Linked List Functions](#doubly-linked-list-functions)
2. [Additional Tasks](#additional-tasks)
3. [Compilation](#compilation)
4. [Usage](#usage)
5. [Examples](#examples)

## Doubly Linked List Functions

### `size_t print_dlistint(const dlistint_t *h)`

Prints all elements of the doubly linked list.

### `size_t dlistint_len(const dlistint_t *h)`

Returns the number of elements in the doubly linked list.

### `dlistint_t *add_dnodeint(dlistint_t **head, const int n)`

Adds a new node with the given value at the beginning of the doubly linked list.

### `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)`

Adds a new node with the given value at the end of the doubly linked list.

### `void free_dlistint(dlistint_t *head)`

Frees the memory allocated for the doubly linked list.

### `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)`

Returns the node at the specified index in the doubly linked list.

### `int sum_dlistint(dlistint_t *head)`

Calculates and returns the sum of all elements in the doubly linked list.

### `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)`

Inserts a new node with the given value at a specified index in the doubly linked list.

### `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)`

Deletes the node at the specified index in the doubly linked list.

## Additional Tasks

### `void reverse_dlistint(dlistint_t **head)`

Reverses the doubly linked list.

### `size_t print_dlistint_backward(const dlistint_t *h)`

Prints all elements of the doubly linked list in reverse order.

### `void delete_dnodeint(dlistint_t **head, dlistint_t *node)`

Deletes a specific node from the doubly linked list.

## Compilation

To compile the program, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o linked_lists

