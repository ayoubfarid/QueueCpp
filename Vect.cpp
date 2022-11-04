//
// Created by pc on 30/09/2022.
//

#include <iostream>
#include "Vect.h"
#include "math.h"

Vect::Vect() {
    nbElement = 0;
}

Vect::Vect(int n) {
    nbElement = n;
    tabElement = new double[n];
    std::cout << "coonstructeur parametrer appler " << this << std::endl;

}
std::ostream & operator << (std::ostream &out, const Vect &v1){

    for (int i = 0; i < v1.nbElement; ++i)
        out << "\t" << v1.tabElement[i];
    out << std::endl ;
    return out;

}
Vect::Vect(const Vect &obj) {
    nbElement = obj.nbElement;
    tabElement = new double[obj.nbElement];
    for (int i = 0; i < obj.nbElement; ++i)
        tabElement[i] = obj.tabElement[i];

    std::cout << "coonstructeur de recopie appler " << this << std::endl;
}
void Vect::operator=(const Vect &obj) {
    nbElement = obj.nbElement;
    tabElement = new double[obj.nbElement];
    for (int i = 0; i < obj.nbElement; ++i)
        tabElement[i] = obj.tabElement[i];

    std::cout << "operatru = est appler " << this << std::endl;

}
/*Vect::~Vect() {
    delete[]   tabElement;
    std::cout << "destructeur appler " << this << std::endl;
}*/

Vect Vect::operator+(Vect vect2) {
    //récuperer la taille
    int nb = (nbElement >= vect2.nbElement) ? nbElement : vect2.nbElement;
    Vect v3(nb);

    for (int i = 0; i < nb; ++i) {
        if (i < nbElement && i < vect2.nbElement)
            v3.tabElement[i] = tabElement[i] + vect2.tabElement[i];

        else if (i >= nbElement) v3.tabElement[i] = vect2.tabElement[i];
        else
            v3.tabElement[i] = tabElement[i];

    }

    return v3;
}

bool Vect::operator==(Vect vect2) {
    if (nbElement != vect2.nbElement) return false;
    for (int i = 0; i < nbElement; i++) {
        if (tabElement[i] != vect2.tabElement[i])return false;
    }
    return true;
}
double Vect::norme()
{
    double res=0.0;
    for (int i = 0; i < nbElement; i++)
        res+= pow(tabElement[i],2);
    return sqrt(res) ;
}
bool Vect::operator<(Vect vect2) {

    if (norme()<vect2.norme())return true;
    return false;
}
bool Vect::operator>(Vect vect2) {

    if (norme()>vect2.norme())return true;
    return false;
}


void Vect::saisieTableau(int i, double valeur) {
    tabElement[i] = valeur;
}

