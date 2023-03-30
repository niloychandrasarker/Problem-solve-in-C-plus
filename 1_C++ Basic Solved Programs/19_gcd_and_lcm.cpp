#include <iostream>
using namespace std;

int main() {
  int x,y,n1,n2;
  int rem,gcd,lcm;
  std::cout << "Enter 2 integer number ::" << std::endl;
  cin>> x >> y;
  n1=x;
  n2=y;

  while(n2!=0) {
    rem = n1%n2;
    n1 = n2;
    n2= rem;
  }

 gcd=n1;
 lcm=(x+y)/gcd;

  cout<<"GCD is "<<x<<" and "<<y<<" is: "<<gcd << endl;
  cout<<"LCM is "<<x<<" and "<<y<<" is: "<<lcm;
  return 0;
}