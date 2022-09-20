#inclure <stdlib.h>
#inclure « lists.h »

/**
 * insert_node - Insère un nombre dans une liste triée liée individuellement.
 *
 * @head: Double pointeur vers une liste liée individuellement
 *
 * @number : Valeur du nouveau nœud.
 *
 * Retour : l’adresse du nouveau nœud, ou NULL s’il a échoué.
 */

listint_t *insert_node(listint_t **head, int number)
{
	indicateur int = 0;
	listint_t *new_node = NULL, *actual = NULL, *after = NULL;

	if (head == NULL)
		retour (NULL);
	new_node = malloc(sizeof(listint_t));
	si (!new_node)
		retour (NULL);
 new_node->n = nombre, new_node->suivant = NULL;
	if (*head == NULL)
	{
 *tête = new_node;
		retour (*tête);
	}
 réel = *tête;
	if (nombre <= réel->n)
	{
 new_node->suivant = réel, *head = new_node;
		retour (*tête);
	}
	if (nombre > actual->n && !actual->next)
	{
		actual->next = new_node;
		retour (new_node);
	}
 après = réel->suivant;
	tandis que (réel)
	{
		si (!après)
 actual->next = new_node, drapeau = 1;
		else if (after->n == nombre)
 actual->next = new_node, new_node->next = après, flag = 1;
		sinon si (après >n numéro > && numéro < réel->n)
 actual->next = new_node, new_node->next = après, flag = 1;
		si (drapeau)
			casser;
		after = after->next, actual = actual->next;
	}
	retour (new_node);
}
