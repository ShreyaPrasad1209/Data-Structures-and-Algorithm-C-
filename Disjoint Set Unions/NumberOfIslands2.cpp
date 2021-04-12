/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */

class Solution {
public:
    /**
     * @param n: An integer
     * @param m: An integer
     * @param operators: an array of point
     * @return: an integer array
     */
     
    int find(vector<int>& par,int i)
    {
        if(par[i]==-1)
        {
            par[i] = i;
            return i;
        }
        if(par[i]==i)
    		return par[i];
    	return par[i] = find(par,par[i]);
    }
    
    vector<int> numIslands2(int n, int m, vector<Point> &pts) {
        // write your code here
        int N = n*m;
        vector<int> par(N,-1);
        int ans = 0;
        int nq = pts.size();
        int row[] = {1,-1,0,0};
        int col[] = {0,0,-1,1};
        vector<int> res;
        for(int i=0;i<nq;i++)
        {
            Point curr = pts[i];
            int x = curr.x;
            int y = curr.y;
            int cp = x*m + y;
            if(par[cp]!=-1)     // the land is already here, 
                ans--;
            
            par[cp] = cp;                 // set parent to itself
            int p_curr = cp;
            ans++;
            for(int j=0;j<4;j++)
            {
                int a = x + row[j];
                int b = y + col[j];
                if(a<0||a>=n||b<0||b>=m)
                    continue;
                int adj = a*m + b;
                
                if(par[adj]!=-1)            // iff the land is present then process
                {
                    int p_adj = find(par,adj);
                    if(p_curr!=p_adj)
                    {
                        ans--;
                        par[p_adj] = p_curr;
                    }
                }
               
                
            }
            res.push_back(ans);
        }
        return res;
        
    }
};


//LintCode Link: https://www.lintcode.com/problem/434/
//Time Complexity: O(pts.size()*logN) N=par.size();
