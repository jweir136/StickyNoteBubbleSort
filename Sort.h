#ifndef SORT_H
#define SORT_H

#include <vector>
#include "StickyNote.h"

using namespace std;

namespace sort {
  /****************************************
  **    CREATE METHOD TO SWAP 2 ELEMENTS **
  **      IN VECTOR                      **
  ****************************************/
  void swap(vector<StickyNote> vec, int index1, int index2);

  /*****************************************
  **    CREATE BUBBLE SORT METHOD         **
  *****************************************/
  void bubbleSort(vector<StickyNote>);
}

#endif
