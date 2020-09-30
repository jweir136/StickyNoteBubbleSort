#include <any>
#include <vector>
#include <iostream>
#include "Sort.h"

using namespace std;

namespace sort {
  void swap(StickyNote *xp, StickyNote *yp) {  
      StickyNote temp = *xp;  
      *xp = *yp;  
      *yp = temp;  
  }  

  void bubbleSort(vector<StickyNote> vec) {
    bool cont;

    do {
      cont = false;

      for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i].getValue() > vec[i+1].getValue()) {
          swap(&vec[i], &vec[i+1]);
          cont = true;
        }
      }
    } while (cont);
  }
}
