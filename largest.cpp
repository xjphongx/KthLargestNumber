/*
    The purpose of this program to the find the kth largest value in the stream
*/

#include <iostream>
#include <array> //include this library to use array functions size
#include <vector>

using namespace std;

class KthLargest{
    private:
        int kth;
        vector<int> n;
    public:
        KthLargest(int k, vector<int>&nums)
        {
            kth = k;
            n = nums;
        }
        int add(int val){
            n.push_back(val);
            sortGreatest(n);
            //cout << "The "<< kth << "rd largest num is " << n.at(kth-1)<<endl;
            return n.at(kth-1);
        }
        void sortGreatest(vector<int>&nums)
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
    int k = 3;//finding the 3rd largest number in the stream
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
    
    //using the functions
    KthLargest*obj = new KthLargest(k,nums);
    obj->sortGreatest(nums);

    //using the return function of add(value)
    int number;
    number = obj->add(3);
    cout << k << "rd largest number is " << number <<endl;
    number = obj->add(5);
    cout << k << "rd largest number is " <<number<<endl;
    number = obj->add(10);
    cout << k << "rd largest number is " << number <<endl;
    number = obj->add(9);
    cout << k << "rd largest number is " <<number<<endl;
    number = obj->add(4);
    cout << k << "rd largest number is " <<number<<endl;
    


    return 0;
}