Doubly Linked List Library

A C repository containing various functions for working with doubly linked lists. A doubly linked list is a type of data structure that consists of a list of elements, each containing a reference to the previous and next elements in the list. This type of list provides more efficient searches, replacements, and insertions compared to a singly linked list, as elements can be accessed from both ends of the list.



Functions

The library provides the following functions for working with doubly linked lists:



append_node: Appends a new element to the end of the list

insert_node: Inserts a new element at a specified position in the list

delete_node: Deletes an element at a specified position in the list

search_node: Searches the list for an element with a specified value

replace_node: Replaces an element at a specified position in the list with a new element

print_list: Prints the elements of the list

Usage

To use the library, simply include the header file in your code and call the desired functions.



c

Copy code

#include "doubly_linked_list.h"



int main() {

    List *list = init_list();

    append_node(list, 1);

    append_node(list, 2);

    append_node(list, 3);

    print_list(list);

    return 0;

}

This will output:



rust

Copy code

1 -> 2 -> 3

For more information on how to use the functions, refer to the comments in the header file and the source code.



Contributing

Contributions are welcome! If you would like to contribute to the library, please submit a pull request

