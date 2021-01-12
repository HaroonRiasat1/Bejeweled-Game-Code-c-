#ifndef DRAWQ_H
#define DRAWQ_H

class Draw1//:public Draw
{
private:
float x;
float y;
int array[8];

public:
Draw1()
{
    x=0;
    y=0;}
  
float get()
{
return x;
}
void setx(float x1)
{
x=x1;
}
void sety(float y2)
{
    y=y2;
}

};
#endif
	
