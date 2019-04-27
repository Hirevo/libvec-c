/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_find_index
*/

#include "vec.h"

ssize_t lvec_find_index(vec_t *this,
    bool (*predicate)(void *context, void *elem, size_t idx), void *context)
{
    size_t idx = 0;

    if (this == 0 || this->size == 0)
        return (-1);
    while (
        idx < this->size && predicate(context, this->arr[idx], idx) == false)
        idx += 1;
    return ((idx < this->size) ? (ssize_t)(idx) : (ssize_t)(-1));
}
