//
// Created by pc on 04/11/2022.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

template<class T>
class Queue {

    public:
        Queue(int );
        Queue();
        Queue(const T &);
        void enqueue(T );
        void dequeue();
        bool isEmpty();
    public:

        int head;
        int queue;
        int nbrElement;
        T*  tab;



};


#endif //QUEUE_QUEUE_H
