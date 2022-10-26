
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
      
        vector<int>spiral;
        int l=0,k=0,last_row=R-1,last_col=C-1;
        while(l<=last_row && k<=last_col)
        {
          
            for(int i=l;i<=last_col;i++)
            {
                spiral.push_back(a[k][i]);
            }
            k+=1;

            for(int i=k;i<=last_row;i++)
            {
                spiral.push_back(a[i][last_col]);
            }
            last_col-=1;
          
            if(k<=last_row)
            {
                for(int i=last_col;i>=l;i--)
                {
                    spiral.push_back(a[last_row][i]);
                }
                last_row-=1;
            }

            if(l<=last_col)
            {
                for(int i=last_row;i>=k;i--)
                {
                    spiral.push_back(a[i][l]);
                }
                l+=1;
            }
           
        }
       
        reverse(begin(spiral),end(spiral));
        return spiral;
 


    }
};


int main() {
    
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    
    return 0;
}
