#include "LinkendList.cpp"

int main(){
  std::unique_ptr<Nodo> head = std::make_unique<Nodo>(0);
  for(int i = 1; i<=20; i++ ){
    tailInsersion(head, i);
  }
  printList(head);
  for (int i = 0; i < 10; i++){
    head = headInsertion(head, 21);
  }
  printList(head);

  return 0;
}