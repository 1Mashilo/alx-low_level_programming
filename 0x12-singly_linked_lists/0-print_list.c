#include <stdio.h>
#include "list.h"

/**
* print_list - Prints all elements of the linked list.
* @h: Pointer to the head of the linked list.
*
* Return: The number of nodes (elements) in the list.
*/

size_t print_list(const list_t *h)
{
size_t number_of_nodes = 0;

while (h != NULL)
{
if (h->str != NULL)
{
printf("%s\n", h->str);
}
else
{
printf("[0] (nil)\n");
}

h = h->next;
number_of_nodes++;
}

return (number_of_nodes);
}
