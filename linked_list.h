#include <iostream>
#include "node.h"

using namespace std;

class LinkedList{

    
public:
    node* head;


    void display(){
        
        // TODO: 
        if(head == NULL){
            cout<<"Linked list is empty";
        }
        else{
            
            node temp = *head;
            while (temp.next != NULL)
            {
                cout<<temp.rollnumber<<endl;
                temp = *temp.next;
            }
        }
    }

    void insertAtLast(int data){
        
        // TODO: 
        if (head == NULL)
        {
            node n;
            n.rollnumber =  data;
            n.next = NULL;

            head = n;
        }
        else{     
        
            node temp = head;

            while(temp.next != NULL){
                temp = *temp.next;
            }

            node n;
            n.rollnumber =  data;
            n.next = NULL;

            temp.next = &n;

        }
    }

    void insertAtFirst(int data){
        
        if(head == NULL){
            node n;
            n.rollnumber = data;
            n.next = NULL;
            head = &n;


        }
        else{

            node n;
            n.rollnumber = data;
            n.next = &head;
            head = &n;

        }
            
    }

    void insertAtFirst(node newNode){


        if(head == NULL){
           
           newNode.next = NULL;
           head = &newNode;
        }
        else{

            newNode.next = &head;
            head = &newNode;

        }
    }

    void insertAfter(node* target, node newNode){

            node* temp = head;
            while(temp != target){
                temp = temp.next;
            }
            node* z = temp.next;

            temp.next = &newNode;
            newNode.next = z;
            

        }


    }

    void insertBefore(node* target, node newNode){

        
            node* temp = head;
            while(temp.next != target){
                temp = temp.next;
            }

            newNode.next = target;
            temp.next = &newNode;

    }

    node* search(int data){

        node temp = *head;

        while (temp.data != data)
        {
           temp = *(temp.next);
        }
        
        return &temp;
    }

    void insertAll(int[] data, int size){
         node temp = head;

        while(temp.next != NULL){
            temp = *temp.next;
        }

        node* savedAddress = NULL;
        for (int i = size; i > 0; i--)
        {
            node a;
            a.rollnumber = data[i];
            a.next = savedAddress;
            savedAddress=&a;
        }
        
        temp.next = savedAddress;
    }

    void delete(node* target){
        
    }
};