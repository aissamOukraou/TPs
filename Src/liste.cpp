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
  Cellule* elementSuivant=elementAcuel->getCelluleSuivante();

  while(elementSuivant!= nullptr)
  {
      Cellule* nouveauCellule= new Cellule(elementAcuel->getValeur(),elementAcuel->getCelluleSuivante());
      _premiereCellule=elementAcuel;

      elementAcuel=elementSuivant;

      elementSuivant=elementSuivant->getCelluleSuivante();

  }

}

Liste& Liste::operator=(const Liste& autre) {
  /* votre code ici */
  return *this ;
}

Liste::~Liste() {
   
}

void Liste::ajouter_en_tete(int valeur) {

  if(_premiereCellule != nullptr)
  {
    Cellule* cellule= _premiereCellule;

    Cellule* nouveauCellule= new Cellule(valeur,cellule);
    //delete _premiereCellule;
    _premiereCellule=nouveauCellule;

  }
  else 
  {
    Cellule* nouveauCellule= new Cellule(valeur, nullptr);
    _premiereCellule=nouveauCellule;
  }
}

void Liste::ajouter_en_queue(int valeur) {
  /* votre code ici */
}

void Liste::supprimer_en_tete() {
  /* votre code ici */
}

Cellule* Liste::tete() {
  /* votre code ici */
  return nullptr ;
}

const Cellule* Liste::tete() const {
  /* votre code ici */
  return nullptr ;
}

Cellule* Liste::queue() {
  /* votre code ici */
  return nullptr ;
}

const Cellule* Liste::queue() const {
  /* votre code ici */
  return nullptr ;
}

int Liste::taille() const {
  /* votre code ici */
  return 0 ;
}

Cellule* Liste::recherche(int valeur) {
  /* votre code ici */
  return nullptr ;
}

const Cellule* Liste::recherche(int valeur) const {
  /* votre code ici */
  return nullptr ;
}

void Liste::afficher() const {
  Cellule* celluleActuel= _premiereCellule;
  Cellule* celluleSuivante=_premiereCellule;
  while(celluleSuivante != nullptr)
  {
    int valeur=celluleActuel->getValeur();
    cout << valeur<<" ";
    celluleSuivante=celluleSuivante->getCelluleSuivante();
    celluleActuel=celluleSuivante;
  }
}
