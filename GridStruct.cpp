/*
structure will have a set of variables

-is occupied, a map
 with ant struct as key and bool as element
-

*/

struct GridNode{
  map<int, struct traver> occup; //is occupied
  //if the ant moves we need to kill whats in the map
  char cursym;
  char lblock = '#';
  char rblock = '@';
};
