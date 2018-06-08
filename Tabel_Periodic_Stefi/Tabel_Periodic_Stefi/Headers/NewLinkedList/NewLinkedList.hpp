#ifndef NewLinkedList_hpp
#define NewLinkedList_hpp

#include <stdio.h>
#include "Stefi'sLibrary.hpp"
#include <iostream>

using namespace std;




class LinkedList{
    
private:
    
    lNode* head;
    lNode* tail;
    
public:
    LinkedList();
    
    void insertFront(Element element);
    void insertBack(Element element);
    
    void delete_first();
    void delete_last();
    
    lNode* searchByName(string name);
    lNode* searchBySymbol(string symbol);
    lNode* searchByAtomicNum(int atomicNum);
    
    void display();
};


#endif
