/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_new
*/

#include "vec.h"

vec_t *lvec_new(void)
{
    return (calloc(1, sizeof(vec_t)));
}
