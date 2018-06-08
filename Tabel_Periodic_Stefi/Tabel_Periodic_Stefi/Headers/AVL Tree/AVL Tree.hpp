#ifndef AVL_Tree_hpp
#define AVL_Tree_hpp

#include <iostream>
#include "Stefi'sLibrary.hpp"
#include <string>
#include <string.h>

using namespace std;

typedef class AVLTree AVLTree;


class AVLTree{
    
private:
    
                                                //Merge
                                                            //
    bNode* insert(Element element, bNode* node);            //Merge
    bNode* remove(Element element, bNode* node);            //Merge
                                                            //
   
    bNode* searchByAtomicNum(bNode*, int atomicNum);        //Merge
                                                            //
    bNode* singleLeftRotate(bNode*  &node);                 //Merge
    bNode* singleRightRotate(bNode* &node);                 //Merge
                                                            //
    bNode* doubleLeftRotate(bNode*  &node);                 //Merge
    bNode* doubleRightRotate(bNode* &node);                 //Merge
                                                            //
    bNode* findMin(bNode* node);                            //Merge
    bNode* findMax(bNode* node);                            //Merge
                                                            //
    int height(bNode* node);                                //Merge
    int getBalance(bNode* node);                            //Merge
                                                            //
    void inorder(bNode* node);                              //Merge
                                                            //
public:                                                     //
    
    bNode* root;
    
    AVLTree();                                              //Merge
                                                            //
    void insert(Element element);                           //Merge
    void remove(Element element);                           //Merge
                                                            //
                                                            //
    
    
    bNode* searchByAtomicNum(int atomicNum);                //Merge
                                                            //
    bNode* findMin();                                       //Merge
    bNode* findMax();                                       //Merge
                                                            //
    void deleteTree(bNode* node);                           //Merge
    void displayTree();                                     //Merge
    void displayNode(bNode* node);                          //Merge
    
};


#endif
