# Create a Node class to create a node
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

# Create a LinkedList class

class LinkedList:
    def __init__(self):
        self.head=None
        self.last_node=None
    
    # Create a linked list
    def insert_node(self,data):
        if self.last_node is None:
            self.head=Node(data)
            self.last_node=self.head
        else:
            self.last_node.next=Node(data)
            self.last_node=self.last_node.next

    # Insert at the beginning of the list
    def insert_beginning(self,data):
        data=int(input('Item: '))
        new_node=Node(data)

        if self.head is None:
            self.head=new_node
            return

        else:
            new_node.next=self.head
            self.head=new_node

        print("The item is successfully inserted.")

    # Insert at the middle of the list
    def insert_middle(self,data,index):
        
        new_node=Node(data)
        traverse_node=self.head
        position=0
        if position==index:
            self.insert_beginning(data)
        else:
            while(traverse_node !=None and position+1 != index):
                position+=1
                traverse_node=traverse_node.next

            new_node.next=traverse_node.next
            traverse_node.next=new_node
        
        print("The item is successfully inserted.")

    # Insert at the end of the list
    def insert_end(self,data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
            return

        traverse_node=self.head
        while(traverse_node.next):
            traverse_node=traverse_node.next
        
        traverse_node.next=new_node

        print("The item is successfully inserted.")

    # Remove first node of the list
    def remove_first(self):
        if(self.head==None):
            return

        self.head=self.head.next

        print("The item is successfully removed.")

    # Remove node at the middle of the list
    def remove_middle(self,index):
        if self.head==None:
            return
        
        traverse_node=self.head
        position=0

        if position==index:
            self.remove_first()

        else:
            while(traverse_node!=None and position+1!=index):
                position+=1
                traverse_node=traverse_node.next

            traverse_node.next=traverse_node.next.next

            print("The item is successfully removed.")

    # Remove node at the end of the list
    def remove_last(self):
        if self.head is None:
            return
        
        traverse_node=self.head
        while(traverse_node.next.next):
            traverse_node=traverse_node.next
        
        traverse_node.next=None

        print("The item is successfully removed.")

    def print_list(self):
        traverse_node=self.head
        while(traverse_node):
            print(traverse_node.data)
            traverse_node=traverse_node.next




# Main function
termination=1
linked_list=LinkedList()
n=int(input('How many items would you like to add into the linked list?'))
for i in range(n):
    data=int(input('Item: '))
    linked_list.append(data)

while(termination):
    # Selection cases
