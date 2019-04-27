/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_at
*/

#include "vec.h"

void *lvec_at(vec_t *this, size_t idx)
{
    if (this == 0 || this->size == 0 || this->size < idx)
        return (0);
    return (this->arr[idx]);
}
