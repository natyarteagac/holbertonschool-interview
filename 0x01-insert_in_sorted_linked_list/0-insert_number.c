#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_node - Function to add a new node into the sorted linked list
 * @head: Pointer to head of sorted linked list
 * @number: number to insert in the list
 * Return: Added node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->n = number;

	if (*head == NULL || (*head)->n > new_node->n)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		return NULL;
	}
	return new_node;
}
