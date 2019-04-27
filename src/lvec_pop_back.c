/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_pop_back
*/

#include "internal_vec.h"
#include <stdarg.h>

void *lvec_pop_back(vec_t *this)
{
    void *item = lvec_back(this);

    if (this == 0 || this->size == 0)
        return (0);
    this->size -= 1;
    return (item);
}
