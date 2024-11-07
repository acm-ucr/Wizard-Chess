#include <iostream>
#include "Queen.h"

void Queen::movePiece(int xM, int yM){
    if(this->isValid(xM, yM)){
                this->setPositionX(this->getPositionX() + xM);
                this->setPositionY(this->getPositionY() + yM);
    }    
}


bool Queen::isValid(int xT, int yT){
    if(!(this->getPositionX() + xT < 0) && !(this->getPositionX() + xT > 8)){
        if(!(this->getPositionY() + yT < 0) && !(this->getPositionY() + yT > 8)){
            if(xT == 0){
                if(yT < 8 || yT > -8){
                    return true;
                }
            }
            else if(yT == 0){
                if(xT < 8 || xT > -8){
                    return true;
                }
            }
            else if((xT < 8 || xT > -8) && (yT == xT || yT == -xT)){
                    return true;
            }

        }
    }        

    return false;
}

bool Piece::isEmpty(){return false;}
