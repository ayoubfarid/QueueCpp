//
// Created by pc on 25/10/2022.
//

#ifndef PILEGENERIQUE_VECT_H
#define PILEGENERIQUE_VECT_H
class Vect{
public:
    //Constructeur parametrer
    Vect(int n);
    Vect();
    //Constructeur de recopie
    Vect(const Vect &obj);

    //surchage de l'operateur adition
    Vect operator+ ( Vect vect2);
    //surchage de l'operateur d'egalité
    bool operator== ( Vect vect2);
    void saisieTableau(int i,double valeur);
    bool operator<(Vect vect2);
    void operator=(const Vect &obj);
    bool operator>(Vect vect2);
    double norme();
    //destructeur
    //~Vect();
//private :
    int nbElement;
    double *tabElement;
};
#endif //PILEGENERIQUE_VECT_H
