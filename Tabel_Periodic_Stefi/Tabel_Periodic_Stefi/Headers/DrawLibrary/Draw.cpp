#include "Draw.hpp"
#include <iostream>

using namespace std;









Draw::Draw(){
    
}









void Draw::drawMenu(){
    
    system("clear");
    

    cout << "                                                   .......                                                   " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.       .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "                                                    MENIU                                                    " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.       .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "                                                   .......                                                   " << endl;
    cout << "                                                                                                             " << endl;
    cout << "     1.Afiseaza tabelul periodic.                                                           +-----+          " << endl;
    cout << "                                                                          +-----+           |19   |          " << endl;
    cout << "     2.Afiseaza lista cu elementele chimice.                              |96   |           |  K  |          " << endl;
    cout << "                                                                          |  Cm |           +-----+          " << endl;
    cout << "     3.Afiseaza elementele favorite.                                      +-----+                            " << endl;
    cout << "                                                            +-----+                                          " << endl;
    cout << "     4.Creeaza-ti elementul chimic.                         |31   |                +-----+                   " << endl;
    cout << "                                                            |  Ga |                |20   |                   " << endl;
    cout << "     5.Afiseaza lista proprie cu elemente chimice.          +-----+                |  Ca |           +-----+ " << endl;
    cout << "                                                                                   +-----+           |2    | " << endl;
    cout << "                                                                                                     |  He | " << endl;
    cout << "     6.Iesire                                                                                        +-----+ " << endl;
    cout << "                                                   ________                                                  " << endl;
    cout << "                                                  |        |                                                 " << endl;
}
















void Draw::drawTable(){
    
    system("clear");
    
    cout << "+-----+                                                                                               +-----+"<< endl;
    cout << "|1    |                                                                                               |2    |"<< endl;
    cout << "|  H  |                                                                                               |  He |"<< endl;
    cout << "+-----+-----+                                                           +-----+-----+-----+-----+-----+-----+"<< endl;
    cout << "|3    |4    |                                                           |5    |6    |7    |8    |9    |10   |"<< endl;
    cout << "|  Li |  Be |                                                           |  B  |  C  |  N  |  O  |  F  |  Ne |"<< endl;
    cout << "+-----+-----+                                                           +-----+-----+-----+-----+-----+-----+"<< endl;
    cout << "|11   |12   |                                                           |13   |14   |15   |16   |17   |18   |"<< endl;
    cout << "|  Na |  Mg |                                                           |  Al |  Si |  P  |  S  |  Cl |  Ar |"<< endl;
    cout << "+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+"<< endl;
    cout << "|19   |20   |21   |22   |23   |24   |25   |26   |27   |28   |29   |30   |31   |32   |33   |34   |35   |36   |"<< endl;
    cout << "|  K  |  Ca |  Sc |  Ti |  V  |  Cr |  Mn |  Fe |  Co |  Ni |  Cu |  Zn |  Ga |  Ge |  As |  Se |  Br |  Kr |"<< endl;
    cout << "+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+"<< endl;
    cout << "|37   |38   |39   |40   |41   |42   |43   |44   |45   |46   |47   |48   |49   |50   |51   |52   |53   |54   |"<< endl;
    cout << "|  Rb |  Sr |  Y  |  Zr |  Nb |  Mo |  Tc |  Ru |  Rh |  Pd |  Ag |  Cd |  In |  Sn |  Sb |  Te |  I  |  Xe |"<< endl;
    cout << "+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+"<< endl;
    cout << "|55   |56   |57   |72   |73   |74   |75   |76   |77   |78   |79   |80   |81   |82   |83   |84   |85   |86   |"<< endl;
    cout << "|  Cs |  Ba |  71 |  Hf |  Ta |  W  |  Re |  Os |  Ir |  Pt |  Au |  Hg |  Ti |  Pb |  Bi |  Po |  At |  Rn |"<< endl;
    cout << "+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+"<< endl;
    cout << "|87   |88   |89   |104  |105  |106  |107  |108  |109  |110  |111  |112  |113  |114  |115  |116  |117  |118  |"<< endl;
    cout << "|  Fr |  Ra |  103|  Rf |  Db |  Sg |  Bh |  Hs |  Mt |  Ds |  Rg |  Cn |  Nh |  Fl |  Mc |  Lv |  Ts |  Og |"<< endl;
    cout << "+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+"<< endl;
    cout << endl;
    cout << "                  +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+"<< endl;
    cout << "                  |57   |58   |59   |60   |61   |62   |63   |64   |65   |66   |67   |68   |69   |70   |71   |"<< endl;
    cout << "                  |  La |  Ce |  Pr |  Nd |  Pm |  Sm |  Eu |  Gd |  Tb |  Dy |  Ho |  Er |  Tm |  Yb |  Lu |"<< endl;
    cout << "                  +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+"<< endl;
    cout << "                  |89   |90   |91   |92   |93   |94   |95   |96   |97   |98   |99   |100  |101  |102  |103  |"<< endl;
    cout << "                  |  Ac |  Th |  Pa |  U  |  Np |  Pu |  Am |  Cm |  Bk |  Cf |  Es |  Fm |  Md |  No |  Lr |"<< endl;
    cout << "                  +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+"<< endl;
    cout << endl;
    cout << "Afiseaza elementul cu numarul atomic:" << endl;
    cout << "                                                   ________" << endl;
    cout << "                                                  |        |                   "<< endl;
}










void Draw::drawAnswer(int raspuns){
    
    cout << "                                                      " ; cin >> raspuns;
}
 

 
 
