@@ -1,6 +1,9 @@
#ifndef LISTS_H
#define LIST_H
#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
@@ -9,7 +12,7 @@
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *              for Holberton project
 * for Holberton project
 */
typedef struct list_s
{
@@ -18,6 +21,7 @@ typedef struct list_s
	struct list_s *next;
} list_t;

unsigned int _strlen(char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);