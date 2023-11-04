//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>

// } Driver Code Ends
//User function Template for C

int findTriplets(int arr[], int n)
    { 
        sort(arr, arr + n);
        
        for (int i = 0; i < n - 2; i++)
    }

//{ Driver Code Starts.
int main()
{
    int t;
	scanf("%d", &t);
	while(t--){
    	int n;
    	scanf("%d", &n);
    	int arr[n];
    	for(int i=0;i<n;i++)
    		scanf("%d", &arr[i]);
        if(findTriplets(arr, n))
            printf("1\n");
        else 
            printf("0\n");
	}
    return 0;
}
// } Driver Code Ends