#include<stdio.h>
int main()
{
int n,i,,flag = 0;
print f("entre a positive integer:");
scan f("%d",&n);
for (i=2;i<=n/2;++i) {
  //condition for non-prime
  if(n%i == 0) {
    flag = 1;
    break;
  }
}
if(n == 1) {
   print f("1 is neither prime nor composite.");
  }
  else {
    if(flag == o)
      print f("%d is a prime number.",n);
    else
      print f("%d is not a prime number.",n);
  }
  return 0;
}