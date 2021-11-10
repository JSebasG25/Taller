//
// Created by Sebas Garzon on 10/11/2021.
//

#include "LinkedList.h"
#include "string"

template <class T>
LinkedList<T>::LinkedList(){
    LinkedList<T>::head = NULL;
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL ? true : false;
}

template<class T>
void LinkedList<T>::addNodeFirst( T info ) {
    if( isEmpty( ) ){
        head = new Node<T>( info );
    }else{
        Node<T>* newNode = new Node<T>( info );
        newNode->next = head;
        head = newNode;
    }
}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    std::vector<T> out;
    Node<T>* aux = head;
    while( aux != NULL ){
        out.push_back( aux->info );
        aux = aux->next;
    }

    return out;
}


template<class T>
T *LinkedList<T>::getObject(int num) {
    if (isEmpty()){
        return NULL;
    }else{
        Node<T>* aux = head;
        int counter=0;
        while (aux!=NULL){
            if (counter==num){
                return &aux->info;
            }
            aux = aux->next;
            counter++;
        }
    }
    return nullptr;
}

template<class T>
Node<T> *LinkedList<T>::findNode(std::string id) {
    Node<T>* aux = head;
    while( aux != NULL ){
        if( id.compare( aux->info.getId( ) ) == 0 ){
            return aux;
        }
        aux = aux->next;
    }

    return NULL;
}

template<class T>
T* LinkedList<T>::findInfo(std::string id) {
    if (isEmpty()){
        return NULL;
    }else{
        Node<T>* aux;
        aux=head;
        while (aux){
            if (id.compare(aux->info.getId()) == 0){
                return &aux->info;
                break;
            }else{
                aux = aux->next;
            }
        }
        return NULL;
    }
}


template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T>* node, T router) {
    Node<T>* newNode = new Node<T>(router);
    if (isEmpty()){
        head = newNode;
    }else{
        newNode->next=node->next;
        node->next=newNode;
    }
}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T>* node, T router) {
    if (isEmpty()){
        head = new Node<T>(router);
    }else{
        if (node == head){
            addNodeFirst(router);
        }else{
            Node<T>* aux = head;
            while (aux->next != node){
                aux = aux->next;
            }
            Node<T>* newNode = new Node<T>(router);
            newNode->next = aux->next;
            aux->next=newNode;
        }
    }
}

template<class T>
void LinkedList<T>::addNodeLast( T info ) {
    //34 - 56 - 76 - 90 - 59
    Node<T>* newNode = new Node<T>( info );
    if( isEmpty( ) ){
        head = newNode;
    }else{
        Node<T>* aux = head;
        while( aux->next != NULL ){
            aux = aux->next;
        }

        aux->next = newNode;
    }

}



template<class T>
LinkedList<T>::~LinkedList() {
    while( head != NULL ){
        Node<T>* aux = head;
        head = head->next;

        delete( aux );
    }
}