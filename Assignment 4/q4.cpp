#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    vector<char> arr = {'a','a','b','c'};
    vector<int> ans; 
    queue<char> temp;

    for(int i=0; i<arr.size(); i++)
    {
        if(temp.empty())
        {
            temp.push(arr[i]);
            ans.push_back(temp.front());
        }
        else if(!temp.empty() && arr[i] == temp.front())
        {
            temp.pop();
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(temp.front());
            temp.push(arr[i]);   
        }
    }
    for(int i=0; i<ans.size(); i++)
    {
        if(ans[i] == -1)
            cout << -1 << " ";
        else
            cout << (char)ans[i] << " ";
    }
    cout << endl;

    return 0;
}