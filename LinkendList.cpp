#include "LinkendList.hpp"

void printList(std::unique_ptr<Nodo> &head){
  Nodo* aux = head.get();
  if(aux == nullptr){
    std::cout<<"La cabeza es null"<<std::endl;
  }
  while(aux){
    std::cout << aux->number << "->";
    aux = aux->next.get();
  }
  std::cout << "\n";
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

Nodo* FindFirst(std::unique_ptr<Nodo> &head, int value){
  if(head == nullptr){
    std::cout << "La cabeza no existe" << std::endl;
    return nullptr;
  }
  Nodo* aux = head.get();
  while(aux->next != nullptr){
    if(aux->number == value){
      return aux;
    }
    aux = aux->next.get();
  }
  return nullptr;
}

void UpdateValue(std::unique_ptr<Nodo> &head, int toReplace, int toInsert){
  if(head == nullptr){
    std::cout << "La cabeza no existe" << std::endl;
    return;
  }
  Nodo* finded = FindFirst(head, toReplace);
  if(finded == nullptr){
    std::cout << "No se encontro resultado" << std::endl;
    return;
  }
  finded->number = toInsert;
}
void DeleteNode(std::unique_ptr<Nodo> &head, int toDelete){
  if(head == nullptr){
    std::cout << "La cabeza no existe" << std::endl;
    return;
  }
  Nodo* aux = FindFirst(head, toDelete);
  Nodo* aux2 = head.get();
  while(aux2->next->number != aux->number) {
    aux2 = aux2->next.get();
  }
  aux2->next = std::move(aux->next);

}