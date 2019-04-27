/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_map
*/

#include "vec.h"

void lvec_map(vec_t *this,
    void *(*func)(void *context, void *elem, size_t idx), void *context)
{
    if (this == 0)
        return;
    for (size_t idx = 0; idx < this->size; idx++)
        this->arr[idx] = func(context, this->arr[idx], idx);
}
