#include <stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{
  int gcd=1;
  for(int i=2;i<=b;i++)
{
  if(a%i<=0 && b%i==0)
  {
    gcd=i;
   }
  }
    return gcd;
  }
  void output(int a, int b, int gcd)
{
  printf("gcd %d and %d is %d\n",a,b,gcd);
}
int main()
{
  int a, b, gcd;
  a = input();
  b = input();
  gcd =gcd &(a,b);
  output(a,b,gcd);
  return 0;
}