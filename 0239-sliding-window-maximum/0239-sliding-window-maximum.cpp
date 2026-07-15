class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int> v;
       deque<int> q;
       int i=0;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        while(!q.empty()&&nums[q.back()]<nums[i]) q.pop_back();
        q.push_back(i); //we r pushing indx of cur element not element
        if(q.front()==i-k) q.pop_front();
        if(i>=k-1) v.push_back(nums[q.front()]);
       }
       return v;
    }
};