#include "lists.h"

/**
 * @brief
 *
 * @param head
 * @return int
 */

int is_palindrome(listint_t **head)
{
	return (is_palindrome_util(head, *head));
}

/**
 * @brief
 *
 */

int is_palindrome_util(listint_t **left, listint_t *right)
{

	if (right == 0)
	{
		return (1);
	}

	int isp = is_palindrome_util(left, right->next);
	if (isp == 0)
	{
		return 0;
	}

	int isp1 = (right->n == (*left)->n);

	*left = (*left)->next;

	return (isp1);
}
