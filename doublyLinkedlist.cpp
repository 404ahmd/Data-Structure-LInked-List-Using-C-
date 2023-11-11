#include <iostream>
using namespace std;

struct Data
{
    int data;
    Data *prev;
    Data *next;
};
Data *head, *tail, *cur, *newNode, *del;

//CREATE DOUBLE LINKED LIST
void createDoublelinkedList(int data){
    head = new Data();
    head->data = data;
    head->next = NULL;
    head->prev = NULL;
    tail = head;
}

//INSERT AT BEGINING NODE
void insertAtbeginingNode(int data){
    if (head == NULL)
    {
        cout<<"data is empty \n";
    }else{
        newNode = new Data();
        newNode->data = data;
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;
        head = newNode;
    }
    
    
}

//INSERT LAST NODE
void insertLastnode(int data){
    if (head == NULL)
    {
       cout<<"data is mepty \n";
    }else
    {
        newNode = new Data();
        newNode->data = data;
        newNode->prev = tail;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

//DELETE FIRST NODE
void deleteFisrtnode(){
    if (head == NULL)
    {
        cout<<"data is emplty \n";
    }else
    {
        del = head;
        head = head->next;
        head->prev = NULL;
        delete del;
    }
}

//DELETE LAST NODE
void deleteLastnode(){
    if (head == NULL)
    {
        cout<<"data is empty \n";
    }else
    {
        del = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete del;
    }
    
    
}

//PRINT DOUBLE LINKED LIST
void printDoublelinkedList(){
    if (head == NULL)
    {
        cout<<"data is empty \n";
    }else{
            cur = head;
            while (cur != NULL)
            {
                cout<<" | Data : "<<cur->data<<endl;
                cur = cur->next;
            }
        }
}

int main(int argc, char const *argv[])
{
    createDoublelinkedList(200);
    insertAtbeginingNode(300);
    insertLastnode(400);
    // deleteFisrtnode();
    // deleteLastnode();
    printDoublelinkedList();
    return 0;
}
