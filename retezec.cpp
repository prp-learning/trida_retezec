/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "retezec.hpp"
#define MIN 1
#define MAX 125

const std::string defaultString = "AHOJ SVETE!";

Retezec::Retezec(){
    this->retezec = defaultString;
}

Retezec::Retezec(std::string r){
    if(kontrolaRetezce(r)){
        this->retezec = r;
    }
    else{
        this->retezec = defaultString;
    }
}


Retezec::Retezec(const Retezec & orig){
    this->retezec = orig.getRetezec();
}

Retezec::~Retezec(){}

std::string Retezec::getRetezec()const{
    return this->retezec;
}

bool Retezec::setRetezec(std::string r){
    if(kontrolaRetezce(r)){
        this->retezec = r;
        return true;
    }
    else{
        this->retezec = defaultString;
    }
    return false;
}

bool Retezec::kontrolaRetezce(std::string r){
    /* '.' je pristupovy operator
     funkce length() vrati velikost retezce
     */
    if(r.length()<=MAX||r.length()>=MIN){
        return true;
    }
    return false;
}