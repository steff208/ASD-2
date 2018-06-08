#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include "AVL Tree.hpp"
#include "NewLinkedList.hpp"
#include "Stefi'sLibrary.hpp"
#include "Draw.hpp"

using namespace std;

int raspuns;
char raspunsChar[100];


bNode* tempbNode = new bNode;
lNode* templNode = new lNode;


void standardTable(AVLTree& tree);
int  drawAnswer();
void createElement(LinkedList list, string name, string symbol, int atomicNum);


int main(){
    

    LinkedList favorites;
    LinkedList ownList;
    AVLTree    tree;
    Draw       draw;

    standardTable(tree);
    
Menu:draw.drawMenu();   //Meniul principal
    drawAnswer();
    
    switch (raspuns) {
            
        case 1:{ // Afiseaza tabelul periodic
            
            draw.drawTable();    //Afiseaza un element
            drawAnswer();         //Inputul elementului
            
            system("clear");
            
            tempbNode = tree.searchByAtomicNum(raspuns);  //Cauta elementul
            
        
            tree.displayNode(tempbNode);
            
            cout << endl;
            cout <<" 1.Adauga la favorite." << endl;
            cout <<" 2.Inapoi la Meniu." << endl;
            cout <<" 3.Iesire." << endl;
            
            drawAnswer();
            
            switch (raspuns) {
                case 1:{
                    
                    templNode->info = tempbNode->info;
                    favorites.insertFront(templNode->info);
                    
                    system("clear");
                    
                    cout << "Elementul a fost introdus cu succes in lista de favorite." << endl << endl;
                    cout << "1. Inapoi la meniu." << endl;
                    cout << "2. Iesire." << endl;
                    
                    drawAnswer();
                    
                    switch (raspuns) {
                        case 1:{
                            goto  Menu;
                            break;
                        }
                        case 2:{
                            system("clear");
                            exit(1);
                            break;
                        }
                            
                            
                            
                        default:{
                            break;
                        }
                            
                    }
                    break;
                }
                    
                
                    
                case 2:{
                    goto Menu;
                    break;
                }
                    
                case 3:{
                    system("clear");
                    exit(1);
                    break;
                }
                    
                    
                default:{
                    
                    break;
                }
            }
            break;
        }
            
            
        case 2:{ // Afiseaza lista cu elementele chimice
            tree.displayTree();
            
            cout << endl;
            cout << "1)Afiseaza elementul cu numarul atomic:" << endl;
            drawAnswer();
            
            system("clear");
            
            tempbNode = tree.searchByAtomicNum(raspuns);
            
            
            if(tempbNode == NULL){
                
                cout << "Elementul nu a putut fi gasit!" << endl;
            }
            
            
            tree.displayNode(tempbNode);
            
            cout <<" 1.Adauga la favorite." << endl;
            cout <<" 2.Inapoi la Meniu." << endl;
            cout <<" 3.Iesire." << endl;
            
            drawAnswer();
            
            switch (raspuns) {
                case 1:{
                    
                    templNode->info = tempbNode->info;
                    favorites.insertFront(templNode->info);
                    
                    system("clear");
                    
                    cout << "Elementul a fost introdus cu succes in lista de favorite." << endl << endl;
                    cout << "1) Inapoi la meniu." << endl;
                    cout << "2) Iesire." << endl;
                    
                    drawAnswer();
                    
                    switch (raspuns) {
                        case 1:{
                            goto  Menu;
                            break;
                        }
                        case 2:{
                            goto Menu;
                            break;
                        }
                            
                        case 3:{
                            
                            system("clear");
                            exit(1);
                        }
                            
                            
                            
                        default:{
                            break;
                        }
                            
                    }
                    break;
                }
                    
                    
                
                    
                case 2:{
                    goto Menu;
                    break;
                }
                    
                case 3:{
                    system("clear");
                    exit(1);
                    break;
                }
                    
                    
                default:{
                    
                    break;
                }
                    
            }
            
            break;
        }
            
        case 3:{ // Afiseaza lista cu elemente favorite
            system("clear");
            favorites.display();
            
            cout << endl;
            
            cout << "1. Cauta un element." << endl;
            cout << "2. Inapoi la meniu." << endl;
            cout << "3. Iesire." << endl;
            
            drawAnswer();
            
            switch (raspuns) {
                case 1:{
                    
                    system("clear");
                    
                    cout << " 1. Cauta un element dupa nume:" << endl;
                    cout << " 2. Cauta un element dupa simbol:" << endl;
                    cout << " 3. Cauta un element dupa numarul atomic:" << endl;
                    
                    drawAnswer();
                    
                    switch (raspuns) {
                        case 1:{
                            system("clear");
                            
                            cout << "Nume:" << endl; cin >> raspunsChar;
                            
                            templNode = favorites.searchByName(raspunsChar);
                            
                            cout << templNode->info.name << " " << templNode->info.symbol << " " << templNode->info.atomicNum << endl;
                            
                            cout << "1. Inapoi la meniul principal." << endl;
                            cout << "2. Iesire" << endl;
                            
                            drawAnswer();
                            
                            switch(raspuns){
                                    
                                case 1: goto Menu; break;
                                case 2: exit(1);
                            }
                            break;
                        }
                            
                        case 2:{
                            system("clear");
                            cout << "Simbol:" << endl; cin >> raspunsChar;
                            
                            templNode = favorites.searchBySymbol(raspunsChar);
                            
                            cout << templNode->info.name << " " << templNode->info.symbol << " " << templNode->info.atomicNum << endl;
                            
                            cout << "1. Inapoi la meniul principal." << endl;
                            cout << "2. Iesire" << endl;
                            
                            drawAnswer();
                            
                            switch(raspuns){
                                    
                                case 1: goto Menu; break;
                                case 2: exit(1);
                            }
                            
                            break;
                        }
                            
                        case 3:{
                            system("clear");
                            cout << "Numar atomic:" << endl; cin >> raspuns;
                            
                            templNode = favorites.searchByAtomicNum(raspuns);
                            
                            cout << templNode->info.name << " " << templNode->info.symbol << " " << templNode->info.atomicNum << endl;
                            
                            cout << "1. Inapoi la meniul principal." << endl;
                            cout << "2. Iesire" << endl;
                            
                            drawAnswer();
                            
                            switch(raspuns){
                                    
                                case 1: goto Menu; break;
                                case 2: exit(1);
                            }
                            break;
                        }
                            
                            
                            
                        default:{
                            break;
                        }
                            
                    }
                    
                    
                    break;
                }
                    
                case 2:{
                    
                    goto Menu;
                    break;
                }
                case 3:{
                    system("clear");
                    exit(1);
                }
                    
                    
                    
                    
                default:{
                    
                    break;
                }
                    
            }
            
            
            break;
        }
            
          
        case 4:{ // Creeaza-ti elementul chimic
            
            Element tempElement;
            
            cout << "Introduceti numele: ";         cin >> tempElement.name;
            cout << "Introduceti simbolul: ";       cin >> tempElement.symbol;
            cout << "Introduceti numarul atomic: "; cin >> tempElement.atomicNum;
            
            ownList.insertFront(tempElement);
            
            cout << "Elementul  " << tempElement.name << "  a fost introdus cu succes in lista proprie!\n" << endl;
            cout << "1. Inapoi la meniul principal." << endl;
            cout << "2. Iesire" << endl;
            
            drawAnswer();
            
            switch(raspuns){
                    
                case 1: goto Menu; break;
                case 2: exit(1);
            }
            
            break;
        }
            
            
        case 5:{ // Afiseaza lista cu elemente proprii
            system("clear");
            ownList.display();
            
            cout << endl;
            
            cout << "1. Cauta un element." << endl;
            cout << "2. Inapoi la meniu." << endl;
            cout << "3. Iesire." << endl;
            
            drawAnswer();
            
            switch (raspuns) {
                case 1:{
                    
                    system("clear");
                    
                    cout << " 1. Cauta un element dupa nume:" << endl;
                    cout << " 2. Cauta un element dupa simbol:" << endl;
                    cout << " 3. Cauta un element dupa numarul atomic:" << endl;
                    
                    drawAnswer();
                    
                    switch (raspuns) {
                        case 1:{
                            system("clear");
                            
                            cout << "Nume:" << endl; cin >> raspunsChar;
                            
                            templNode = ownList.searchByName(raspunsChar);
                            
                            cout << templNode->info.name << " " << templNode->info.symbol << " " << templNode->info.atomicNum << endl;
                            
                            cout << "1. Inapoi la meniul principal." << endl;
                            cout << "2. Iesire" << endl;
                            
                            drawAnswer();
                            
                            switch(raspuns){
                                    
                                case 1: goto Menu; break;
                                case 2: exit(1);
                            }
                            break;
                        }
                            
                        case 2:{
                            system("clear");
                            cout << "Simbol:" << endl; cin >> raspunsChar;
                            
                            templNode = ownList.searchBySymbol(raspunsChar);
                            
                            cout << templNode->info.name << " " << templNode->info.symbol << " " << templNode->info.atomicNum << endl;
                            
                            cout << "1. Inapoi la meniul principal." << endl;
                            cout << "2. Iesire" << endl;
                            
                            drawAnswer();
                            
                            switch(raspuns){
                                    
                                case 1: goto Menu; break;
                                case 2: exit(1);
                            }
                            
                            break;
                        }
                            
                        case 3:{
                            system("clear");
                            cout << "Numar atomic:" << endl; cin >> raspuns;
                            
                            templNode = ownList.searchByAtomicNum(raspuns);
                            
                            cout << templNode->info.name << " " << templNode->info.symbol << " " << templNode->info.atomicNum << endl;
                            
                            cout << "1. Inapoi la meniul principal." << endl;
                            cout << "2. Iesire" << endl;
                            
                            drawAnswer();
                            
                            switch(raspuns){
                                    
                                case 1: goto Menu; break;
                                case 2: exit(1);
                            }
                            break;
                        }
                            
                            
                            
                        default:{
                            break;
                        }
                            
                    }
                    
                    
                    break;
                }
                    
                case 2:{
                    
                    goto Menu;
                    break;
                }
                case 3:{
                    system("clear");
                    exit(1);
                }
                    
                    
                    
                    
                default:{
                    
                    break;
                }
                    
            }
            
            break;
        }
            
            
        
            
            
        case 6:{ // Iesire
            exit(1);
            break;
        }
            
        default:{
            break;
        }
            
    }
    
    return 0;
}
    
    
    







int drawAnswer(){
    
    cout << "                                                      " ; cin >> raspuns;
    
    return raspuns;
}




void standardTable(AVLTree& tree){
    
    FILE* fisier = fopen("/Users/steff/Desktop/Tabel_Periodic_Stefi/elemente.txt", "r");
    
    for(int i = 120; i > 0; i--){
        
        Element temp;
        
        char* tempName   = new char;
        char* tempSymbol = new char;
        
        fscanf(fisier, "%s", tempName);
        fscanf(fisier, "%s", tempSymbol);
        fscanf(fisier, "%d", &temp.atomicNum);
        
        temp.name.assign(tempName);
        temp.symbol.assign(tempSymbol);
        
        tree.insert(temp);
    }
    
    fclose(fisier);
}


void createElement(LinkedList list, string name, string symbol, int atomicNum){
    
    lNode* temp = new lNode;
    
    temp->info.name.assign(name);
    temp->info.symbol.assign(symbol);
    temp->info.atomicNum = atomicNum;
    
    list.insertFront(temp->info);
    
}




 
 
