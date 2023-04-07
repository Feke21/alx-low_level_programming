#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	char *separator;

	if (ht == NULL)
		return;

	printf("{");
	separator = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", separator, tmp->key, tmp->value);
			separator = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
