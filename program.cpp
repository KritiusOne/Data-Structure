#include "LinkendList.cpp"


int main(){
  Nodo head(1);
  std::unique_ptr<Nodo> aux = std::make_unique<Nodo>(2);
  head.next = std::move(aux);
  printList(head);
  return 0;
}