//
// Created by pc on 04/11/2022.
//
#include <iostream>
#include "Queue.h"


template<class T>
std::ostream & operator<< (std::ostream &out, const Queue<T> &st)
{
    for (int i = st.head; i <st.queue ; i++)
        out << st.tab[i];
    out << std::endl;

    return out;
}
template<class T> Queue<T>::Queue(int n){
    head=0;
    queue=0;
    nbrElement=n;
    tab = new T[n];
}
template<class T> Queue<T>::Queue(const T &obj){
    head=obj.head;
    queue=obj.queue;
    tab = new T[queue-head];
    for (int i = head; i < obj.queue; i++)
        tab[i] = obj.tab[i];

    std::cout << "coonstructeur de recopie appler file" << this << std::endl;
}
template<class T> bool Queue<T>::isEmpty() {
    if(queue-head==0) return true;
    return false;
}
template<class T> void Queue<T>::enqueue (T  elem){

    /* Ajout d'un nouveau element au file */
    if (nbrElement==(queue-head-1))
    {
        for(int i=++head;i<=queue;i++)
        {
            tab[i-head]=tab[i];
        }
    }
    tab[queue]= elem;
    std::cout << "address tab + head " << tab+head << std::endl;
    std::cout<<tab[queue]<<std::endl;


    queue++;

}


template<class T> void Queue<T>:: dequeue(){
    if(isEmpty()) return;
    head++;





}
