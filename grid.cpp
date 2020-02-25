#include <iostream>
#include <vector>
#include <boost>

using namespace std;
void traverse(struct traver ant, int ori);
void mapsteps(struct traver ant, int row, int col);
void updatesteps(struct traver ant, int row, int col);
void swapgridNode(struct GridNode val);
int main(){
  struct GridNode graph[9][9];
  //fill this in. lets make the designated symbol "#" for now
  char usedsym = '#';
  struct GrideNode node;
  node.cursym = usedsym;
  //grid now filled up. woohoo.
  for(int i = 0; i< 9; i++){
    gragh[i][0]= node;
    gragh[i][1]= node;
    gragh[i][2]= node;
    gragh[i][3]= node;
    graph[i][4]= node;
    graph[i][5]= node;
    graph[i][6]= node;
    graph[i][7]= node;
    graph[i][8]= node;
  }
  struct traver walker; /* get half
  dynamically rather than statically in the actual project */
  walker.curcol, walker.currow = 4;

// ant will be placed in the middle. we'll test out its path
int turns = 10;
int j = 0;
//we want to do our zero orient first
if(gragh[walker.currow][walker.curcol].cursym = '#'){
  //left
  walker.direction = left
  swapgridNode(gragh[walker.currow][walker.curcol]);
  walker.prevcol = curcol;
  walker.prevrow = currow;
  traverse(walker, walker.orient%4);
  walker.prevdir = walker.direction;
}
else{
  walker.direction = right
  swapgridNode(gragh[walker.currow][walker.curcol]);
  walker.prevcol = curcol;
  walker.prevrow = currow;
  traverse(walker, walker.orient%4);
  walker.prevdir = walker.direction;
}
//this is where the logic  happens
while( j < turns){ //condition is place holder for proof of concept
  //this is where we out to do checks for directional change
  if(gragh[walker.curcol][walker.currow].cursym = '#'){
    walker.direction = left;
  }
  else{
    walker.direction = right;
  }
  if(walker.prevdir != walker.direction){
    if(orientation == 0){ oriantation = 3;}
    else{
    orientation-=1;
  }

  }
  walker.prevcol = curcol;
  walker.prevrow = currow;
  traverse(walker, walker.orient%4);
  walker.prevdir = walker.direction;

  j++;
}

}
