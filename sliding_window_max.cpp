vector<int> solve(vector<int>& nums, int k) {
    vector<int>ans;
    deque<int>q(k);
    for(int i=0;i<k;i++)
    {
        while(!q.empty() and nums[q.back()]<=nums[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    for(int i=k;i<nums.size();i++)
    {
        ans.push_back(nums[q.front()]);
        while(!q.empty() and q.front()<=i-k)
        q.pop_front();
        while(!q.empty() and nums[i]>=nums[q.back()])
        q.pop_back();
        q.push_back(i);
    }
    ans.push_back(nums[q.front()]);
    return ans;
}
