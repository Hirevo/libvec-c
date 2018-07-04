/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_capacity
*/

#include "vec.h"

size_t lvec_capacity(vec_t *this)
{
	return ((this != 0) ? this->capacity : 0);
}
