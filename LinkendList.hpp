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

void printList(const Nodo &head);
#endif