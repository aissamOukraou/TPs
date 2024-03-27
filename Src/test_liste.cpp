#include "liste.hpp"
using namespace std;
#include <iostream>
#include <cassert>

int main() {

  /* adaptez ce fichier selon votre structure */

  Liste l1 ;
  l1.ajouter_en_tete(10) ;
  l1.ajouter_en_tete(11) ;
  std::cout << "attendu : [ 11 10 ]" << std::endl ;
  l1.afficher() ; // [ 11 10 ]
  cout<<endl;

  /*decommentez au fur et à mesure de votre progression */
  
  assert(l1.tete()->getValeur() == 11) ;
  cout <<"On a depasse le premier test"<<endl;
  assert(l1.queue()->getValeur() == 10) ;
  cout << "on a depasse le deuxieme test"<<endl;
  assert(l1.recherche(11)) ;
  cout <<"On a trouve la valeur"<<endl;
  cout <<l1.recherche(11)->getValeur()<<" doit etre egal a 11"<<endl;
  assert(l1.recherche(10)) ;
  cout <<"On a depasse le deuxieme test"<<endl; 
  assert(!l1.recherche(12)) ;
  cout <<"on a depasse le test mais le nombre n'existe pas"<<endl;
  assert(l1.taille() == 2) ;
  cout <<"La taille est bien egale a de 2"<<endl;
  /*Liste l2(l1) ;
  l2.ajouter_en_tete(20) ;
  std::cout << "attendu : [ 20 11 10 ]" << std::endl ;
  l2.afficher() ; // [ 20 11 10 ]
  assert(l2.tete()->valeur == 20) ;
  assert(l2.queue()->valeur == 10) ;
  assert(l2.recherche(20)) ;
  assert(l2.recherche(11)) ;
  assert(l2.recherche(10)) ;
  assert(!l2.recherche(21)) ;

  Liste l3 ;
  l3.ajouter_en_tete(30) ;
  l3 = l1 ;
  std::cout << "attendu : [ 11 10 ]" << std::endl ;
  l3.afficher() ; // [ 11 10 ]
  assert(l3.tete()->valeur == 11) ;
  assert(l3.queue()->valeur == 10) ;
  assert(l3.recherche(11)) ;
  assert(l3.recherche(10)) ;
  assert(!l3.recherche(30)) ;

  l1.supprimer_en_tete() ;
  l1.afficher() ; // [ 10 ]
  assert(l1.tete()->valeur == 10) ;
  assert(l1.queue()->valeur == 10) ;
  assert(l1.recherche(10)) ;
  assert(!l1.recherche(11)) ;

  l1.ajouter_en_tete(12) ;
  std::cout << "attendu : [ 12 10 ]" << std::endl ;
  l1.afficher() ; // [ 12 10 ]
  assert(l1.tete()->valeur == 12) ;
  assert(l1.recherche(10)) ;

  std::cout << "attendu : [ 20 11 10 ]" << std::endl ;
  l2.afficher() ; // [ 20 11 10 ]
  assert(l2.tete()->valeur == 20) ;
  assert(l2.recherche(11)) ;
  assert(l2.recherche(10)) ;

  std::cout << "attendu : [ 11 10 ]" << std::endl ;
  l3.afficher() ; // [ 11 10 ]
  assert(l3.tete()->valeur == 11) ;
  assert(l3.recherche(10)) ;

  l3.ajouter_en_queue(31) ;
  std::cout << "attendu : [ 11 10 31 ]" << std::endl ;
  l3.afficher() ; // [ 11 10 31 ]
  assert(l3.tete()->valeur == 11) ;
  assert(l3.queue()->valeur == 31) ;
  assert(l3.recherche(11)) ;
  assert(l3.recherche(10)) ;
  assert(l3.recherche(31)) ;
  */

  return 0 ;
}
