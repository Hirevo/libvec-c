/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_drop
*/

#include "vec.h"

void lvec_drop(vec_t *this)
{
    if (this == 0)
        return;
    free(this->arr);
    free(this);
}
