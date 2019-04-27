/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_includes
*/

#include "vec.h"

bool lvec_includes(vec_t *this, void *elem)
{
    return (this ? (lvec_index_of(this, elem) != -1) : false);
}
