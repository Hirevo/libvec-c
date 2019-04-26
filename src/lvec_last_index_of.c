/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_last_index_of
*/

#include "vec.h"

ssize_t lvec_last_index_of(vec_t *this, void *elem)
{
	ssize_t idx;

	if (this == 0 || this->size == 0)
		return (-1);
	for (idx = this->size - 1; idx >= 0 && this->arr[idx] != elem; idx--);
    return (idx);
}
