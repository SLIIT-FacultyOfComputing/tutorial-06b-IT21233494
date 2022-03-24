#include "Box.h"

// Implement setters and getters
void Box::setlength(int l){
  length= l;
}
void Box:: setwidth(int w){
  width=w ;
}
void Box::setheight(int h){
  height=h ;
}
int Box:: getlength(int l)
{
  return l ;
}
int Box:: getwidth(int w){
  return w;
}
int Box :: getheight(int h){
  return h;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return (height*width*length);
}
