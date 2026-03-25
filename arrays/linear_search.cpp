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

//Problem 3: Find the index of first occurrence of the target element in the given array
#include <iostream>
using namespace std;
//To find the first occurence of a given element in the array
int main()
{
    int array [] = {5,3,7,3,9};
    int i;
    int size = 5;
    int target = 3;
    int index;
    for(i=0;i<size;i++)
    {
        if(array[i]==target)
        {
            index=i;
            break;
        }
    }
    cout<<index;
    return 0;
}

//Expected Output: 1
//My Output : 1

//Problem 4: To find the all the positions of the target element given in the array
#include <iostream>
using namespace std;
//To find the all the positions of the target element given in the array
int main()
{
    int array[]={2,4,2,6,2,8};
    int i;
    int size = 6;
    int target = 2;
    int index;
    for(i=0;i<size;i++)
    {
        if(array[i]==target)
        {
            index = i;
            cout<<index<<" ";
        }
    }
    return 0;
}

//Expected Output: 0 2 4
//My Output : 0 2 4
