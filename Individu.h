/**
 * @file Individu.h
 * @author fakhfakh ahmed
 * @brief Spécifie une classe Individue en relation reciproque avec sa Voiture 
 * @details representer une personne ça sert a rien hayhayhay samouelle comment tou tapelle
 * ytryrtyrtyryry
 * ryrtyryryryryryry
 * @version 0.1
 * @date 2022-10-17
 * @warning Un Individu correspond au plus une Voiture
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief representer blablabla
 * @deprecated utilise a la place fuefhhuiefggfifeu
 * 
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;         // Le nom de l'individu
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;      // Le prénom de l'individu
    /**
     * @brief  Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
    /**
     * @brief construit un nouveau objet qui s'apelle Individu  a partir se son nom et  de son prenom
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief destruction de l'objet Individu
     * 
     */
    ~Individu();

    /**
     * @brief retourne l'identite de l'individu
     * 
     * @return string l'identite sous la forme nom prenom 
     * @bug bug de ouf a fait bruler ma maison
     * @todo ajouter un param pour preciser si un veut un affichage de type nom prenom ou non
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief definie la Voiture de l'Individu
     * 
     * @param voiture pointeur vers l'objet Voiture pilotée par l'objet Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H