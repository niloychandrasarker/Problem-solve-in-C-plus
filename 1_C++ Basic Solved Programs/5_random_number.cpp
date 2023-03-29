/*  C++ Program to Generate Random Numbers between 0 and 100  *//*  C++ Program to Addition of Two Numbers  */

#include <iostream>
using namespace std;

int main()
{
    int num,i;

    cout << "Random number are below  :: " << endl<<endl;
    for (i = 1; i <= 10; i++)
    {
      num=rand()%100;
       cout<<" "<<num<<" ";
    }
    
    
    return 0;
}