#include <iostream>
#include <string>

struct node{
  int value;
  node* next;
  node(int x) : value(x), next(NULL) {}
};

node* smallest(node* start){
    if(start == NULL)   return start;
    auto current = start;
    auto min = start;
    while(current->next != start){
        min = (current->next->value < min->value) ? current->next : min;
    }
    return min;
}

int main()
{
  node* head = new node(1);
  node* start = head;
  int i = 1;
  while(i < 5){
      start->next = new node(i+2);
      start = start->next;
  }
  start = head;
  while(!start){
    std::cout << start->value << std::endl;
    start = start->next;
  }
  return 0;
}
