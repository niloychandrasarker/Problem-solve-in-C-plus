/* C++ Program to Print Pascal Triangle using function  */
#include <iostream>
using namespace std;

int main()
{
    int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle:\n";
    cout << "-----------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(blk=1;blk<=row-i;blk++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}
