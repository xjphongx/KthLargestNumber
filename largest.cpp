/*
    The purpose of this program to the find the kth largest value in the stream
*/

#include <iostream>
#include <array> //include this library to use array functions size
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
            int temp;
            for(int a = 0;a<nums.size()-1;a++)
            {

                for(int b = 0;b < nums.size()-1;b++)
                {

                    if(nums.at(b) < nums.at(b+1))
                    {

                        temp = nums.at(b+1);
                        nums.at(b+1)= nums.at(b);
                        nums.at(b)=temp;
                    }

                }

            }

            //testing loop(WORKS)
            cout << "Display sortGreatest results:"<<endl;
            for(int c = 0; c < nums.size();c++)
            {
                cout << nums.at(c)<< " ";
            }
            cout <<endl;


        }


};




int main()
{
    //given
    int k = 3;
    int arr[] = {4,5,8,2};


    //make a vector from this array
    int n = sizeof(arr)/sizeof(arr[0]); // this is weird
    vector<int> nums;
    for(int a = 0; a < n; a++)
    {
        nums.push_back(arr[a]);
        cout << nums.at(a) << " ";

    }
    cout <<endl;

    //sort the vector from greatest to least
    

    KthLargest*obj = new KthLargest(k,nums);
    obj->sortGreatest(nums);

    return 0;
}