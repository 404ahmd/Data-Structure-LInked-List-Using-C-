#include <iostream>
#include <string>

using namespace std;

struct Data
{
    int data;
    Data *next;
};

Data *head, *tail, *curr, *newNode, *del;

//CREATE SNGLE LINKED LIST
void creteSinglelinkedList(int data){
    head = new Data();
    head->data = data;
    head->next = NULL;
    tail = head;
}

//INSERT AT BEGINING MODE
void insertAtBegining(int data){
    newNode = new Data();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

//INSER LAST NODE
void insertLastnode(int data){
    newNode = new Data();
    newNode->data = data;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

//REMOVE FIRST NODE
void removeFisrtnode(){
    del = head;
    head = head->next;
    delete del;
}

//REMOVE LAST NODE
void removeLastnode(){
    del = tail;
    curr = head;
    while (curr->next != tail)
    {
        curr = curr->next;
    }

    tail = curr;
    tail->next = NULL;
    delete del;
    
}

//PRINT SINGLE LINKED LIST
void printSingleLinkedlist(){
    curr = head;
    while (curr != NULL)
    {
        cout<<" | Data : "<<curr->data;
        curr = curr->next;
    }
}

int main(int argc, char const *argv[])
{
    creteSinglelinkedList(500);
    insertAtBegining(200);
    insertLastnode(100);
    removeFisrtnode();
    removeLastnode();
    printSingleLinkedlist();
    return 0;
}

