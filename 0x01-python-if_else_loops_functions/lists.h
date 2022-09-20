#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: Singly linked listnode structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} lisint_t;

size_t print_listint(const lisint_t *h);
lisint_t *add_nodeint_end(listint_t **head, const int n);
void free_lisint(listint_t *head);
listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */
