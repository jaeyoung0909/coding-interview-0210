#include <stdio.h>
using namespace std;

typedef struct Node{
    Node* prev;
    Node* post;
    int val;
}Node_list;

class Linkedlist{
    int num;
    Node_list* first;
    Node_list* last;
    public:
        void push(Node_list* node);
        void printReverse();
        

    Linkedlist(int _num, Node_list* _first, Node_list* _last){
        num = _num;
        first = _first;
        last = _last;
    }    
};

void Linkedlist::push(Node_list* node){
    if(!num){
        node->prev = NULL;
        node->prev = NULL;
        first = node;
        last = node;    
    }
    node->post = NULL;
    last->post = node;
    node->prev = last;
    last = node;
    num++;
}

void Linkedlist::printReverse() {
  // TODO
    Node_list* comp = first;
    for(int i = 0; i<num;i++){
        printf("%d\n", comp->val);
        comp = comp->post;
    }
}


int main() {
  
  Node_list* first = new Node_list;
  Node_list* last = new Node_list;
  Linkedlist list(0, first, last);
  for(int i =5; i>0; i--){
      Node_list* ex = new Node_list;
      ex->val = i;
      list.push(ex);
  }
  list.printReverse();
  return 0;
}