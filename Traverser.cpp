#include <maps>

struct traver{
  enum dir{left, right};
  dir direction;
  map<int, bool> uniqcol;
  map<int, bool> uniqrow;
//need an orientation value that gets us to move around
//enum ori{ver, horz}orient; //ver = vertical, row trave

//horz, horizontal, column trav
int uniquesteps = 0; //we'll use this to find unique steps

//current row. will be used for collision
int prevrow = 0;
int prevcol = 0;
int currow = 0;
int curcol = 0;
dir prevdir; //this will help compare with orient
int orient = 0;
/*
orient operates base 4
0) 90 R: col+1 -> L: col-1 <-
1)180 R/L: row+1 V
2)270 R: col-1 <-, L: col+1 ->
3)360 R/L row-1 ^

Notes:
if we need to change direction on 0, meaning
 from left we change to right, it has to be
 +3 new dir direction

 Otherwise -1 in new direction
*/

};
