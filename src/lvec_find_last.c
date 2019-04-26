/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_find_last
*/

#include "vec.h"

void *lvec_find_last(vec_t *this,
    bool (*predicate)(void *context, void *elem, size_t idx), void *context)
{
    ssize_t idx = this->size - 1;

    if (this == 0 || this->size == 0)
        return (0);
    while (
        idx >= 0 && predicate(context, this->arr[idx], (size_t)(idx)) == false)
        idx -= 1;
    return (idx >= 0) ? (this->arr[idx]) : 0;
}
