class Solution {
public:
    int jump(vector<int>& nums) {
       if(nums.size()==1) return 0;
       int c=0;
       int mr=0;
       int cre=0;
       for(int i=0;i<nums.size();i++)
       {
          mr=max(mr,nums[i]+i);
          if(i==cre)
          {
            c++;
            cre=mr;
            if(cre>=nums.size()-1) break;
          }
       } 
       return c;
    }
};