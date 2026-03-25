//Problem 1: Perform basic linear search operation on given array and display found message when target elemnet is found
#include <iostream>
using namespace std;
//To perform normal linear search algorithm in an array and display the target value
int main()
{
    int array [] = {4,8,2,10,6};
    int i;
    int size = 5;
    int target = 10;
    for(i=0;i<size;i++)
    {
        if(array[i]==target)
        {
            cout<<"Found";
        }
    }
    return 0;
}

//Expected Output: Found
//My Output: Found


//Problem 2: To count the number of occurences of the target element in the given array
#include <iostream>
using namespace std;
//To count the number of occurences of the target element in the given array
int main()
{
    int array[]={1,2,2,3,2,4};
    int i;
    int size=6;
    int target=2;
    int count = 0;
    for(i=0;i<size;i++)
    {
        if(array[i]==target)
        {
            count = count + 1;
        }
    }
    cout<<count;
    return 0;
}

//Expected Output: 3
//My Output: 3
