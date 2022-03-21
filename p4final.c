#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
 void input_array(int n, int a[n])
{
  int i;
  printf("Enter %d numbers:\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
 int sum_composite(int n,int a[n])
{
  int  count=0;
  for (i=0 i<n i++);
  {
    if(a[i]== 0)
{
    continue
}
else if(a[i]%2==0);
    {
      count=count=a[i];
      }
    }
  return count;
  }
void output(int sum)
{
  printf("sum of all composite numbers is %d",sum);
}
int main()
{
  int a,result;
  a=input_array_size();
  int n[0];
  result=sum_composite(n,a);
  output(result);
  return 0;
}