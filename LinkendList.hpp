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
void tailInsersion(std::unique_ptr<Nodo> &head, int value);
Nodo* findFirst(std::unique_ptr<Nodo> &head,int value);
void updateValue(std::unique_ptr<Nodo> &head, int toReplace, int toInsert);
void deleteNode(std::unique_ptr<Nodo> &head, int toDelete);
#endif