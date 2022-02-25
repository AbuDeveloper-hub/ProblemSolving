#include<iostream>
#include<vector> //vector library

using namespace std;

int main()
{
    //creating vector
    vector<int> vect(5,10);
    vector<int> vectr{9,8,7,6,5,4,3,2,1,0};   
    
    for(int i=0;i<vectr.size();i++)
    {
        cout<<vectr[i]<<" ";
    }
    cout<<vectr.capacity();
    return 0;
}
