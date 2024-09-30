#ifndef LIST_FUNCTION
#define LIST_FUNCTION

#include <memory>
#include <iostream>
struct Nodo {
  int number;
  std::unique_ptr<Nodo> next;
  Nodo(int numero) {
    number = numero;
    next = std::move(nullptr);
  }
};

void printList(std::unique_ptr<Nodo> &head);
void TailInsersion(std::unique_ptr<Nodo> &head, int value);
std::unique_ptr<Nodo> FindFirst(std::unique_ptr<Nodo> &head,int value);


#endif