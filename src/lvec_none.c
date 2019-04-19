/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_none
*/

#include "vec.h"

bool lvec_none(vec_t *this,
    bool (*predicate)(void *context, void *elem, size_t idx), void *context)
{
    if (this == 0)
        return (false);
    for (size_t idx = 0; idx < this->size; idx++)
        if (predicate(context, this->arr[idx], idx) == true)
            return (false);
    return (true);
}
