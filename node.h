#pragma once
#include <iostream>

typedef int datatype;

struct Node {
  datatype data;
  Node* next;
};

typedef Node* Tlist;

void addToHead(Tlist&, const datatype&);
void addAfterNode(const Tlist&, const datatype&);
void deleteFromHead(Tlist&);
void deleteAfterNode(const Tlist&);
inline bool isEmpty(const Tlist&);
void clearList(Tlist&);

Tlist searchList(const Tlist&, const datatype&);
datatype sumList(const Tlist&);
void printList(const Tlist&, const Tlist&);
// void createAsStack(Tlist& , const datatype );
// void createAsQueue(Tlist& , const datatype );
// Tlist findPlace(const Tlist& , const datatype );
// void createByOrder(Tlist& , const datatype );



// HomeWork_1
void betweenZeros(const Tlist&);