#include "NewLinkedList.hpp"

LinkedList::LinkedList(){
    
    head = NULL;
    tail = NULL;
}




void LinkedList::insertBack(Element element){
    
    lNode* temp = new lNode;
    
    temp->info = element;
    
    temp->next = NULL;
    
    if(head == NULL){
        
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else{
        
        tail->next = temp;
        tail = temp;
    }
}



void LinkedList::display(){
    
    lNode* temp = new lNode;
    
    temp = head;
    
    while(temp != NULL){
        
        cout << temp->info.name << " " << temp->info.symbol << " " << temp->info.atomicNum << endl;
        
        temp = temp->next;
        
    }
}

void LinkedList::insertFront(Element element){
    
    lNode* temp = new lNode;
    
    temp->info = element;
    
    temp->next = head;
    
    head = temp;
}


void LinkedList::delete_first(){
    
    lNode* temp = new lNode;
    
    temp = head;
    
    head = head->next;
    
    delete temp;
}



void LinkedList::delete_last(){
    
    lNode* current = new lNode;
    lNode* previous = new lNode;
    
    current = head;
    
    while(current->next != NULL){
        
        previous = current;
        current = current->next;
    }
    
    tail = previous;
    previous->next = NULL;
    
    delete current;
}



lNode* LinkedList::searchByName(string name){
    
    lNode* temp = new lNode;
    
    temp = head;
    
    while(temp != NULL){
        
        if(temp->info.name == name){
            
            return temp;
        }
        
        temp = temp->next;
    }
    
    return temp;
}



lNode* LinkedList::searchBySymbol(string symbol){
    
    lNode* temp = new lNode;
    
    temp = head;
    
    while(temp != NULL){
        
        if(temp->info.symbol == symbol){
            
            return temp;
        }
        
        temp = temp->next;
    }
    
    return temp;
}



lNode* LinkedList::searchByAtomicNum(int atomicNum){
    
    lNode* temp = new lNode;
    
    temp = head;
    
    while(temp != NULL){
        
        if(temp->info.atomicNum == atomicNum){
            
            return temp;
        }
        
        temp = temp->next;
    }
    
    return temp;
}




