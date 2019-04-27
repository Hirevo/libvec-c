/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_any
*/

#include "vec.h"

bool lvec_any(vec_t *this,
    bool (*predicate)(void *context, void *elem, size_t idx), void *context)
{
    if (this == 0)
        return (false);
    for (size_t idx = 0; idx < this->size; idx++) {
        if (predicate(context, this->arr[idx], idx) == true)
            return (true);
    }
    return (false);
}
