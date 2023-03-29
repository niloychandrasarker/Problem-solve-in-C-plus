/*  C++ Program to Check whether a year is Leap year or not  */

#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<"Enter any Year :: ";
    cin>>year;

    if(year%100==0 && year%400==0 || year%4==0)
    {
      
      
           cout<<"\nThe Entered Year [ "<<year<<" ] is a Leap Year.\n";


    }
    else
    {
       
          
        
            cout<<"\nThe Entered Year [ "<<year<<" ] is NOT a Leap Year.\n";
      

    }

   return 0;
}