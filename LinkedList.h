//
// Created by Sebas Garzon on 10/11/2021.
//

#ifndef NUEVA_CARPETA_LINKEDLIST_H
#define NUEVA_CARPETA_LINKEDLIST_H

#include <vector>
#include "Node.h"
#include <string>

template <class T>
class LinkedList {
public:

    LinkedList();
    bool isEmpty();
    void addNodeFirst( T );
    void addNodeLast( T );
    void addNodeAfterTo(Node<T>*, T );
    void addNodeBeforeTo(Node<T>*, T );
    void addNodeSorted(T);
    Node<T>* findNode( std::string id);
    T* findInfo(std::string id);
    std::vector<T> getLinkedList();
    T* deleteNode(Node<T>*);
    int getSize();
    T* getObject(int);
    T* getFirst();
    T* getLast();

    virtual ~LinkedList();

private:
    Node<T>* head;
    Node<T>* last;


};


#endif //NUEVA_CARPETA_LINKEDLIST_H
