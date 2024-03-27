#include "liste.hpp"

#include <iostream>
#include <cassert>

using namespace std;

Liste::Liste(): _nbElement(0), _premiereCellule(nullptr)
{

}

Liste::Liste(const Liste& autre) {

  //_premiereCellule=autre._premiereCellule;

  Cellule* elementAcuel= autre._premiereCellule;
  //Cellule* elementSuivant=elementAcuel->getCelluleSuivante();

  while(elementAcuel!= nullptr)
  {
      Cellule* nouveauCellule= new Cellule(elementAcuel->getValeur(),elementAcuel->getCelluleSuivante());

      _premiereCellule=elementAcuel;

      elementAcuel=elementAcuel->getCelluleSuivante();

      _nbElement++;

  }

}

Liste& Liste::operator=(const Liste& autre) {
  
  /*Cellule* autreElementActuel= autre._premiereCellule;
  _premiereCellule=autre._premiereCellule;
  while(autreElementActuel != nullptr)
  {
    Cellule* nouveauCellule= new Cellule(autreElementActuel->getValeur(),autreElementActuel->getCelluleSuivante());
    _premiereCellule=nouveauCellule;
    autreElementActuel=autreElementActuel->getCelluleSuivante();

    _nbElement++;
  
  }*/// L'algorithme est faux !!

  return *this ;
}

Liste::~Liste() {

  if(_premiereCellule == nullptr)
  {
  }
  else 
  {
    Cellule* elementActuel= _premiereCellule;

    while(elementActuel != nullptr)
    {
      Cellule* elementSuivant=elementActuel->getCelluleSuivante();
      delete elementActuel;
      _nbElement--;
      elementActuel=elementSuivant;
    }
    _premiereCellule=nullptr;
  }
   
}

void Liste::ajouter_en_tete(int valeur) {

  Cellule* elementActuel= _premiereCellule;

  if(elementActuel != nullptr)
  {
    Cellule* nouveauElement= new Cellule(valeur, elementActuel);
    _premiereCellule=nouveauElement;
    elementActuel=elementActuel->getCelluleSuivante();

    _nbElement++;
    
  }
  else 
  {
    Cellule* nouveauElement= new Cellule(valeur, nullptr);
    _premiereCellule=nouveauElement;

    _nbElement++;
  }  
}

void Liste::ajouter_en_queue(int valeur) {

  if(_premiereCellule == nullptr)
  {
    Cellule* nouveauCellule= new Cellule(valeur, nullptr);
    _premiereCellule=nouveauCellule;
  }
  Cellule* dernierElement= _premiereCellule;
  Cellule* elementSuivant=dernierElement->getCelluleSuivante();
  while(elementSuivant != nullptr)
  {
      dernierElement=elementSuivant;
      elementSuivant=elementSuivant->getCelluleSuivante();
  } 
  Cellule* nouveauCellule= new Cellule(valeur, nullptr);
  elementSuivant=nouveauCellule;

  _nbElement++;
}

void Liste::supprimer_en_tete() {

  Cellule* elementSuivant=_premiereCellule->getCelluleSuivante();
  delete _premiereCellule;
  _premiereCellule=elementSuivant;

  _nbElement--;

}

Cellule* Liste::tete() {

  //Cellule element= Cellule(_premiereCellule->getValeur(), _premiereCellule->getCelluleSuivante());
  return _premiereCellule;
}

const Cellule* Liste::tete() const {
  
  const Cellule* tete=_premiereCellule;
  
  return tete;

}

Cellule* Liste::queue() {
  
  Cellule* elementActuel= _premiereCellule;

  Cellule* elementSuivant= _premiereCellule;

  while(elementSuivant != nullptr)
    {
      elementActuel=elementSuivant;

      elementSuivant=elementSuivant->getCelluleSuivante();
    }  
    
  return elementActuel ;

}

const Cellule* Liste::queue() const {

  
}

int Liste::taille() const {

  int compteur=0;

  Cellule* elementActuel=_premiereCellule;

  while(elementActuel != nullptr)
  {
    compteur++;

    elementActuel=elementActuel->getCelluleSuivante();
  }

  return compteur ;
}

Cellule* Liste::recherche(int valeur) {

  Cellule* elementActuel= _premiereCellule;

  Cellule* laCellule=_premiereCellule;

  while(elementActuel != nullptr && elementActuel->getValeur() != valeur)
  {
    laCellule=elementActuel;

    elementActuel=elementActuel->getCelluleSuivante(); 
  }

  return elementActuel ; 
  
}

const Cellule* Liste::recherche(int valeur) const {

  Cellule* elementActuel= _premiereCellule;

  Cellule* laCellule=_premiereCellule;

  while(elementActuel != nullptr && elementActuel->getValeur() != valeur)
  {
    laCellule=elementActuel;

    elementActuel=elementActuel->getCelluleSuivante(); 
  }
  
  const Cellule* tete=elementActuel;

  return tete ;
}

void Liste::afficher() const {
  Cellule* celluleActuel= _premiereCellule;
  while(celluleActuel != nullptr)
  {
    //int valeur=celluleActuel->getValeur();
    //cout << valeur<<" ";
    std::cout <<celluleActuel->getValeur()<<" ";
    celluleActuel=celluleActuel->getCelluleSuivante();
  }
}
