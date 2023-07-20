//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       int arr[26];
       for(int i=0;i<26;i++)
       {
         arr[i]=0;
         
       }
       int n=s.size();
       for(int i=0;i<n;i++)
       {  int di=s[i]-'a';
           arr[di]+=1;
       }
       
       for(int i=0;i<n;i++)
       {
           if(arr[s[i]-'a']==1)
           return s[i];
       }
       
       return '$';
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends