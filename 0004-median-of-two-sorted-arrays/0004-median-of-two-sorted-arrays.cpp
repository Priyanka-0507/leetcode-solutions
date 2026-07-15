class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       nums1.insert(nums1.end(),nums2.begin(),nums2.end());
       sort(nums1.begin(),nums1.end());
       int n=nums1.size();
       int l=0,h=n-1;
       int middle; 
       if(n%2!=0)
       {
         middle=(l+h)/2;
         return nums1[middle];
       }
       else
       {
         middle=n/2;
         return (nums1[middle]+nums1[middle-1])/2.0;
       }
       return 0;
    }
};