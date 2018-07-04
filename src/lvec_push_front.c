/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_push_front
*/

#include "internal_vec.h"
#include <stdarg.h>
#include <string.h>

ssize_t lvec_push_front(vec_t *this, size_t nb_args, ...)
{
	va_list list;

	if (this == 0)
		return (-1);
	if (nb_args == 0)
		return (this->size);
	if ((this->size + nb_args) > this->capacity &&
		internal_lvec_grow(this, nb_args) == 0)
		return (-1);
	memmove(this->arr + nb_args, this->arr, this->size * sizeof(void *));
	this->size += nb_args;
	va_start(list, nb_args);
	for (size_t i = 0; i < nb_args; i++)
		lvec_set(this, i, va_arg(list, void *));
	va_end(list);
	return (this->size);
}
