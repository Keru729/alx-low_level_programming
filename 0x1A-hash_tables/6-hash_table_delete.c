#include "hash_tables.h"

/**
 * free_list - frees a linked list
 * @head: hash_node_t list to be freed
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
		free_list(ht->array[j]);
	free(ht->array);
	free(ht);
}
