#include "Number.h"
#include <iostream>
#include <cmath>

using namespace std;
bool Number::operator==(const Number& number) const{
    double oldreal=this->getRealPart();
    double oldimagine=this->getImaginaryPart();
    double newreal=number.getRealPart();
    double newimagine=number.getImaginaryPart();
    if(abs(oldreal-newreal)<INFINITELY_SMALL&&abs(oldimagine-newimagine)<INFINITELY_SMALL){
        return true;
    } else{
        return false;
    }
}
bool Number::operator!=(const Number& number) const{
    return !(*this==number);
}