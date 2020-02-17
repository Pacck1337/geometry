#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main () {
 char  r, x, y, r1, x1;
 y= 50;
 scanf ("%d,%d,%d" &r,&x,&y );
 scanf ("%d,%d" &r1,&x1);
 //cin >> r >> x >> y; 
 //cin >> r1 >> x1 ;
 if (x1+x >= r+r1) {
  printf("Circle #1 (%d,%d,%d)" r,x,y );
  printf("Circle #2 (%d,%d,%d)" r1,x1,y );
  printf("intersects: Circle");
 }
 if (x1+x < r+r1) {
  printf("Circle #1 (%d,%d,%d)" r,x,y );
  printf("Circle #2 (%d,%d,%d)" r1,x1,y );
  printf("intersects: NONE");
 } 
 }

