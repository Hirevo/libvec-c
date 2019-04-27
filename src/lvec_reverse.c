/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_reverse
*/

#include "vec.h"

vec_t *lvec_reverse(vec_t *this)
{
    void *tmp;
    size_t lo = 0;
    size_t hi = this->size - 1;

    if (this == NULL || this->size == 0)
        return (0);
    while (hi > lo) {
        tmp = this->arr[lo];
        this->arr[lo] = this->arr[hi];
        this->arr[hi] = tmp;
        lo += 1;
        hi -= 1;
    }
    return (this);
}
