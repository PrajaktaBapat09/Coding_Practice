//Problem 1: Find the minimum element
#include <iostream>
#include <limits.h>
using namespace std;
//Find minimum element of the array
int main()
{
    int array [] = {12,5,8,20,3,15};
    int size = 6;
    int i;
    int min = INT_MAX;
    for(i=0;i<size;i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    cout<<"Minimum Element: "<<min;
    return 0;
}
//Expected Output: 3
//My Output: 3

//Problem 2: Finding the maximum element in the array
#include <iostream>
#include <limits.h>
using namespace std;
//Finding the maximum element in the given array
int main()
{
    int array[] = {12,5,8,20,3,15};
    int size = 6;
    int i;
    int max = INT_MIN;
    for(i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    cout<<"Maximum Element : "<<max;
    return 0;
}

//Expected Output: 20
//My Output: 20

//Problem 3: Finding difference between the max and min element of the given array
#include <iostream>
#include <limits.h>
using namespace std;
//Finding the difference between min and max elements of the array
int main()
{
    int array[] = {7,2,9,4,1};
    int i;
    int size = 5;
    int min = INT_MAX;
    int max = INT_MIN;
    for(i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<max-min<<endl;
    return 0;
}

//Expected Output: 9 8 1
//My Output: 9 8 1
