//Problem 1: Find the minimum element
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
