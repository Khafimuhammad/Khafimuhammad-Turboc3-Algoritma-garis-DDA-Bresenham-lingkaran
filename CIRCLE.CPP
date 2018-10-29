
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void bfill(int x,int y,int f_col,int b_col){
int current = getpixel(x,y);
if(current!=f_col&&current!=b_col){
delay(1);
putpixel(x,y,f_col);
bfill(x+1,y,f_col,b_col);
bfill(x-1,y,f_col,b_col);
bfill(x,y+1,f_col,b_col);
bfill(x,y-1,f_col,b_col);
}
}
void main(){
int xc,yc,r;
int gd = DETECT,gm = DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"Enter co-ordinates of the centre: ";
cin>>xc>>yc;
cout<<"Enter radius of circle: ";
cin>>r;
circle(xc,yc,r);
getch();
closegraph();
}