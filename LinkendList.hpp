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
Nodo* FindFirst(std::unique_ptr<Nodo> &head,int value);
void UpdateValue(std::unique_ptr<Nodo> &head, int toReplace, int toInsert);
void DeleteNode(std::unique_ptr<Nodo> &head, int toDelete);
#endif