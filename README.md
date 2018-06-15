# Tabel Periodic

## 1. Introducere. 

**_Tabelul_** Periodic este alcătuit din **122 de elemente chimice**.
Cu ajutorul acestui program puțeți invăța detalii legate de elementele chimice.

## 2. Codul din spatele tabelului. 

Codul din spatele tabelului este alcătuit dintr-o **Listă Simplă Înlănțuită** și un **Arbore Binar AVL**. \


Datele unui element au fost create cu ajutorul unui Struct incluzând _numele_, _simbolul_ si _numărul atomic_ al elementului. \
```c++
struct Element{
    
    string name;
    string symbol;
    int atomicNum;
    
};
```

**Arborele** AVL este folosit pentru a gestiona Elementele Chimice din tabel. \
Elementele chimice au fost introduse în arbore dintr-un fișier.
```
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
```
**Lista Înlănțuită** este folosită pentru crearea si gestionarea unei liste cu elemente favorite. \
Elementele favorite sunt alese de către utilizator din Tabelul Periodic. \
Căutarea in lista de favorite se poate face dupa nume, simbol sau numărul atomic al elementului. \
```
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
```
