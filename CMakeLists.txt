
cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -W -Wall -Wextra -Wunused -Wuninitialized")

add_library(vec STATIC
    src/lvec_new.c
    src/lvec_with_capacity.c
    src/lvec_clone.c
    src/lvec_clear.c
    src/lvec_drop.c
    src/lvec_size.c
    src/lvec_capacity.c
    src/lvec_at.c
    src/lvec_set.c
    src/lvec_front.c
    src/lvec_back.c
    src/lvec_push_front.c
    src/lvec_pop_front.c
    src/lvec_push_back.c
    src/lvec_pop_back.c
    src/lvec_insert.c
    src/lvec_remove.c
    src/lvec_map.c
    src/lvec_filter.c
    src/lvec_reduce.c
    src/lvec_for_each.c
    src/lvec_sort.c
    src/lvec_concat.c
    src/lvec_reverse.c
    src/lvec_index_of.c
    src/lvec_last_index_of.c
    src/lvec_find_index.c
    src/lvec_find_last_index.c
    src/lvec_find.c
    src/lvec_find_last.c
    src/lvec_reserve.c
    src/lvec_shrink_to_fit.c
    src/internal_lvec_grow.c
)
target_include_directories(vec PUBLIC src)
