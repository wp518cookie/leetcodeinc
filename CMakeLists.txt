cmake_minimum_required(VERSION 3.10)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c)
add_executable(1_two_sum leetcode/1_two_sum.c)
add_executable(203 leetcode/203_remove_linked_list_elements.c)
add_executable(771 leetcode/771_jewels_and_stones.c)
add_executable(977 leetcode/977_squares_of_a_sorted_array.c)


add_executable(majority top-interview-questions-in-2018/before-you-start/majority_element.c)
add_executable(search_matrix top-interview-questions-in-2018/before-you-start/search_matrix.c)
add_executable(is_palindrome top-interview-questions-in-2018/string/Is_Palindrome.c)



#极客时间覃超相关
add_executable(reverse_k_group geekbang/tanchao/array-and-linkedlist/reverse_k_group.c)

add_executable(mysqrt geekbang/tanchao/dichotomy/my_sqrt.c)