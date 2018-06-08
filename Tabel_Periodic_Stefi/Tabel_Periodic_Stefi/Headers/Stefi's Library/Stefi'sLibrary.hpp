#ifndef Stefi_sLibrary_hpp
#define Stefi_sLibrary_hpp

#include <stdio.h>
#include <string>

using namespace std;

typedef struct Element Element;
typedef struct bNode bNode;
typedef struct lNode lNode;



struct Element{
    
    string name;
    string symbol;
    int atomicNum;
    
};


struct bNode{
    
    Element info;
    bNode* left = NULL;
    bNode* right = NULL;
    int height = 0;
    
};


struct lNode{
    
    Element info;
    lNode* next;
    
};



#endif
