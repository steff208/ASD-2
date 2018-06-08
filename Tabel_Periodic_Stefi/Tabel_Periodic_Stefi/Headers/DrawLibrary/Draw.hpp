#ifndef Draw_hpp
#define Draw_hpp

#include <stdio.h>
#include <string>

using namespace std;


typedef class Draw Draw;

class Draw{
    
public:
    Draw();
    void drawMenu();
    void drawTable();
    void drawAnswer(int raspuns);
};


#endif 
