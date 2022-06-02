class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
    queue<int>q;
        vector<bool> visit(rooms.size(),false);
        if(rooms[0].empty()==true)
            return false;
        visit[0]=true;
        for(int i=0;i<rooms[0].size();i++)
        {
            int rm=rooms[0][i];
            q.push(rm);
            visit[rm]=true;
        }
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(auto r:rooms[x])
            {
                 if(visit[r]==false)
                    {
                         q.push(r);
                        visit[r]=true;
                    }
            }
        }
           for(auto x:visit)
           {
                 if(x==false)
                return false;
           }

        return true;
                    
    }
};