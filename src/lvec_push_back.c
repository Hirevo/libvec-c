/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_push_back
*/

#include "internal_vec.h"
#include <stdarg.h>

ssize_t lvec_push_back(vec_t *this, size_t nb_args, ...)
{
    va_list list;
    size_t last_size = this->size;
    size_t total_size = this->size + nb_args;

    if (this == 0)
        return (-1);
    if (nb_args == 0)
        return (this->size);
    if (total_size > this->capacity && internal_lvec_grow(this, nb_args) == 0)
        return (-1);
    this->size = total_size;
    va_start(list, nb_args);
    for (size_t i = last_size; i < total_size; i++)
        lvec_set(this, i, va_arg(list, void *));
    va_end(list);
    return (this->size);
}
