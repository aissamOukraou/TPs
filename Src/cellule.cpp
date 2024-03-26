#include "cellule.hpp"
#include <iostream>
using namespace std;

 Cellule::Cellule(int valeur, Cellule* const &celluleSuivante): _valeur(valeur), _celluleSuivante(celluleSuivante)
 {

 }
 Cellule::~Cellule()
 {
    
 }
int Cellule::getValeur() const 
{
    return _valeur; 
}
Cellule* Cellule::getCelluleSuivante() const 
{
    return _celluleSuivante;
}
void Cellule::setValeur(const int valeur)
{
    _valeur=valeur;
}
void Cellule::setCelluleSuivante(Cellule* const celluleSuivante)
{
    _celluleSuivante=celluleSuivante;
}

