#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(30);

	shash_table_set(ht, "c", "fun");
	shash_table_print(ht);
    shash_table_set(ht, "python", "awesome");
	shash_table_print(ht);
    shash_table_set(ht, "Bob", "and Kris love asm");
	shash_table_print(ht);
    shash_table_set(ht, "N", "queens");
	shash_table_print(ht);
	ht_print_bucket(ht);
    shash_table_set(ht, "Asterix", "Obelix");
	shash_table_print(ht);

    /*shash_table_set(ht, "Betty", "Cool");
	shash_table_print(ht);
    shash_table_set(ht, "98", "Battery Street");

	printf("%s\n", shash_table_get(ht, "98"));*/

	ht_print_bucket(ht);

	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
