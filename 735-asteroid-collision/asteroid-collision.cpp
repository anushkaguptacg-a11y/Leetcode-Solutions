class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        
        int n=asteroids.size();
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && asteroids[i]<0 && s.top()>0)
            {
                int sum=s.top()+asteroids[i];
                if(sum<0)
                s.pop();
                else if(sum>0)
                asteroids[i]=0;
                else
                {
                    asteroids[i]=0;
                    s.pop();
                }
            }
            if(asteroids[i]!=0)
            s.push(asteroids[i]);
        }  
        int m=s.size();
        vector<int> ans(m);
        for(int i=m-1;i>=0;i--)
        {
        ans[i]=s.top();    
        s.pop();
        }
        return ans;
    }
};