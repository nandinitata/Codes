// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i,z=0,o=0,t=0;
        for(i=0;i<n;i++){
            if(a[i]==0)z++;
        else if(a[i]==1)o++;
        else t++;
    }
    for(int i=0;i<z;i++)
       a[i]=0;
    for(int i=z;i<z+o;i++)
       a[i]=1;
    for(int i=z+o;i<z+o+t;i++)
       a[i]=2;
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends