/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_set
*/

#include "vec.h"

bool lvec_set(vec_t *this, size_t idx, void *item)
{
	if (this == 0 || this->size == 0 || this->size < idx)
		return (false);
	this->arr[idx] = item;
	return (true);
}
