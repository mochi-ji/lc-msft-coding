class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        vector<vector<int>>dirs = {{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
        string start = to_string(board[0][0]) + to_string(board[0][1]) + to_string(board[0][2]) + to_string(board[1][0]) + to_string(board[1][1]) + to_string(board[1][2]);
        string end = "123450";
        queue<string>q;
        q.push(start);
        unordered_set<string>ss;
        int ans=0;
        ss.insert(start);
        while(!q.empty())
        {
            int l = q.size();
            for(int i=0;i<l;i++)
            {
                string p = q.front();
                q.pop();
                if(p==end)
                    return ans;
                int indz = p.find('0');
                for(auto dir : dirs[indz])
                {
                    string newstr = p;
                    newstr[dir]='0';
                    newstr[indz] = p[dir];
                    if(ss.count(newstr))
                        continue;
                    ss.insert(newstr);
                    q.push(newstr);
                }
            }
            ans++;
        }
        return -1;
    }
};
