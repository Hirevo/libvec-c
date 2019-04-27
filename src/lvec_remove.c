/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_remove
*/

#include "internal_vec.h"
#include <stdarg.h>
#include <string.h>

void *lvec_remove(vec_t *this, size_t idx)
{
    void *item;

    if (this == 0 || this->size < idx)
        return (0);
    item = this->arr[idx];
    memmove(this->arr + idx, this->arr + idx + 1,
        (this->size - idx) * sizeof(void *));
    this->size -= 1;
    return (item);
}
