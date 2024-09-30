#include "LinkendList.hpp"

void printList(std::unique_ptr<Nodo> &head){
  const Nodo* aux = std::move(head.get());
  while(aux){
    std::cout << aux->number << "->";
    aux = aux->next.get();
  }
}

void TailInsersion(std::unique_ptr<Nodo> &head, int value){
  if(head == nullptr){
    std::cout << "No existe la cabeza" << std::endl;
    return;
  }
  Nodo* aux = head.get();
  while(aux->next.get() != nullptr){
    aux = aux->next.get();
  }
  std::unique_ptr<Nodo> newNodo = std::make_unique<Nodo>(value);
  aux->next = std::move(newNodo);
}

std::unique_ptr<Nodo> FindFirst(std::unique_ptr<Nodo> &head, int value){
  if(head == nullptr){
    std::cout << "La cabeza no existe" << std::endl;
    return nullptr;
  }
  Nodo* aux = head.get();
  while(aux != nullptr){
    if(aux->number == value){
      std::unique_ptr<Nodo> finded(aux);
      return finded;
    }
    aux = aux->next.get();
  }
  return nullptr;
}