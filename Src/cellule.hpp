#ifndef LIFAP6_LISTE_CELLULE_HPP
#define LIFAP6_LISTE_CELLULE_HPP

class Cellule {

public:
  Cellule* suivante;
  int valeur;
  Cellule(int valeur, Cellule* const &celluelSuivante);
  ~Cellule();
  int getValeur() const;
  Cellule* getCelluleSuivante() const;
  void setValeur(int const valeur);
  void setCelluleSuivante( Cellule* const CelluleSuivante);

private:
  int _valeur;
  Cellule* _celluleSuivante;

} ;

#endif
