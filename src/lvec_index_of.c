/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_index_of
*/

#include "vec.h"

ssize_t lvec_index_of(vec_t *this, void *elem)
{
    size_t idx = 0;

    if (this == 0 || this->size == 0)
        return (-1);
    for (idx = 0; idx < this->size && this->arr[idx] != elem; idx++)
        ;
    return ((idx < this->size) ? (ssize_t)(idx) : (ssize_t)(-1));
}
