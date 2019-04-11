/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Contrato.cpp
 * Author: ff_cesar
 * 
 * Created on April 10, 2019, 10:21 PM
 */

#include "Contrato.h"

Contrato::Contrato()
{
}

Contrato::Contrato(const Contrato& orig) {
}

Contrato::~Contrato() {
}
void Contrato::cambiarTipoDeContrato(std::string tipo){
    tipoDeContrato = tipo;
}
void Contrato::setTipoContrato(std::string tipo){
    tipoDeContrato = tipo;
}
void Contrato::setInicioContrato(int day, int mes, int year){
    fechaInicioContrato = new Fecha(day, mes, year);
}
