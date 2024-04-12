#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *current, *new_node = NULL;
        unsigned long int index = 0;

        if (!ht || !key || *key == '\0')
        return 0;

        index = key_index((const unsigned char *)key, ht->size);

        current = ht->array[index];
        while (current != NULL)
        {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value); /* Free previous value */
            current->value = strdup(value); /* Update value */
            if (current->value == NULL)
                return 0; /* Memory allocation failed */
            return 1; /* Update successful */
        }
        current = current->next;
        }

        /* Key doesn't exist, create a new node */
        new_node = malloc(sizeof(hash_node_t));
        if (new_node == NULL)
        return 0; /* Memory allocation failed */

        new_node->key = strdup(key);
        if (new_node->key == NULL)
        {
        free(new_node);
        return 0; /* Memory allocation failed */
        }

        new_node->value = strdup(value);
        if (new_node->value == NULL)
        {
        free(new_node->key);
        free(new_node);
        return 0; /* Memory allocation failed */
        }

        /* Add new node at the beginning of the list */
        new_node->next = ht->array[index];
        ht->array[index] = new_node;

        return 1; /* Insertion successful */
}      

