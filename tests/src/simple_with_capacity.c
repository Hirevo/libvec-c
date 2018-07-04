/*
** EPITECH PROJECT, 2018
** vec
** File description:
** simple_with_capacity
*/

#include "vec.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

void debug_vec(char *name, vec_t *v)
{
	if (v == 0)
		return;
	printf("Vec { size: %lu, capacity: %lu, arr: [", v->size, v->capacity);
	for (size_t i = 0; i < v->size; i++)
		printf(i ? ", %lu" : "%lu", (size_t)(v->arr[i]));
	printf("]} => %s\n", name);
}

int main()
{
	vec_t *v = lvec_with_capacity(8);
	vec_t *c;

	assert(v != 0);
	assert(lvec_size(v) == v->size && v->size == 0);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
	assert(v->arr != 0);
	debug_vec("v", v);

	assert(lvec_push_back(v, 1, 0x1) == (ssize_t)(v->size));
	assert(lvec_size(v) == v->size && v->size == 1);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
	debug_vec("v", v);

	assert(lvec_push_back(v, 1, 0x2) == (ssize_t)(v->size));
	assert(lvec_push_back(v, 1, 0x3) == (ssize_t)(v->size));
	assert(lvec_size(v) == v->size && v->size == 3);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
	debug_vec("v", v);

	assert(lvec_push_back(v, 1, 0x4) == (ssize_t)(v->size));
	assert(lvec_size(v) == v->size && v->size == 4);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
	debug_vec("v", v);

	assert(lvec_push_front(v, 1, 0x0) == (ssize_t)(v->size));
	assert(lvec_size(v) == v->size && v->size == 5);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
	debug_vec("v", v);

	assert(lvec_pop_front(v) == (void *)(0x0));
	assert(lvec_size(v) == v->size && v->size == 4);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
	debug_vec("v", v);

	c = lvec_clone(v);
	assert(c != 0);
	assert(c->size == v->size && v->size == 4);
	assert(c->capacity == v->size && v->size == 4);
	debug_vec("c", c);

	assert(lvec_pop_back(v) == (void *)(0x4));
	assert(lvec_size(v) == v->size && v->size == 3);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
	debug_vec("v", v);

	assert(lvec_remove(v, 1) == (void *)(0x2));
	assert(lvec_size(v) == v->size && v->size == 2);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
	debug_vec("v", v);

	lvec_clear(v, false);
	assert(lvec_size(v) == v->size && v->size == 0);
	assert(lvec_capacity(v) == v->capacity && v->capacity == 0);
	assert(v->arr == 0);
	debug_vec("v", v);
	debug_vec("c", c);

	assert(lvec_reverse(c) != 0);
	debug_vec("c", c);

	lvec_drop(v);
	lvec_drop(c);
	return (0);
}
