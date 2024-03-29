#include "liste.hpp"

#include <iostream>
#include <cassert>

using namespace std;

Liste::Liste(): _nbElement(0), _premiereCellule(nullptr)
{

}

Liste::Liste(const Liste& autre) {


  Cellule* elementAcuel= autre._premiereCellule->getCelluleSuivante();

  Cellule* premierCellule= new Cellule(autre._premiereCellule->getValeur(), nullptr);

  _premiereCellule=premierCellule;

  while(elementAcuel != nullptr)
  {
      ajouter_en_queue(elementAcuel->getValeur());

      elementAcuel=elementAcuel->getCelluleSuivante();

      _nbElement++;

  }

}

Liste& Liste::operator=(const Liste& autre) {

  

  if(_nbElement <= autre._nbElement)
  { 
    int i=0;

    Cellule* elementActuel=_premiereCellule;

    Cellule* elementARemplcant=autre._premiereCellule;

    while(i < _nbElement)
    {

      elementActuel->setValeur(elementARemplcant->getValeur());

      elementActuel=elementActuel->getCelluleSuivante();

      elementARemplcant=elementARemplcant->getCelluleSuivante();

      i++;
      //ajouter_en_queue(elementARemplcant->getValeur());

      //elementARemplcant=elementARemplcant->getCelluleSuivante();

    }

    while(i >= _nbElement && i< autre._nbElement)
    {
      ajouter_en_queue(elementARemplcant->getValeur());
    }

  }
  
  else if(_nbElement == 0)
  {
    Cellule* elementAcuel= autre._premiereCellule->getCelluleSuivante();

    Cellule* premierCellule= new Cellule(autre._premiereCellule->getValeur(), nullptr);

    _premiereCellule=premierCellule;

    while(elementAcuel != nullptr)
    {
        ajouter_en_queue(elementAcuel->getValeur());

        elementAcuel=elementAcuel->getCelluleSuivante();

        _nbElement++;

    }
    }
  
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
  
  Cellule* elementActuel= _premiereCellule;

  Cellule* dernierElement= elementActuel;

  if(_premiereCellule == nullptr)
  {
    Cellule* element= new Cellule(valeur, nullptr);
    _nbElement++;
  }
  else 
  {
    while(elementActuel != nullptr)
    {
      dernierElement= elementActuel;

      elementActuel=elementActuel->getCelluleSuivante();

    }

  }
  Cellule* nouveauEelement= new Cellule(valeur, nullptr);

  dernierElement->setCelluleSuivante(nouveauEelement);
 
  _nbElement++;
}

void Liste::supprimer_en_tete() {

  Cellule* elementSuivant=_premiereCellule->getCelluleSuivante();
  delete _premiereCellule;
  _premiereCellule=elementSuivant;

  _nbElement--;

}

Cellule* Liste::tete() {

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
    
    std::cout <<celluleActuel->getValeur()<<" ";
    celluleActuel=celluleActuel->getCelluleSuivante();
  }
  cout <<endl;
}
