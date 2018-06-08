#include "AVL Tree.hpp"
#include <iostream>
#include "Stefi'sLibrary.hpp"
#include <string>
#include <string.h>

using namespace std;





AVLTree::AVLTree(){
    
    root = NULL;
}










bNode* AVLTree::insert(Element element, bNode* node){
    
    if(node == NULL){
        
        node = new bNode;
        
        node->info = element;
        node->height = 0;
        node->left = node->right = NULL;
    }
    else if(element.atomicNum < node->info.atomicNum){
        
        node->left = insert(element, node->left);
        
        if(height(node->left) - height(node->right) == 2){
            
            if(element.atomicNum < node->left->info.atomicNum){
                
                node = singleRightRotate(node);
            }
            else{
                
                node = doubleRightRotate(node);
            }
                
        }
    }
    else if(element.atomicNum > node->info.atomicNum){
        
        node->right = insert(element, node->right);
        
        if(height(node->right) - height(node->left) == 2){
            
            if(element.atomicNum > node->right->info.atomicNum){
                
                node = singleLeftRotate(node);
            }
            else{
                
                node = doubleLeftRotate(node);
            }
        }
    }
    
    node->height = max(height(node->left), height(node->right))+1;
    
    return node;
}










bNode* AVLTree::remove(Element element, bNode* node){
    
    bNode* temp;
    
    if(node == NULL){
        
        return NULL;
    }
    else if(element.atomicNum < node->info.atomicNum){
        
        node->left = remove(element, node->left);
    }
    else if(element.atomicNum > node->info.atomicNum){
        
        node->right = remove(element, node->right);
    }
    else if(node->left && node->right){
        
        temp = findMin(node->right);
        
        node->info  = temp->info;
        node->right = remove(node->info, node->right);
    }
    else{
        
        temp = node;
        
        if(node->left == NULL){
            
            node = node->right;
        }
        else if(node->right == NULL){
            
            node = node->left;
        }
        
        delete temp;
    }
    
    if(node == NULL){
        
        return node;
    }
        
    
    node->height = max(height(node->left), height(node->right))+1;
    
    
    if(height(node->left) - height(node->right) == 2){
        

        if(height(node->left->left) - height(node->left->right) == 1){
            
            return singleLeftRotate(node);
        }
        else{
            
            return doubleLeftRotate(node);
        }
    }
    else if(height(node->right) - height(node->left) == 2){
        

        if(height(node->right->right) - height(node->right->left) == 1){
            
            return singleRightRotate(node);
        }
        else{
            
            return doubleRightRotate(node);
        }
    }
    
    return node;
}










bNode* AVLTree::singleLeftRotate(bNode* &node){
    
    bNode* u = node->right;
    node->right = u->left;
    u->left = node;
    
    node->height = max(height(node->left), height(node->right))+1;
    u->height = max(height(node->right), node->height)+1 ;
    
    return u;
}










bNode* AVLTree::singleRightRotate(bNode* &node){
    
    bNode* u = node->left;
    node->left = u->right;
    u->right = node;
    
    node->height = max(height(node->left), height(node->right))+1;
    u->height = max(height(u->left), node->height)+1;
    
    return u;
}










bNode* AVLTree::doubleLeftRotate(bNode* &node){
    
    node->right = singleRightRotate(node->right);
    
    return singleLeftRotate(node);
}










bNode* AVLTree::doubleRightRotate(bNode* &node){
    
    node->left = singleLeftRotate(node->left);
    
    return singleRightRotate(node);
}










bNode* AVLTree::findMin(bNode* node){
    
    if(node == NULL){
        
        return NULL;
    }
        
    else if(node->left == NULL){
        
        return node;
    }
        
    else{
        
        return findMin(node->left);
    }
}










bNode* AVLTree::findMax(bNode* node){
    
    if(node == NULL){
        
        return NULL;
    }
    else if(node->right == NULL){
        
        return node;
    }
    else{
        
        return findMax(node->right);
    }
}























bNode* AVLTree::searchByAtomicNum(bNode* node, int atomicNum){
    
    if(node == NULL || node->info.atomicNum == atomicNum){
        
        return node;
    }
    
    if(node->info.atomicNum < atomicNum){
        
        return searchByAtomicNum(node->right, atomicNum);
    }
    
    return searchByAtomicNum(node->left, atomicNum);
}










int AVLTree::height(bNode* node){
    
    return (node == NULL ? -1 : node->height);
}










int AVLTree::getBalance(bNode* node){
    
    if(node == NULL){
        
        return 0;
    }
    else{
        
        return height(node->left) - height(node->right);
    }
}










void AVLTree::inorder(bNode* node){
    
    if(node == NULL){
        
        return;
    }
        
    inorder(node->left);
    cout << node->info.name << " " << node->info.symbol << " " << node->info.atomicNum << endl;
    inorder(node->right);
    
}










void AVLTree::insert(Element element){
    
    root = insert(element, root);
}










void AVLTree::remove(Element element){
    
    root = remove(element, root);
}













bNode* AVLTree::searchByAtomicNum(int atomicNum){
    
    bNode* temp = searchByAtomicNum(root, atomicNum);
    
    return temp;
}










void AVLTree::deleteTree(bNode* node){
    
    if(node == NULL){
        
        return;
    }
    
    deleteTree(node->left);
    deleteTree(node->right);
    
    delete node;
}










void AVLTree::displayTree(){
    
    inorder(root);
    cout << endl;
}










void AVLTree::displayNode(bNode* node){
    
    cout << node->info.name << " " << node->info.symbol << " " << node->info.atomicNum << endl;
}









bNode* AVLTree::findMin(){
    
    return findMin(root);
}










bNode* AVLTree::findMax(){
    
    return findMax(root);
}









