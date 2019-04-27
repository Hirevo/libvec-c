/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_front
*/

#include "vec.h"

void *lvec_front(vec_t *this)
{
    return ((this && this->size) ? this->arr[0] : 0);
}
