//This program is a Linked list practice
//Functions are : Creating Nodes, Creating a Linked List, Inserting Nodes at the beginning/end/particular position, Deleting Node at the beginning/end/particular position & Printing the Linked List
#include <iostream>
#include <cstdlib>
using namespace std;

//In a Node, there is an item and pointer that points to the next Node
struct Node{
    int item;
    Node *next;
};

Node *start=NULL;

    Node *createNode(){ //create Node
    Node *temp=new Node;
    return temp;
    }

    void insertNode(){ //Create a Linked list
    Node *tmp,*traverse; //*traverse is like an arrow that points from one Node to another Node
    int data;
    cout<< "Enter -1 if you want to terminate the insertion."<<endl;
    cout<< "Item : ";
    cin>> data;



    while(data !=-1){
        tmp=createNode();
        tmp->item=data; //keep the data into Node tmp
        tmp->next=NULL; //Set pointer in Node tmp as NULL temporarily

        if(start == NULL){ //if *start==NULL, means that this is the first Node created
            start=tmp;
        }
        else{ //else statement for Nodes that are not the first Node
            traverse =start;
            while(traverse->next !=NULL){ //Check the Nodes in the list one by one to make sure the adding of a new Node is at the end of the list
                traverse=traverse->next;
            }
            traverse->next=tmp; //Let pointer of the second last Node to keep the information of tmp(new Node)
        }
        cout<< "Item : ";
        cin>> data;
    }
    cout<< "The list is successfully created."<<endl;
    endl(cout);
    }

void insertBeginning(){   //Insert a Node at the beginning of the list
    Node *tmp=new Node();
    int data;
    cout<< "Item : ";
    cin>>data;

    tmp->item=data;
    tmp->next=start;
    start=tmp;
    cout<< "The item is successfully inserted."<<endl;
    endl(cout);

}

void insertEnd(){  //Insert a Node at the end of the list
    Node *tmp=new Node();
    Node *traverse;
    int data;
    cout<< "Item : ";
    cin>>data;
    tmp->item=data;
    tmp->next=NULL;
    traverse=start;
    while(traverse->next !=NULL){
        traverse=traverse->next;
    }
    traverse->next=tmp;
    cout<< "The item is successfully inserted."<<endl;
}

void insertMiddle(){ //Insert a Node at a particular position that is defined by user
    int position;
    int data;
    Node *traverse,*previous;
    /*For example, a user wants to insert a Node in the 3rd position.
        *traverse will keep the Node that is in the 4th position
        *previous will keep the Node that is in the 2nd position
        */
    Node *tmp=new Node();
    cout<< "Item : ";
    cin>>data;
    cout<< "In which position would you like to insert the item? ";
    cin>>position;
    traverse=start;
    for(int i=1;i<position;i++){
        previous=traverse;
        traverse=traverse->next;
    }
    tmp->item=data;
    previous->next=tmp;
    tmp->next=traverse;
    /*Using the same example from above :
        Data will be put inside Node tmp
        Information of Node tmp will be put inside *previous pointer (*previous will point to Node tmp)
        Information of Node traverse will be put inside *tmp pointer (*tmp will point to Node traverse)*/
    cout<< "The item is successfully inserted."<<endl;
}

void deleteBeginning(){ //Delete the Node at the beginning
    Node *tmp=new Node();
    tmp=start; //Store the starting Node into tmp for deletion
    start=start->next; //Let the 2nd Node become the starting Node
    delete tmp;
    cout << "The first item is successfully deleted."<<endl;

}

void deleteEnd(){  //Delete the Node at the end
    Node *tmp=new Node();
    Node *traverse,*previous;
    traverse =start;
    while(traverse->next !=NULL){
        previous=traverse;
        traverse=traverse->next;
    }
    previous->next=NULL;
    cout<< "The last item is successfully deleted."<<endl;
}

void deleteMiddle(){ //Delete the Node at a particular position
    int position;
    Node *previous,*traverse;
    cout<< "In which position would you like to delete the item? ";
    cin>>position;
    traverse=start;

    for(int i=1;i<position;i++){
        previous=traverse;
        traverse=traverse->next;
    }
    previous->next=traverse->next;
    /*For example, if I want to delete the item in the 2nd position
        Placed the 1st item into *previous
        Placed the 3rd item into *traverse*/
    cout<< "The item is successfully deleted."<<endl;
}

void printList(){
    Node *traverse=start;
    if(traverse==NULL){
        cout<< "The linked list is empty!"<<endl;
    }
    else{
        cout<< "Linked list : ";
        while(traverse !=NULL){
            cout<< traverse->item<< " ";

            traverse = traverse->next;
        }
        endl(cout);
    }
}

int main()
{
    int select;
    do{
        cout<< "-------------LINKED LIST-------------"<<endl;
        cout<< "1. Create List"<<endl;
        cout<< "2. Print List"<<endl;
        cout<< "3. Add item to beginning of List"<<endl;
        cout<< "4. Add item to the end of List"<<endl;
        cout<< "5. Add item to a particular position"<<endl;
        cout<< "6. Delete the first item of List"<<endl;
        cout<< "7. Delete the last item of List"<<endl;
        cout<< "8. Delete item in a particular position"<<endl;
        cout<< "Type 0 to terminate the program."<<endl;
        cout<< "Choice : ";
        cin>>select;

    switch(select){
        case 1 :
            system("cls");
            insertNode();
            system("PAUSE");
            system("cls");
        break;
        case 2 :
            system("cls");
            printList();
            system("PAUSE");
            system("cls");
        break;
        case 3 :
            system("cls");
            insertBeginning();
            system("PAUSE");
            system("cls");
        break;
        case 4 :
            system("cls");
            insertEnd();
            system("PAUSE");
            system("cls");
        break;
        case 5 :
            system("cls");
            insertMiddle();
            system("PAUSE");
            system("cls");
        break;
        case 6 :
            system("cls");
            deleteBeginning();
            system("PAUSE");
            system("cls");
        break;
        case 7 :
            system("cls");
            deleteEnd();
            system("PAUSE");
            system("cls");
        break;
        case 8 :
            system("cls");
            deleteMiddle();
            system("PAUSE");
            system("cls");
        break;
    }

    }while(select!=0);


    return 0;

}
