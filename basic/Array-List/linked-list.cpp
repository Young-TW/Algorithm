#include <iostream>
using namespace std;

class Node{
public:
    int index;
    Node *next;

    Node(){
        index = 0;
        next = NULL;
    }

    Node(int index){
        this -> index = index;
        this -> next = NULL;
    }
};

class LinkedList{
private:
    Node* head;

public:
    LinkedList(){
        head = NULL;
    }

    bool ListEmpty();
    void insertNode(int);
    void printList();
    void deleteNode(int);
};

bool LinkedList::ListEmpty(){
    if(head == NULL)
        cout << "List empty";
        return true;
    return false;
}

void LinkedList::insertNode(int index){
    Node* newNode = new Node(index);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void LinkedList::printList(){
    Node* temp = head;

    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }

    while(temp != NULL){
        cout << temp->index << endl;
        temp = temp->next;
    }
}

void LinkedList::deleteNode(int nodeOffset){
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;

    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
    
    while(temp1 != NULL){
        temp1 = temp1->next;
        ListLen++;
    }

    if(ListLen < nodeOffset){
        cout << "Index out of range" << endl;
        return;
    }

    temp1 = head;

    if(nodeOffset == 1){
        head = head->next;
        delete temp1;
        return;
    }

    while(nodeOffset-- > 1){
        temp2 = temp1;
        temp1 = temp1->next;
    }

    temp2->next = temp1->next;
    delete temp1;
}

int main(){
    LinkedList list;
    for(int i=1;i<6;i++){
        list.insertNode(i);
    }
    cout << "Elements of the list are: \n";
  
    // Print the list
    list.printList();
    cout << endl;
  
    // Delete node at position 2.
    list.deleteNode(2);
  
    cout << "Elements of the list are: \n";
    list.printList();
    cout << endl;
    return 0;
}

// undone