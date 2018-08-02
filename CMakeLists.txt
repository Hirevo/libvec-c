
cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -W -Wall -Wextra -Wunused -Wuninitialized -O3")

add_library(vec STATIC
    src/lvec_new
    src/lvec_with_capacity
    src/lvec_clone
    src/lvec_clear
    src/lvec_drop
    src/lvec_size
    src/lvec_capacity
    src/lvec_at
    src/lvec_set
    src/lvec_front
    src/lvec_back
    src/lvec_push_front
    src/lvec_pop_front
    src/lvec_push_back
    src/lvec_pop_back
    src/lvec_insert
    src/lvec_remove
    src/lvec_map
    src/lvec_filter
    src/lvec_reduce
    src/lvec_for_each
    src/lvec_sort
    src/lvec_concat
    src/lvec_reverse
    src/lvec_index_of
    src/lvec_last_index_of
    src/lvec_find_index
    src/lvec_find_last_index
    src/lvec_find
    src/lvec_find_last
    src/lvec_reserve
    src/lvec_shrink_to_fit
    src/internal_lvec_grow)
