class Solution {
public:
   

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int size2 = nums2.size(),start=0;
    double sum=0;
    for(int i=0;i<size2;i++)
        nums1.push_back(nums2[i]);

    sort(nums1.begin(),nums1.end());

    int size1 = nums1.size();
    if(size1%2 == 0)
        return  (double )(nums1[size1/2 -1]+nums1[size1/2])/2;



    return nums1[size1/2];

}
};