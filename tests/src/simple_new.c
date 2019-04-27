/*
** EPITECH PROJECT, 2018
** vec
** File description:
** simple_new
*/

#include "vec.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

bool filter_test(void *context, void *item, size_t idx)
{
    (void)(context);
    (void)(idx);
    return (((size_t)(item)) % 2 == 0);
}

int sort_test(void *item1, size_t idx1, void *item2, size_t idx2)
{
    (void)(idx1);
    (void)(idx2);
    return (item1 > item2);
}

void *map_test(void *context, void *item, size_t idx)
{
    (void)(context);
    (void)(idx);
    return ((void *)(((size_t)(item)) * 2));
}

void debug_vec(char *name, vec_t *v)
{
    if (v == 0)
        return;
    printf("Vec { size: %lu, capacity: %lu, arr: [", v->size, v->capacity);
    for (size_t i = 0; i < v->size; i++)
        printf(i ? ", %lu" : "%lu", (size_t)(v->arr[i]));
    printf("]} => %s\n", name);
}

int main(void)
{
    vec_t *v = lvec_new();
    vec_t *c;

    printf("vec_t *v = lvec_new();\n");
    assert(v != 0);
    assert(lvec_size(v) == v->size && v->size == 0);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 0);
    assert(v->arr == 0);
    debug_vec("v", v);

    printf("\nlvec_push_back(v, 1, 0x1);\n");
    assert(lvec_push_back(v, 1, 0x1) == (ssize_t)(v->size));
    assert(lvec_size(v) == v->size && v->size == 1);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 1);
    debug_vec("v", v);

    printf("\nlvec_push_back(v, 1, 0x2);\n");
    printf("lvec_push_back(v, 1, 0x3);\n");
    assert(lvec_push_back(v, 1, 0x2) == (ssize_t)(v->size));
    assert(lvec_push_back(v, 1, 0x3) == (ssize_t)(v->size));
    assert(lvec_size(v) == v->size && v->size == 3);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 4);
    debug_vec("v", v);

    printf("\nlvec_push_back(v, 1, 0x4);\n");
    assert(lvec_push_back(v, 1, 0x4) == (ssize_t)(v->size));
    assert(lvec_size(v) == v->size && v->size == 4);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 4);
    debug_vec("v", v);

    printf("\nlvec_push_front(v, 1, 0x0);\n");
    assert(lvec_push_front(v, 1, 0x0) == (ssize_t)(v->size));
    assert(lvec_size(v) == v->size && v->size == 5);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
    debug_vec("v", v);

    printf("\nlvec_pop_front(v);\n");
    assert(lvec_pop_front(v) == (void *)(0x0));
    assert(lvec_size(v) == v->size && v->size == 4);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
    debug_vec("v", v);

    printf("\nvec_t *c = lvec_clone(v);\n");
    c = lvec_clone(v);
    assert(c != 0);
    assert(c->size == v->size && v->size == 4);
    assert(c->capacity == v->size && v->size == 4);
    debug_vec("c", c);

    printf("\nlvec_pop_back(v);\n");
    assert(lvec_pop_back(v) == (void *)(0x4));
    assert(lvec_size(v) == v->size && v->size == 3);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
    debug_vec("v", v);

    printf("\nlvec_remove(v, 1);\n");
    assert(lvec_remove(v, 1) == (void *)(0x2));
    assert(lvec_size(v) == v->size && v->size == 2);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 8);
    debug_vec("v", v);

    printf("\nlvec_clear(v, false);\n");
    lvec_clear(v, false);
    assert(lvec_size(v) == v->size && v->size == 0);
    assert(lvec_capacity(v) == v->capacity && v->capacity == 0);
    assert(v->arr == 0);
    debug_vec("v", v);
    debug_vec("c", c);

    printf("\nlvec_filter(c, |el| el %% 2 == 0, 0);\n");
    lvec_filter(c, (bool (*)(void *, void *, size_t))(filter_test), 0);
    debug_vec("c", c);

    printf("\nlvec_push_back(c, 2, 0x5, 0x3);\n");
    lvec_push_back(c, 2, 0x5, 0x3);
    debug_vec("c", c);

    printf("\nlvec_sort(c, |a, b| a > b, 0);\n");
    lvec_sort(c, sort_test);
    debug_vec("c", c);

    printf("\nlvec_reserve(c, 10);\n");
    lvec_reserve(c, 10);
    debug_vec("c", c);

    printf("\nlvec_shrink_to_fit(c);\n");
    lvec_shrink_to_fit(c);
    debug_vec("c", c);

    printf("\nlvec_map(c, |el| el * 2, 0);\n");
    lvec_map(c, map_test, 0);
    debug_vec("c", c);

    lvec_drop(v);
    lvec_drop(c);
    return (0);
}
