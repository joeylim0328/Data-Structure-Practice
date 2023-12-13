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
3. Let the `*next` pointer of the last Node/Node traverse point to Node tmp.<br>
![insert_end_diagram_3](images/img11.png?raw=true)<br>

### Insert a Node at a given position of the list
![insert_middle_code](images/img9.png?raw=true)<br>
1. Use Node previous and Node traverse to reach to the given position (Example: given position is 4th position). Node previous will move to given position-1 (3rd position), meanwhile Node traverse will move to given position (4th position).<br> 
![insert_middle_diagram_1](images/img10.png?raw=true)<br>
2. Let Node previous point to Node tmp and Node tmp point to Node traverse. Now, the new positions of Node previous, Node tmp, and Node traverse are 3, 4, and 5, respectively.
![insert_middle_diagram_2](images/img12.png?raw=true)<br>

## Deletion
Deletion operation of linked list removes an item from the linked list.
### Delete a Node at the beginning of the list
![delete_beginning_code](images/img13.png?raw=true)<br>
1. Let Node tmp point towards the Node that Node Start is pointing to (a.k.a the first node of the linked list). <br>
![delete_beginning_diagram_1](images/img14.png?raw=true)<br>
2. Node Start now points to the Node that the first Node is pointing (which is the second Node). The first Node is then deleted from the list. <br>
![delete_beginning_diagram_2](images/img15.png?raw=true)<br>

### Delete a Node at the end of the list
![delete_end_code](images/img16.png?raw=true)<br>
1. Use Node traverse to move towards the last Node (which has `*next` pointer point to NULL) of the list, meanwhile use Node previous to move towards the second last Node of the list. <br>
![delete_end_diagram_1](images/img17.png?raw=true)<br>
2. Set Node previous to point to NULL, the last Node is now deleted. <br>
![delete_end_diagram_2](images/img18.png?raw=true)<br>

### Delete a Node at a given position of the list
![delete_middle_code](images/img19.png?raw=true)<br>
1. This step is the same as inserting a Node at a given position of the list. Use Node previous and Node traverse to reach to the given position (Example: given position is 3rd position). Node previous will move to given position-1 (2nd position), meanwhile Node traverse will move to the given position (3rd position). <br>
![delete_middle_diagram_1](images/img20.png?raw=true)<br>
2. Reconnect the `*next` pointer of Node previous to the Node that Node traverse is pointing to. Now, the 2nd Node of the link is removed.
![delete_middle_diagram_2](images/img21.png?raw=true)<br>


# References
1. https://www.geeksforgeeks.org/python-linked-list/
2. https://www.softwaretestinghelp.com/linked-list/