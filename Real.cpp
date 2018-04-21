#include "Real.h"
#include <iostream>

using namespace std;

bool Real::operator<(const Real& real){
    return this->getRealPart()<real.getRealPart();
}
bool Real::operator<=(const Real& real){
    return this->getRealPart()<=real.getRealPart();
}
bool Real::operator>(const Real& real) {
    return this->getRealPart() > real.getRealPart();
}
bool Real::operator>=(const Real& real){
    return this->getRealPart()>=real.getRealPart();
}
const double Real::getImaginaryPart() const {
    return 0;
}