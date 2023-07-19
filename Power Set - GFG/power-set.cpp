//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void solve(vector<string>&ans,string s,string res,int ind,int n)
	{
	    if(ind>=n)
	    {   if(!res.empty())
	        ans.push_back(res);
	        
	      // res="";
	       
	       return;
	    }
	    
	    solve(ans,s,res,ind+1,n);
	    res+=s[ind];
      solve(ans,s, res,ind+1,n);
    
    
	    
	}
	
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    string res="";
		    int n=s.size();
		    
		    solve(ans,s,res,0,n);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends