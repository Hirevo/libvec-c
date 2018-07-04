/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_back
*/

#include "vec.h"

void *lvec_back(vec_t *this)
{
	return ((this && this->size) ? this->arr[this->size - 1] : 0);
}
