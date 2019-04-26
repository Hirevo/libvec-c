/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_find_last_index
*/

#include "vec.h"

ssize_t lvec_find_last_index(vec_t *this,
    bool (*predicate)(void *context, void *elem, size_t idx), void *context)
{
    ssize_t idx = this->size - 1;

    if (this == 0 || this->size == 0)
        return (-1);
    while (
        idx >= 0 && predicate(context, this->arr[idx], (size_t)(idx)) == false)
        idx -= 1;
    return idx;
}
