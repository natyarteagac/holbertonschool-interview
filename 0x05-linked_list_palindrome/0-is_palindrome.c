#include "lists.h"

/**
 * is_palindrome - Function to verify if linked list is palindrome.
 * @head: pointer to linked list head.
 * Return: Value of function
 */

int is_palindrome(listint_t **head)
{
	return (is_palindrome_util(head, *head));
}

/**
 * is_palindrome_util - Function to traverse the list.
 * @left: pointer to left sido of linked list.
 * @right: pointer to right side of linked list.
 * Return: Zero if is palindrome or 1 if is not.
 */

int is_palindrome_util(listint_t **left, listint_t *right)
{
	int isp;
	int isp1;

	if (right == 0)
	{
		return (1);
	}

	isp = is_palindrome_util(left, right->next);
	if (isp == 0)
	{
		return (0);
	}

	isp1 = (right->n == (*left)->n);

	*left = (*left)->next;

	return (isp1);
}
