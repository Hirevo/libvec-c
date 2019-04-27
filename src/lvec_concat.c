/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_concat
*/

#include "vec.h"

vec_t *lvec_concat(vec_t *this, vec_t *other)
{
    if (this == 0 || other == 0)
        return (this);
    lvec_reserve(this, this->size + other->size);
    for (size_t idx = 0; idx < other->size; idx++)
        lvec_push_back(this, 1, other->arr[idx]);
    return (this);
}
