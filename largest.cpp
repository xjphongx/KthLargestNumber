/*
    The purpose of this program to the find the kth largest value in the stream
*/

#include <iostream>
#include<array> //include this library to use array functions size
#include <vector>

using namespace std;

class KthLargest{

    public:
        KthLargest(int k, vector<int>&nums)
        {

        }
        int add(int val){



        }
        int sortGreatest(vector<int>&nums)
        {



        }


};




int main()
{
    //given
    int k = 3;
    int arr[] = {4,5,8,2};


    //make a vector from this array
    int n = size(arr);
    vector<int> nums;
    for(int a = 0; a < n; a++)
    {
        nums.push_back(arr[a]);
        cout << "hi" <<endl;
        cout << nums.at(a) <<endl;

    }

    KthLargest*obj = new KthLargest(k,nums);

    return 0;
}