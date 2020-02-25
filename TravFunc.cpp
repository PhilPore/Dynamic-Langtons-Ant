
//A FUNCTION IS NEEDED FOR COLLISION
void updatesteps(struct traver ant, int row, int col){
    if(!ant.uniqcol[col] || !ant.uniqrow[row] ){
      ant.uniquesteps+=1;
  //    cout<< "The ant's unique steps is: " <<
  //    ant.uniquesteps << endl;
    }
}
void mapsteps(struct traver ant, int row, int col){
  if(ant.uniqcol.empty && ant.uniquerow.empty){
    ant.uniqcol[col] = true;
    ant.uniquerow[row] = true;
  }
  if(ant.uniqcol.find(col) ==0 || ant.uniquecol.find(row) ==0){
    ant.uniqcol[col] = true;
    ant.uniquerow[row] = true;
  }
}

//^ The above for collision, or if you want to be a show off
// with your super cool uwu ants

//collisions probably require the grid to be made



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
void traverse(struct traver ant, int ori){

  if (ant.direction == left) {
  /* switch cases for orientation movement */
  switch(ori){
    case 0:{
        ant.curcol-=1;
    }
      break;
    case 1:{
      ant.currow+=1;
    }
      break;
    case 2:{
        ant.curcol+=1;

    }
      break;
    case 3:{
      ant.currow-=1;
    }
  }
 }
  else{
    switch(ori){
      case 0:{
        ant.curcol+=1;
      }
        break;
      case 1:{
        ant.currow+=1;
      }
        break;
      case 2:{
        ant.curcol-=1
      }
        break;
      case 3:{
        ant.currow-=1;
      }
    }
  }

}
void swapgridNode(struct GridNode val){
  if(val.cursym == '#'){val.cursym = '@'; }
  else{
    val.cursym ='#';
  }
}
