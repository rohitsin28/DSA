class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int i = 0;
        int j = 0; 
        int len = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) arr.push_back(nums1[i++]);
            else arr.push_back(nums2[j++]);
        };

        while(i < nums1.size()) arr.push_back(nums1[i++]);
        while(j < nums2.size()) arr.push_back(nums2[j++]);
        
        len = arr.size();
        if(len%2 == 1) return arr[len/2];
        return (arr[len/2]+arr[len/2-1]) / 2.0;
    }
};