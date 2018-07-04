/*
** EPITECH PROJECT, 2018
** vec
** File description:
** header
*/

#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct vec_s {
	size_t size;
	size_t capacity;
	void **arr;
} vec_t;

/*
** Construction
*/
vec_t *lvec_new(void);
vec_t *lvec_with_capacity(size_t capacity);
vec_t *lvec_clone(vec_t *v);

/*
** Destruction
*/
void lvec_clear(vec_t *this, bool free_items);
void lvec_drop(vec_t *this);

/*
** Property access
*/
size_t lvec_size(vec_t *this);
size_t lvec_capacity(vec_t *this);

/*
** Item access
*/
void *lvec_at(vec_t *this, size_t idx);
bool lvec_set(vec_t *this, size_t idx, void *item);
bool lvec_includes(vec_t *this, void *elem);
void *lvec_front(vec_t *this);
void *lvec_back(vec_t *this);

/*
** Item mutation
*/
ssize_t lvec_push_back(vec_t *this, size_t nb_args, ...);
ssize_t lvec_push_front(vec_t *this, size_t nb_args, ...);
void *lvec_pop_back(vec_t *this);
void *lvec_pop_front(vec_t *this);
bool lvec_insert(vec_t *this, size_t idx, void *elem);
void *lvec_remove(vec_t *this, size_t idx);
vec_t *lvec_reverse(vec_t *this);
void lvec_shrink_to_fit(vec_t *this);

/*
** Find item
*/
ssize_t lvec_index_of(vec_t *this, void *elem);
ssize_t lvec_last_index_of(vec_t *this, void *elem);
ssize_t lvec_find_index(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context);
ssize_t lvec_find_last_index(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context);
void *lvec_find(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context);
void *lvec_find_last(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context);

/*
** Iterate over items
*/
vec_t *lvec_filter(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context);
vec_t *lvec_sort(vec_t *this,
	int (*predicate)(void *a, size_t idx1, void *b, size_t idx2));
void lvec_for_each(vec_t *this,
	void (*func)(void *context, void *elem, size_t idx), void *context);
void *lvec_reduce(vec_t *this,
	void *(*func)(void *context, void *acc, void *elem, size_t idx),
	void *context, void *acc);
