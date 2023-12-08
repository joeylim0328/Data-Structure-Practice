# Linked List
Linked list is a type of linear data structure similar to arrays. It is a collection of nodes that are linked with each other. Linked list can have a dynamic size, as elements can be added or removed easily without worrying about a fixed size (like an array).
The diagram below shows the structure of a simple linked list. A Node of a linked list contains a data item and a pointer `*next` which points to the next Node of a linked list. START points to the first Node of a linked list. The last node of the linked list will have its next pointer set as NULL since it will not point to any memory address. <br>
![linked_list](images/img1.png?raw=true)<br>
Code implentation to create a Node <br>
![linked_list_code](images/img2.png?raw=true)<br>

# Operations
Unlike arrays, random access cannot be performed with a linked list. In order to access any Node, it needs to traverse the linked list from the start.

## Insertion
Insertion operation of linked list adds an item to the linked list.
### Insert a Node at the beginning of the list
![insert_beginning_code](images/img3.png?raw=true)<br>
1. Let the `*next` pointer of Node tmp point to the Node that Start Node is pointing to. <br>
![insert_beginning_diagram_1](images/img4.png?raw=true)<br>
2. Change Start Node to point to the recently created Node tmp. <br>
![insert_beginning_diagram_2](images/img5.png?raw=true)<br>

### Insert a Node at the end of the list 
![insert_end_code](images/img6.png?raw=true)<br>
1. Declare Node tmp that has `*next` pointer point to NULL. <br>
![insert_end_diagram_1](images/img7.png?raw=true)<br>
2. Use Node traverse to move towards the last Node (which has `*next` pointer point to NULL) of the list. <br>
![insert_end_diagram_2](images/img8.png?raw=true)<br>
3. Let the `*next` pointer of the last Node/Node traverse point to Node tmp.

# References
1. https://www.geeksforgeeks.org/python-linked-list/
2. https://www.softwaretestinghelp.com/linked-list/