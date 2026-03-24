//Problem 1: Printing Elements at even index(0,2,4)

//My Solution:
#include <iostream>
using namespace std;
//Print elements present at even index in the array
int main()
{
    //Given input array
    int array[] = {10,20,30,40,50};
    int i;
    int size = 5;
    for(i=0;i<5;i++)
    {
        if(i%2==0 || i ==0)
        {
            cout<<array[i]<<" ";
        }
    }
    return 0;
}

//Expected Output : 10 30 50
//My Output : 10 30 50


// Problem 2: Print elements of array in reverse order
#include <iostream>
using namespace std;
//Print elements of array at the reverse order
int main()
{
    int array [] = {5,15,25,35,45};
    int i; 
    int size = 5;
    for(i= size-1; i>=0; i--)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
//Expected Output: 45 35 25 15 5
//My Output: 45 35 25 15 5
