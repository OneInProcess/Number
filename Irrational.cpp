#include "Irrational.h"
#include <iostream>
#include <sstream>

using namespace std;

const double Irrational::getRealPart() const {
    return this->value;
}
Irrational::Irrational(double value) {
    this->value=value;
}
std::string Irrational::toString() const {
    double values=this->value;
    stringstream stringstream1;
    stringstream1<<values;
    string valuestring;
    stringstream1>>valuestring;
    return valuestring;
}
