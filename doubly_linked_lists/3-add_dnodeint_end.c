#include "lists.h"
/**
 * add_dnodeint_end - .
 * @head: .
 * @n: .
 * Retrun: .
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *Node = malloc(sizeof(dlistint_t));

        if (Node == NULL)
                return (NULL);
        Node->n = n;
        Node->next = NULL;
        if (*head)
        {
                Node->prev = *head;
                (*head)->next = Node;
        }
        else
                Node->prev = NULL;
        *head = Node;
        return (Node);
}
