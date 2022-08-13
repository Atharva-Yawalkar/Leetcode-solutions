class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nums1(n);
        vector<int> nums2(n);
        for (int i=0;i<n;i++){ 
            nums1[i]= nums[i];
            nums2[i]=nums[i+n];
        }
        for (int j=0;j<n;j++){
            nums[2*j]=nums1[j];
            nums[2*j+1]=nums2[j];
        }
        return nums;
        }
};