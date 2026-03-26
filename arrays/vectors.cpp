//Problem 1: To print all elements of the vector
#include <iostream>
#include <vector>
using namespace std;
//Program to print all elements of the vector
int main()
{
    vector<int> vect = {10,20,30,40,50};
    int i;
    int size = 5;
    for(i=0;i<size;i++)
    {
        cout<<vect[i]<<endl;
    }
    return 0;
}
 //Expected output: 10 20 30 40 50
//My Output: 10 20 30 40 50
