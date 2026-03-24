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

//Problem 3: Print elements of the array which are greater than the previous element

#include <iostream>
using namespace std;
//Print elements greater than the previous element
int main()
{
    int array [] = {5,7,6,10,8,12};
    int size = 6;
    int i;
    for(i=0;i<size;i++)
    {
        if(array[i]>array[i-1])
        {
            cout<<array[i]<<" ";
        }
    }
    return 0;
}

//Expected Output: 7 10 12
//My Output: 7 10 12

//Problem 4: Print elements of array which are unique and remove the duplicate elements
#include <iostream>
using namespace std;
//Print only the unique elements and remove the duplicates
int main()
{
    int array [] = {1,2,2,3,4,4,5};
    int size = 7;
    int i;
    for(i=0;i<size;i++)
    {
        if(array[i]!=array[i-1])
        {
            cout<<array[i]<<" ";
        }
    }
    return 0;
}

//Expected Output: 1 2 3 4 5
//My Output: 1 2 3 4 5
