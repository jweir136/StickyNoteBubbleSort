#ifndef STICKY_NOTE_H
#define STICKY_NOTE_H

/**********************************************
*   A CLASS THAT REPRESENTS A SINGLE STICKY  **
*     NOTE WITH A SINGLE INTEGER WRITTEN     **
*     ON IT
**********************************************/
class StickyNote {
  public:
    StickyNote(int value);

    int getValue();

  private:
    int value;
};

#endif
