/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_clear
*/

#include "vec.h"

void lvec_clear(vec_t *this, bool free_items)
{
    if (this == 0)
        return;
    if (free_items) {
        for (size_t i = 0; i < this->size; i++)
            free(this->arr[i]);
    }
    this->size = 0;
    this->capacity = 0;
    free(this->arr);
    this->arr = 0;
}
