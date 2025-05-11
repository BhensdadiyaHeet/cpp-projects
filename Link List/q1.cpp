#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    Node(int element){
        this->data = element;
        this->next = NULL;
    }
};

class LinkedList{
    public :
    Node *head = NULL;
    int count = 0;

    LinkedList(){
        this->head = NULL;
        this->count = 0;
    }

    void InsertElementAtStart(int element){
        Node *NewNode = new Node(element);
        NewNode->next = this->head;
        this->head = NewNode;
        this->count++;
        cout << "Element inserted successfully !" << endl;
    }
    
    void InsertElementAtEnd(int element){
        Node *NewNode = new Node(element);
        if (this->head==NULL){
            this->head=NewNode;
        }else{
            Node *ptr = this->head;
            while (ptr->next!=NULL)
            {
                ptr = ptr->next;
            }
            ptr->next=NewNode;
            this->count++;
            cout << "Element inserted at end successfully !" << endl;
        }
    }  

    void InsertAtPosition(int element,int position){
        Node *NewNode = new Node(element);
        if (position==0)
        {
            NewNode->next = this->head;
            this->head = NewNode;
        }else{
            Node *ptr = this->head;
            for (int i = 0; i < position-1; i++)
            {
                ptr=ptr->next;

            }
            NewNode->next=ptr->next;
            ptr->next=NewNode;
            this->count++;
            
        }
        

    }

};

int main(){

    LinkedList list;
    list.InsertElementAtStart(25);
    cout << list.count << endl;

    list.InsertElementAtEnd(25);
    cout << list.count << endl;

}