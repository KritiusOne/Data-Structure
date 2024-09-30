#include "LinkendList.hpp"
void printList(const Nodo &head){
  const Nodo* aux = &head;
  while(aux){
    std::cout << aux->number << "->";
    aux = aux->next.get();
  }
}