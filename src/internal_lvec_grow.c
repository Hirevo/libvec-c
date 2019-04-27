/*
** EPITECH PROJECT, 2018
** vec
** File description:
** internal_lvec_grow
*/

#include "internal_vec.h"

//? Finds the smallest power of 2 still higher than `capacity`
static size_t compute_capacity(size_t capacity)
{
    capacity -= 1;
    capacity |= capacity >> 1;
    capacity |= capacity >> 2;
    capacity |= capacity >> 4;
    capacity |= capacity >> 8;
    capacity |= capacity >> 16;
    capacity |= capacity >> 32;
    return (capacity + 1);
}

vec_t *internal_lvec_grow(vec_t *this, size_t count)
{
    bool ret = lvec_reserve(this, compute_capacity(this->size + count));

    return (ret ? this : 0);
}
