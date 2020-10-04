#include <iostream>
#include <vector>
#include "StickyNote.h"
#include "Sort.h"

using namespace std;

vector<StickyNote> vec;

///// Init the vector /////

void init() {
  for (int i = 0; i < 10; i++) {
    StickyNote *Note = new StickyNote(10 - i);
    vec.insert(vec.begin() + i, *Note);
  }
}

////// print the vector elements /////

void printVector() {
  for (int i = 0; i < vec.size(); i++)
    cout << vec[i].getValue() << endl;
}

int main() {
  init();
  printVector();
  sort::bubbleSort(vec);
  printVector();
}
