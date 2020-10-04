#include <vector>
#include <iostream>
#include "Sort.h"

using namespace std;

namespace sort {
  void swap(vector<StickyNote> &vec, int index1, int index2) {
    StickyNote StickyNoteOne = vec[index1];
    vec[index1] = vec[index2];
    vec[index2]= StickyNoteOne;
  }

  void bubbleSort(vector<StickyNote> &vec) {
    bool cont;

    do {
      cont = false;

      for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i].getValue() > vec[i+1].getValue()) {
          swap(vec, i, i+1);
          cont = true;
        }
      }
    } while (cont);
  }
}
