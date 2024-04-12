#include "hash_tables.h"

shash_node_t *make_node(const char *key, const char *value);
void add_to_sorted(shash_table_t *ht, shash_node_t *node);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: size of sorted hash table.
 *
 * Return: a pointer to the new sorted hash table, or NULL in failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * make_node - function that makes a node for the sorted hash table.
 * @key: The key.
 * @value: pointer to the value value associated with the key.
 *
 * Return: the new node, or NULL on failure.
 */
shash_node_t *make_node(const char *key, const char *value)
{
	shash_node_t *sh_node;

	sh_node = malloc(sizeof(shash_node_t));
	if (sh_node == NULL)
		return (NULL);
	sh_node->key = strdup(key);
	if (sh_node->key == NULL)
	{
		free(sh_node);
		return (NULL);
	}

	sh_node->value = strdup(value);
	if (sh_node->value == NULL)
	{
		free(sh_node->key);
		free(sh_node);
		return (NULL);
	}

	sh_node->next = sh_node->snext = sh_node->sprev = NULL;
	return (sh_node);
}

/**
 * add_to_sorted - adds a node to the sorted ll
 * @ht: pointer to sorted hash table.
 * @node: pointer to node to add.
 *
 * Return: nothing
 */
void add_to_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = ht->stail = node;
		return;
	}
	temp = ht->shead;
	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		temp = temp->snext;
	}
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_set -  function that adds an element to the hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_val;
	shash_node_t *sh_node, *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_val = strdup(value);
			if (new_val == NULL)
				return (0);
			free(temp->value);
			temp->value = new_val;
			return (1);
		}
		temp = temp->next;
	}
	sh_node = make_node(key, value);
	if (sh_node == NULL)
		return (0);
	sh_node->next = ht->array[index];
	ht->array[index] = sh_node;
	add_to_sorted(ht, sh_node);
	return (1);
}
/**
 * shash_table_get - Retrieve the value associated with a key in a sorted ht.
 * @ht: A pointer to the sorted hash table.
 * @key: The key.
 *
 * Return: the value associated with key, or NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: the sorted hash table.
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: the sorted hash table.
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(head->array);
	free(head);
}
