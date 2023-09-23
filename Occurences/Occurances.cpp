//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <cstdlib>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        int indices[n][2];
        int diff[n];
        
        for(int i=0;i<n;i++)
        {
            indices[i][0]=i;
            indices[i][1]=i;
        }
        for(int i=0;i<n;i++)
        {
            int element=arr[i];
            for(int j=0;j<n;j++)
            {
                if(arr[j]==arr[i])
                {
                    if(indices[i][0]!=j)
                        indices[i][1]=j;
                }
            }
        }
        int greatest;
        for(int i=0;i<n;i++)
        {
            diff[i]=abs(indices[i][0]-indices[i][1]);
        }
        greatest=diff[0];
        for(int i=0;i<n;i++)
        {
            if(diff[i]>greatest)
                greatest=diff[i];
        }
        
        return greatest;
        
    //Code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}