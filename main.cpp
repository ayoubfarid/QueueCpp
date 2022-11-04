#include <iostream>
#include "Queue.cpp"
#include "Vect.cpp"
int main() {
    Vect v1(3);
    Vect v2(v1);
    Vect v3(3);
    Vect v4(3);
    Queue<Vect> fv(4);
    for (int i = 0; i < 5; i++) {
        v1.saisieTableau(i,i+3);
    }
    for (int i = 0; i < 5; i++) {
        v2.saisieTableau(i,i+10);
    }
    for (int i = 0; i < 3; i++) {
        v3.saisieTableau(i,i+15);
    }
    for (int i = 0; i < 3; i++) {
        v4.saisieTableau(i,i-5);
    }

    fv.enqueue(v1);
    fv.enqueue(v2);
    fv.enqueue(v3);
    fv.enqueue(v4);
    std::cout << "afficher les elements du tableau des vecteur "  <<std::endl;
    std::cout<<fv;
    std::cout << "dequeue est appeler  "  <<std::endl;
    fv.dequeue();
    std::cout << "afficher les elements du tableau des vecteur  "  <<std::endl;
    std::cout<<fv;

    fv.enqueue(v1);
    std::cout << "afficher les elements du tableau des vecteur  "  <<std::endl;
    std::cout<<fv;
    return 0;
}
