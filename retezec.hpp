/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   retezec.hpp
 * Author: Tomas
 *
 * Created on 8. dubna 2021, 19:01
 */

#ifndef RETEZEC_HPP
#define RETEZEC_HPP
#include <string>
#include <iostream>


class Retezec{
public:
    Retezec();
    Retezec(std::string);
    Retezec(const Retezec &);
    virtual ~Retezec();
    std::string getRetezec()const;
    bool setRetezec(std::string);
    int delkaRetezce()const;
    int pocetSlov()const;
    std::string prvniZnak();
    std::string posledniZnak();
    std::string znakNaPozici();
    bool operator==(const Retezec &)const;//r1(this) == r2(const Retezec & r2)
    //friend std::ostream & operator <<(std::ostream &, const Retezec &);
    
    
    
private:    
    std::string retezec;
    bool kontrolaRetezce(std::string);
    

};

#endif /* RETEZEC_HPP */

