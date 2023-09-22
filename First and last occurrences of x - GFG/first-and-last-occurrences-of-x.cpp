//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int a = -1, b = -1;
        int start = 0, end = n-1;
       // int mid = 0;
        while(start<=end)
        {
          int  mid = (start+end)/2;
            if(arr[mid] == x)
            {
                end = mid-1;
                 a=mid;
            }
            else if(arr[mid]>x)
            end = mid-1;
            else start = mid + 1;
        }
        if(a!=-1)
        a=start;
         start=0,end=n-1;
         while(start<=end)
        {
         int   mid = (start+end)/2;
            if(arr[mid] == x)
            {
                start = mid+1;
                 b=mid;
            }
            else if(arr[mid]>x)
            end = mid-1;
            else start = mid + 1;
        }
        if(b!=-1)
        b=end;
        
        return {a,b};
      
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends