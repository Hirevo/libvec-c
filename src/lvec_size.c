/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_size
*/

#include "vec.h"

size_t lvec_size(vec_t *this)
{
    return ((this != 0) ? this->size : 0);
}
