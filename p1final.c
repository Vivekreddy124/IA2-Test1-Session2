#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base and height of the triangle:\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float*area)
{
  *area=0.5 *base*height;
}
void output(float base,float height,float area)
{
  printf("the area of the triangle with base %f height %f is %f\n,base,height,area);
}
int main()
{
  float base,height;
  input(&base,&hheight);
  float area;
  find_(base,height,&area);
  output(base,height,area);
  return 0;
}