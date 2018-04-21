//
// Created by zyd on 2017/3/28.
// File Name:      Complex.cpp
// Author:         Zhao YuDong
// Student Number: 3015230120
// Email:          zhao746714868@qq.com
// Assignment:     Complex
// Version:        c++
// Description:    Overloaded operators for complex numbers
#include <iostream>
#include <cmath>
#include <sstream>
#include "Complex.h"
using namespace std;
Complex::Complex() {
    shi=0;
    xu=0;
}
Complex::Complex(const double a, const double b) {
    shi=a;
    xu=b;
}
Complex::Complex(const double a) {
    shi=a;
    xu=0;
}
Complex::~Complex() {

}
const double Complex::getImaginaryPart() const {
    return xu;
}
const double Complex::getRealPart() const {
    return shi;
}
Complex Complex::add(const Complex sc) const {
    double oldShi=this->shi;
    double oldXu=this->xu;
    double newShi=sc.shi;
    double newXu=sc.xu;
    double finalShi=oldShi+newShi;
    double finalXu=oldXu+newXu;
    return Complex(finalShi,finalXu);
}
Complex Complex::subtract(const Complex sc) const {
    double oldShi=this->shi;
    double oldXu=this->xu;
    double newShi=sc.shi;
    double newXu=sc.xu;
    double finalShi=oldShi-newShi;
    double finalXu=oldXu-newXu;
    return Complex(finalShi,finalXu);
}
Complex Complex::multiply(const Complex sc) const {
    double oldShi=this->shi;
    double oldXu=this->xu;
    double newShi=sc.shi;
    double newXu=sc.xu;
    double finalShi=oldShi*newShi-oldXu*newXu;
    double finalXu=oldShi*newXu+oldXu*newShi;
    return Complex(finalShi,finalXu);
}
Complex Complex::divide(const Complex sc) const {
    double oldShi=this->shi;
    double oldXu=this->xu;
    double newShi=sc.shi;
    double newXu=sc.xu;
    double finalShi=(oldShi*newShi+oldXu*newXu)/(newShi*newShi+newXu*newXu);
    double finalXu=(oldXu*newShi-oldShi*newXu)/(newShi*newShi+newXu*newXu);
    return Complex(finalShi,finalXu);
}
double Complex::abs() const {
    return sqrt(this->shi*this->shi+this->xu*this->xu);
}
std::string Complex::toString() const {
    if(this->xu==0){
        string shibu;
        stringstream stringstream1;
        stringstream1<<this->shi;
        stringstream1>>shibu;
        return shibu;
    } else if(this->xu>0){
        string shibu;
        string xubu;
        stringstream stringstream1;
        stringstream1<<this->shi;
        stringstream1>>shibu;
        stringstream1.clear();
        stringstream1<<this->xu;
        stringstream1>>xubu;
        return shibu+"+"+xubu+"i";
    } else{
        string shibu;
        string xubu;
        stringstream stringstream1;
        stringstream1<<this->shi;
        stringstream1>>shibu;
        stringstream1.clear();
        stringstream1<<this->xu;
        stringstream1>>xubu;
        return shibu+xubu+"i";
    }
}
Complex& Complex::operator+=(const Complex &sc) {
    *this=add(sc);
    return *this;
}
Complex& Complex::operator-=(const Complex &sc) {
    *this=subtract(sc);
    return *this;
}
Complex& Complex::operator*=(const Complex &sc) {
    *this=multiply(sc);
    return *this;
}
Complex& Complex::operator/=(const Complex &sc) {
    *this=divide(sc);
    return *this;
}
double& Complex::operator[](const int index) {
    if(index==0){
        return this->shi;
    } else{
        return this->xu;
    }
}
const double& Complex::operator[](const int index) const {
    if(index==0){
        return this->shi;
    } else{
        return this->xu;
    }
}
Complex Complex::operator+() const {
    return *this;
}
Complex Complex::operator-() const {
    double shinew=-this->shi;
    double xunew=-this->xu;
    return Complex(shinew,xunew);
}
Complex& Complex::operator++() {
    shi+=1;
    return *this;
}
Complex Complex::operator++(int) {
    Complex temp(shi,xu);
    shi+=1;
    return temp;
}
Complex& Complex::operator--() {
    shi-=1;
    return *this;
}
Complex Complex::operator--(int) {
    Complex temp(shi,xu);
    shi-=1;
    return temp;
}
ostream& operator<<(std::ostream& ostr, const Complex& sc){
    if(sc.xu==0){
        ostr<<sc.shi;
    }else if(sc.xu>0){
        ostr<<sc.shi<<"+"<<sc.xu<<"i";
    } else{
        ostr<<sc.shi<<sc.xu<<"i";
    }
    return ostr;
}
istream& operator>>(std::istream& ostr, Complex& sc){
    ostr>>sc.shi;
    ostr>>sc.xu;
    return ostr;
}
Complex operator+(const Complex& sc1, const Complex& sc2){
    return sc1.add(sc2);
}
Complex operator-(const Complex& sc1, const Complex& sc2){
    return sc1.subtract(sc2);
}
Complex operator*(const Complex& sc1, const Complex& sc2){
    return sc1.multiply(sc2);
}
Complex operator/(const Complex& sc1, const Complex& sc2){
    return sc1.divide(sc2);
}